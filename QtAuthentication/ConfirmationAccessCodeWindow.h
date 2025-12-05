#ifndef CONFIRMATIONACCESSCODEWINDOW_H
#define CONFIRMATIONACCESSCODEWINDOW_H

#include "InterfaceWindows/BaseWindow.h"
#include "WelcomeWindow.h"

namespace Ui {
class ConfirmationAccessCodeWindow;
}

class ConfirmationAccessCodeWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit ConfirmationAccessCodeWindow(QWidget *parent = nullptr);
    ~ConfirmationAccessCodeWindow();

private slots:
    void on_confirmAccessCodeButton_clicked();

private:
    Ui::ConfirmationAccessCodeWindow *ui;

    void ConnectSlots() override;
    void DisconnectSlots() override;
};

#endif // CONFIRMATIONACCESSCODEWINDOW_H
