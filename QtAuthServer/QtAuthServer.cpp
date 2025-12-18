#include "QtAuthServer.h"
#include "../Common/ServerSocket/ServerSocketAdapter.h"
#include "../Common/Sockets/SocketInterface/InterfaceSocketAdapter.h"

QtAuthServer::QtAuthServer(int nPort, QObject *parent) : QObject(parent),
    pointerTcpServer(new QTcpServer(this))
{
    connect(pointerTcpServer, SIGNAL(newConnection()), SLOT(on_newConnection()));

    if (pointerTcpServer->listen(QHostAddress::Any, nPort) && dataBase.ConnectToDataBase())
    {
        qDebug() << "Сервер запущен";
    }
    else if (!pointerTcpServer->listen(QHostAddress::Any, nPort))
    {
        pointerTcpServer->close();
        throw pointerTcpServer->errorString();
    }
}

void QtAuthServer::on_newConnection()
{
    // qDebug() << "new connection";

    // QTcpSocket* pclientSock = pointerTcpServer->nextPendingConnection();
    // InterfaceSocketAdapter *pSockHandle = new ServerSocketAdapter(pclientSock);

    // listUsers.push_back(pSockHandle);

    // pSockHandle->sendString("connect");

    // connect(pSockHandle, SIGNAL(disconnected()), SLOT(on_disconnected()));
    // connect(pSockHandle, SIGNAL(message(QString)), SLOT(on_message(QString)));
}

void QtAuthServer::on_disconnected()
{
    // qDebug() << "client disconnected";
    // InterfaceSocketAdapter* user = static_cast<ServerSocketAdapter*>(sender());
    // listUsers.removeOne(user);
    // delete user;
}

void QtAuthServer::on_message(QString msg)
{
    // foreach (InterfaceSocketAdapter *sock, listUsers)
    //     sock->sendString(msg);
}
