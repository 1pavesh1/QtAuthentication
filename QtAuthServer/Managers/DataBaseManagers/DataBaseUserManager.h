#ifndef DATABASEUSERMANAGER_H
#define DATABASEUSERMANAGER_H

#include "../InterfaceDAO/InterfaceDAO.h"
#include "../Data/DTO/UserModel.h"
#include "DataBase.h"

class DataBaseUserManager : public InterfaceDAO<UserModel>
{
private:
    DataBase dataBase;
public:
    explicit DataBaseUserManager(const DataBase &db) : dataBase(db) { }

    QList<UserModel> findAll() const override
    {

    }

    QList<UserModel> findById(const qint32 &idUser) const override
    {

    }

    bool insertData(const UserModel &userModel) const override
    {

    }

    bool deleteData(const UserModel &userModel) const override
    {

    }

    bool updateData(const UserModel &userModel) const override
    {

    }
};

#endif // DATABASEUSERMANAGER_H
