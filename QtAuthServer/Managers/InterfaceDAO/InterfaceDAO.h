#ifndef INTERFACEDAO_H
#define INTERFACEDAO_H

#include <QList>

template<typename T>
class InterfaceDAO
{
public:
    virtual QList<T> findAll() const;
    virtual QList<T> findById(const qint32 &id) const;
    virtual bool insertData(const T &data) const;
    virtual bool deleteData(const T &data) const;
    virtual bool updateData(const T &data) const;
};

#endif // INTERFACEDAO_H
