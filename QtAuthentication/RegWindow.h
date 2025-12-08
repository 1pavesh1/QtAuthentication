#ifndef REGWINDOW_H
#define REGWINDOW_H

#include "InterfaceWindows/BaseWindow.h"
#include "Animations/AnimationWidgets/AnimationSwapFrame.h"
#include "Validator/Validators/ValidatorUserInfo.h"
#include "AuthWindow.h"
#include "WelcomeWindow.h"

namespace Ui {
class RegWindow;
}

class RegWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit RegWindow(QWidget *parent = nullptr);
    ~RegWindow();

private slots:

    void on_userInfoButton_clicked();

    void on_authLink_clicked();

    void on_backToUserInfoFromPhoneButton_clicked();

    void on_phoneButton_clicked();

    void on_backToPhoneFromAccessCodeButton_clicked();

    void on_accessCodeButton_clicked();

    void on_regButton_clicked();

    void on_backToAccessCodeInfoButton_clicked();

private:
    Ui::RegWindow *ui;
    AnimationSwapFrame animationSwapFrame;

    void ConnectSlots() override;
    void DisconnectSlots() override;
    void ChangedEye();
};

#endif // REGWINDOW_H
