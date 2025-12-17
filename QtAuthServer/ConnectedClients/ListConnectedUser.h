#ifndef LISTCONNECTEDUSER_H
#define LISTCONNECTEDUSER_H

#include <QList>
#include "../Data/DTO/UserModel.h"
#include "../Common/ServerSocket/ServerSocketAdapter.h"

struct UserServer
{
    UserModel userModel;
    ServerSocketAdapter serverSocket;
};

class ListConnectedUser
{
private:
    QList <UserServer> listUsers;
public:

};

#endif // LISTCONNECTEDUSER_H
