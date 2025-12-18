#ifndef USERMODEL_H
#define USERMODEL_H

#include "../Data.h"

class UserModel : public Data
{
private:
    qint32      idUser;
    qint32      accessCode;
    QString     login;
    QString     password;
    QString     phone;
    QString     email;
    QString     entryTime;
    QString     dateBithday;

    bool        isOnline;

    void serialize(QDataStream &out) const override
    {
        out << idUser << login << password << phone << email
            << entryTime << dateBithday << isOnline;
    }

    void deserialize(QDataStream &in) override
    {
        in  >> idUser >> login >> password >> phone >> email
            >> entryTime >> dateBithday >> isOnline;
    }

public:
    UserModel() : idUser(0), login(""), password(""), phone(""), email(""),
        entryTime(""), dateBithday(""), isOnline(false)
    {

    }

    qint32      GetIdUser()              const              { return idUser;               }
    qint32      GetAccessCode()          const              { return accessCode;           }
    QString     GetLogin()               const              { return login;                }
    QString     GetPassword()            const              { return password;             }
    QString     GetPhone()               const              { return phone;                }
    QString     GetEmail()               const              { return email;                }
    QString     GetEntryTime()           const              { return entryTime;            }
    QString     GetDateBithday()         const              { return dateBithday;          }
    bool        GetStatus()              const              { return isOnline;             }

    void SetIdUser(const qint32 &idUser)                                    { this->idUser              = idUser;               }
    void SetAccessCode(const qint32 &accessCode)                            { this->accessCode          = accessCode;           }
    void SetLogin(const QString &login)                                     { this->login               = login;                }
    void SetPassword(const QString &password)                               { this->password            = password;             }
    void SetPhone(const QString &phone)                                     { this->phone               = phone;                }
    void SetEmail(const QString &email)                                     { this->email               = email;                }
    void SetEntryTime(const QString &entryTime)                             { this->entryTime           = entryTime;            }
    void SetDateBithday(const QString &dateBithday)                         { this->dateBithday         = dateBithday;          }
    void SetStatus(const bool &isOnline)                                    { this->isOnline            = isOnline;             }
};

#endif // USERMODEL_H
