#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include "InterfaceWindows/BaseWindow.h"
#include "AuthWindow.h"

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr);
    ~WelcomeWindow();

private slots:
    void on_exitButton_clicked();

private:
    Ui::WelcomeWindow *ui;

    void ConnectSlots() override;
    void DisconnectSlots() override;
};

#endif // WELCOMEWINDOW_H
