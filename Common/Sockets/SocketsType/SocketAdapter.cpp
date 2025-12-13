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

void SocketAdapter::sendString(const QString& str)
{
    QByteArray block;
    QDataStream sendStream(&block, QIODevice::ReadWrite);

    sendStream << quint16(0) << str;

    sendStream.device()->seek(0);
    sendStream << (quint16)(block.size() - sizeof(quint16));

    pointerTcpSocket->write(block);
}

void SocketAdapter::on_readyRead()
{
    QString buff;
    QDataStream stream(pointerTcpSocket);

    while(true)
    {
        if (msgSize < 0)
        {
            if (pointerTcpSocket->bytesAvailable() < sizeof(int))
                return;
            stream >> msgSize;
        }
        else
        {
            if (pointerTcpSocket->bytesAvailable() < msgSize)
                return;
            stream >> buff;
            emit message(buff);
            msgSize = -1;
        }
    }
}

void SocketAdapter::on_disconnected()
{
    pointerTcpSocket->deleteLater();
    emit disconnected();
}
