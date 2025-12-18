#ifndef INTERFACESOCKETADAPTER_H
#define INTERFACESOCKETADAPTER_H

#include <QObject>
#include <QVector>
#include <QTcpSocket>
#include <QDataStream>
#include "../Data/Data.h"
#include "../Data/Enum/TypeQuery.h"

class InterfaceSocketAdapter : public QObject
{
    Q_OBJECT
public:
    explicit InterfaceSocketAdapter(QObject *parent);
    virtual ~InterfaceSocketAdapter();
    virtual void sendString(const TypeQuery &typeQuery, const Data &data);
signals:
    void message(QString text);
    void disconnected();
};

#endif // INTERFACESOCKETADAPTER_H
