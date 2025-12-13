#ifndef INTERFACESOCKETADAPTER_H
#define INTERFACESOCKETADAPTER_H

#include <QObject>
#include <QVector>
#include <QTcpSocket>
#include <QDataStream>

class InterfaceSocketAdapter : public QObject
{
    Q_OBJECT
public:
    explicit InterfaceSocketAdapter(QObject *parent);
    virtual ~InterfaceSocketAdapter();
    virtual void sendString(const QString& str) = 0;
signals:
    void message(QString text);
    void disconnected();
};

#endif // INTERFACESOCKETADAPTER_H
