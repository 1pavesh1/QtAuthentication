#ifndef QTAUTHSERVER_H
#define QTAUTHSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>
#include <QList>
#include "../DataBase/DataBase.h"
#include "../ConnectedClients/ListConnectedUser.h"

class QTcpServer;
class QTcpSocket;
class InterfaceSocketAdapter;

class QtAuthServer : public QObject
{
    Q_OBJECT
private:
    DataBase            dataBase;
    ListConnectedUser   listConnectedUsers;
public:
    explicit QtAuthServer(int nPort, QObject *parent = 0);
public slots:
    void on_newConnection();
    void on_disconnected();
    void on_message(QString);
protected:
    QTcpServer* pointerTcpServer;
    // QList<InterfaceSocketAdapter*> listUsers;
};

#endif // QTAUTHSERVER_H
