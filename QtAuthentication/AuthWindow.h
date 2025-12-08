#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include "InterfaceWindows/BaseWindow.h"
#include "Validator/Validators/ValidatorUserInfo.h"
#include "ConfirmationAccessCodeWindow.h"
#include "RepairPasswordWindow.h"
#include "RegWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class AuthWindow;
}
QT_END_NAMESPACE

class AuthWindow : public BaseWindow
{
    Q_OBJECT

public:
    AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();

private slots:

    void on_authButton_clicked();

    void on_regLink_clicked();

    void on_passwordLink_clicked();

private:
    Ui::AuthWindow *ui;

    void ConnectSlots() override;
    void DisconnectSlots() override;
    void ChangedEye();
};

#endif // AUTHWINDOW_H
