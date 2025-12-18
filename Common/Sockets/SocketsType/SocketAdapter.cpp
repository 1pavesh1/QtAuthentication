#include "../SocketsType/SocketAdapter.h"

SocketAdapter::SocketAdapter(QObject *parent, QTcpSocket *pSock)
    : InterfaceSocketAdapter(parent), msgSize(-1)
{
    if (0 == pSock)
        pointerTcpSocket = new QTcpSocket(this);
    else
        pointerTcpSocket = pSock;
    connect(pointerTcpSocket, SIGNAL(readyRead()), this, SLOT(on_readyRead()));
    connect(pointerTcpSocket, SIGNAL(disconnected()), this, SLOT(on_disconnected()));
}

SocketAdapter::~SocketAdapter() { }

void SocketAdapter::sendString(const TypeQuery &typeQuery, const Data &data)
{
    QByteArray block;
    QDataStream out(&block, QIODevice::ReadWrite);

    out << quint32(0) << typeQuery << data;

    out.device()->seek(0);
    out << (quint32)(block.size() - sizeof(quint32));

    pointerTcpSocket->write(block);
}

void SocketAdapter::on_disconnected()
{
    pointerTcpSocket->deleteLater();
    emit disconnected();
}
