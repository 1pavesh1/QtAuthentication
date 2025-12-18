#ifndef SOCKETADAPTER_H
#define SOCKETADAPTER_H

#include "../SocketInterface/InterfaceSocketAdapter.h"

class QTcpSocket;
class SocketAdapter : public InterfaceSocketAdapter
{
    Q_OBJECT
public:
    SocketAdapter(QObject *parent, QTcpSocket *pSock = 0);
    virtual ~SocketAdapter();
    void sendString(const TypeQuery &typeQuery, const Data &data);
protected slots:
    virtual void on_readyRead();
    void on_disconnected();
protected:
    QTcpSocket *pointerTcpSocket;
    qint32      msgSize;
};

#endif // SOCKETADAPTER_H
