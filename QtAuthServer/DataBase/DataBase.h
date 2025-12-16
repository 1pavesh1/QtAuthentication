#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QString>

class DataBase
{
private:
    const QString CONNECT_DB = "DRIVER={ODBC Driver 17 for SQL Server};SERVER=PAVESH;DATABASE=QtAuth;Trusted_Connection=yes;";
    QSqlDatabase dataBase;
public:
    explicit DataBase() {  }

    ~DataBase()
    {
        if (dataBase.isOpen())
            dataBase.close();
    }

    bool ConnectToDataBase()
    {
        dataBase = QSqlDatabase::addDatabase("QODBC");
        dataBase.setDatabaseName(CONNECT_DB);
        if (dataBase.open())
            qDebug() << "Успешное подключение к DataBaseQtAuth";
        else
            qDebug() << "Ошибка подключения к DataBaseQtAuth:" << dataBase.lastError().text();
        return dataBase.open();
    }

    QSqlDatabase GetDataBase() const
    {
        return dataBase;
    }
};

#endif // DATABASE_H
