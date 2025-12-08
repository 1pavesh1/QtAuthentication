#ifndef VALIDATORUSERINFO_H
#define VALIDATORUSERINFO_H

#include <QList>
#include <QLineEdit>
#include "../CustomWidgets/Widgets/NotificationWidget.h"
#include "../InterfaceWindows/BaseWindow.h"

class ValidatorUserInfo
{
private:
    NotificationWidget  *notificationWidget;
    QWidget             *parent;

    bool AccessCodeIsValid(const QString &accessCode)
    {
        if (accessCode.size() < 6)
        {
            notificationWidget = new NotificationWidget(parent, "Код состоит из 6 цифр", WARNING);
            return false;
        }

        for (const auto symbol : accessCode)
        {
            if (!(symbol >= '0' && symbol <= '9'))
            {
                notificationWidget = new NotificationWidget(parent, "Код состоит только из цифр", WARNING);
                return false;
            }
        }
        return true;
    }

    bool LoginIsValid(const QString &login)
    {
        if (login.size() < 5)
        {
            notificationWidget = new NotificationWidget(parent, "Логин должен быть не меньше 5 символов", WARNING);
            return false;
        }

        for (const auto symbol : login)
        {
            if (!((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')))
            {
                notificationWidget = new NotificationWidget(parent, "Логин должен состоять только из латинских символов", WARNING);
                return false;
            }
        }
        return true;
    }

    bool PasswordIsValid(const QString &password)
    {
        bool isNumber = 0;
        if (password.size() < 5)
        {
            notificationWidget = new NotificationWidget(parent, "Пароль должен быть не меньше 5 символов", WARNING);
            return false;
        }

        for (const auto symbol : password)
        {
            if (symbol >= '0' && symbol <= '9')
            {
                isNumber = true;
                continue;
            }
            if (!((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')))
            {
                notificationWidget = new NotificationWidget(parent, "Пароль должен состоять из латинских символов и цифр", WARNING);
                return false;
            }
        }

        if (!isNumber)
        {
            notificationWidget = new NotificationWidget(parent, "В пароле должны быть цифры", WARNING);
            return false;
        }
        else
        {
            return true;
        }
    }

    bool PhoneIsValid(const QString &phone)
    {
        if (phone.size() < 10)
        {
            notificationWidget = new NotificationWidget(parent, "Поле телефон не заполнено", WARNING);
            return false;
        }
        return true;
    }

    bool EmailIsValid(const QString &email)
    {
        if (!(email.contains("@mail.ru") || email.contains("@mail.com")))
        {
            notificationWidget = new NotificationWidget(parent, "Поле почта заполнено неверно", WARNING);
            return false;
        }
        return true;
    }

    bool ValidateUserInfo(const QLineEdit *inputField)
    {
        if (inputField->objectName() == "accessCodeQLineEdit")
            return AccessCodeIsValid(inputField->text());
        else if (inputField->objectName() == "phoneAccessCodeQLineEdit")
            return AccessCodeIsValid(inputField->text());
        else if (inputField->objectName() == "loginQLineEdit")
            return LoginIsValid(inputField->text());
        else if (inputField->objectName() == "passwordQLineEdit")
            return PasswordIsValid(inputField->text());
        else if (inputField->objectName() == "phoneQLineEdit" && !inputField->text().contains('@'))
            return PhoneIsValid(inputField->text());
        else if (inputField->objectName() == "phoneQLineEdit" && inputField->text().contains('@'))
            return EmailIsValid(inputField->text());
    }

public:
    ValidatorUserInfo() { }

    ValidatorUserInfo(QWidget *parent) : parent(parent) { }

    bool InputDataIsValid(const QList <QLineEdit*> &listInputFileds)
    {
        for (const QLineEdit *inputField : listInputFileds)
        {
            if (!ValidateUserInfo(inputField))
                return false;
        }
        return true;
    }
};

#endif // VALIDATORUSERINFO_H
