#include "../ClientSocket/ClientSocketAdapter.h"

ClientSocketAdapter::ClientSocketAdapter(QObject *parent)
    : SocketAdapter(parent)
{
    pointerTcpSocket->connectToHost("localhost", 1024);
}
