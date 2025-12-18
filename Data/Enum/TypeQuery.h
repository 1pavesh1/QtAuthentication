#ifndef TYPEQUERY_H
#define TYPEQUERY_H

enum TypeQuery
{
    // Тип запроса к серверу
    REG_USER_QUERY,
    AUTH_USER_QUERY,
    CLOSE_APP_USER_QUERY,
    LOGOUT_USER_QUERY,
    // Тип ответа от сервера
    REG_USER_REPEAT,
    REG_USER_FAILED,
    REG_USER_ACCESS,
    AUTH_USER_FAILED,
    AUTH_USER_ON_SERVER_FAILED,
    AUTH_USER_ACCESS,
};

#endif // TYPEQUERY_H
