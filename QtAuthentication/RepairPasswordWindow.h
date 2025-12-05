#ifndef REPAIRPASSWORDWINDOW_H
#define REPAIRPASSWORDWINDOW_H

#include "InterfaceWindows/BaseWindow.h"
#include "Animations/AnimationWidgets/AnimationSwapFrame.h"
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
private slots:

    void on_sendSMSCodeButton_clicked();

    void on_sendRepeatSMSCodeButton_clicked();

    void on_newPasswordButton_clicked();

private:
    Ui::RepairPasswordWindow *ui;
    AnimationSwapFrame animationSwapFrame;

    void ConnectSlots() override;
    void DisconnectSlots() override;
};

#endif // REPAIRPASSWORDWINDOW_H
