#include "../ServerSocket/ServerSocketAdapter.h"
#include <QTcpSocket>

ServerSocketAdapter::ServerSocketAdapter(QTcpSocket* pSock, QObject *parent) : SocketAdapter(parent, pSock) { }

void ServerSocketAdapter::on_readyRead()
{
    QDataStream in(pointerTcpSocket);
    in.setVersion(QDataStream::Qt_6_9);
    if (in.status() == QDataStream::Ok)
    {
        while (1)
        {
            if (this->msgSize == 0)
            {
                if (pointerTcpSocket->bytesAvailable() < 2)
                {
                    break;
                }
                in >> this->msgSize;
            }
            if (pointerTcpSocket->bytesAvailable() < this->msgSize)
            {
                break;
            }
            // ReadQuery(in, socket);
            this->msgSize = 0;
        }
    }
    else
    {
        qDebug() << "Ошибка передачи сообщения...";
    }
}
