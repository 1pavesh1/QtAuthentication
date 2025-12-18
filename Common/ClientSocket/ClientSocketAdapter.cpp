#include "../ClientSocket/ClientSocketAdapter.h"

ClientSocketAdapter::ClientSocketAdapter(QObject *parent)
    : SocketAdapter(parent)
{
    pointerTcpSocket->connectToHost("localhost", 1024);
}

void ClientSocketAdapter::on_readyRead()
{
    // QString buff;
    // QDataStream stream(pointerTcpSocket);

    // while(true)
    // {
    //     if (msgSize < 0)
    //     {
    //         if (pointerTcpSocket->bytesAvailable() < sizeof(int))
    //             return;
    //         stream >> msgSize;
    //     }
    //     else
    //     {
    //         if (pointerTcpSocket->bytesAvailable() < msgSize)
    //             return;
    //         stream >> buff;
    //         emit message(buff);
    //         msgSize = -1;
    //     }
    // }
}
