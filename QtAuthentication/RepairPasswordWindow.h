#ifndef REPAIRPASSWORDWINDOW_H
#define REPAIRPASSWORDWINDOW_H

#include "InterfaceWindows/BaseWindow.h"
#include "Animations/AnimationWidgets/AnimationSwapFrame.h"
#include "Validator/Validators/ValidatorUserInfo.h"
#include "AuthWindow.h"

namespace Ui {
class RepairPasswordWindow;
}

class RepairPasswordWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit RepairPasswordWindow(QWidget *parent = nullptr);
    ~RepairPasswordWindow();
    void setInterfaceCode(const bool &isMail);
private slots:

    void on_sendSMSCodeButton_clicked();

    void on_sendRepeatSMSCodeButton_clicked();

    void on_newPasswordButton_clicked();

    void on_sendMailCodeButton_clicked();

    void on_sendRepeatMailCodeButton_clicked();

private:
    Ui::RepairPasswordWindow *ui;
    AnimationSwapFrame animationSwapFrame;

    void ConnectSlots() override;
    void DisconnectSlots() override;
};

#endif // REPAIRPASSWORDWINDOW_H
