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
        QList<UserModel> userList;
        UserModel        tempUserModel;
        QSqlQuery        query(dataBase.GetDataBase());

        query.prepare("SELECT * FROM users;");

        if (!query.exec())
        {
            qDebug() << query.lastError().text();
        }
        if (query.next())
        {
            tempUserModel.SetIdUser(query.value(0).toInt());
            tempUserModel.SetAccessCode(query.value(1).toInt());
            tempUserModel.SetLogin(query.value(2).toString());
            tempUserModel.SetPassword(query.value(3).toString());
            tempUserModel.SetPhone(query.value(4).toString());
            tempUserModel.SetEmail(query.value(5).toString());
            tempUserModel.SetEntryTime(query.value(6).toString());
            tempUserModel.SetDateBithday(query.value(7).toString());

            userList.push_back(tempUserModel);
        }

        return userList;
    }

    UserModel findById(const qint32 &idUser) const override
    {
        UserModel       tempUserModel;
        QSqlQuery       query(dataBase.GetDataBase());

        query.prepare("SELECT * FROM users WHERE id_user = :id_user;");
        query.bindValue(":id_user", idUser);

        if (!query.exec())
        {
            qDebug() << query.lastError().text();
        }
        if (query.next())
        {
            tempUserModel.SetIdUser(query.value(0).toInt());
            tempUserModel.SetAccessCode(query.value(1).toInt());
            tempUserModel.SetLogin(query.value(2).toString());
            tempUserModel.SetPassword(query.value(3).toString());
            tempUserModel.SetPhone(query.value(4).toString());
            tempUserModel.SetEmail(query.value(5).toString());
            tempUserModel.SetEntryTime(query.value(6).toString());
            tempUserModel.SetDateBithday(query.value(7).toString());
        }

        return tempUserModel;
    }

    bool insertData(UserModel &userModel) const override
    {
        QSqlQuery query(dataBase.GetDataBase());

        query.prepare("INSERT INTO users (access_code, login, password, phone, entry_time) VALUES (?, ?, ?, ?, ?);");

        query.addBindValue(userModel.GetAccessCode());
        query.addBindValue(userModel.GetLogin());
        query.addBindValue(userModel.GetPassword());
        query.addBindValue(userModel.GetPhone());
        query.addBindValue(userModel.GetEntryTime());

        if (!query.exec())
        {
            qDebug() << query.lastError().text();
            return false;
        }

        query.prepare("SELECT * FROM users WHERE login = :login AND password = :password AND phone = :phone;");
        query.bindValue(":login", userModel.GetLogin());
        query.bindValue(":password", userModel.GetPassword());
        query.bindValue(":phone", userModel.GetPhone());

        if (!query.exec())
        {
            qDebug() << query.lastError().text();
            return false;
        }
        if (query.next())
        {
            if (userModel.GetLogin() == query.value(1).toString() && userModel.GetPassword() == query.value(2).toString()
                && userModel.GetPhone() == query.value(3).toString())
            {
                userModel.SetIdUser(query.value(0).toInt());
                userModel.SetStatus(true);

                return true;
            }
        }

        return true;
    }

    bool deleteData(const UserModel &userModel) const override
    {
        QSqlQuery query(dataBase.GetDataBase());

        query.prepare("DELETE * FROM users WHERE id_user = ?;");

        query.addBindValue(userModel.GetIdUser());

        if (!query.exec())
        {
            qDebug() << query.lastError().text();
            return false;
        }

        return true;
    }

    bool updateData(const UserModel &userModel) const override
    {
        QSqlQuery query(dataBase.GetDataBase());

        query.prepare("UPDATE users SET access_code = ?, login = ?, password = ?, phone = ?, email = ?, date_birthday = ? WHERE id_user = ?;");

        query.addBindValue(userModel.GetAccessCode());
        query.addBindValue(userModel.GetLogin());
        query.addBindValue(userModel.GetPassword());
        query.addBindValue(userModel.GetPhone());
        query.addBindValue(userModel.GetEmail());
        query.addBindValue(userModel.GetDateBithday());
        query.addBindValue(userModel.GetIdUser());

        if (!query.exec())
        {
            qDebug() << query.lastError().text();
            return false;
        }

        return true;
    }
};

#endif // DATABASEUSERMANAGER_H
