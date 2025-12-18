#ifndef SERVERSOCKETADAPTER_H
#define SERVERSOCKETADAPTER_H

#include "../Sockets/SocketsType/SocketAdapter.h"

class ServerSocketAdapter : public SocketAdapter
{
    Q_OBJECT
public:
    explicit ServerSocketAdapter(QTcpSocket* pSock, QObject *parent = 0);
protected slots:
    void on_readyRead() override;
};

#endif // SERVERSOCKETADAPTER_H
