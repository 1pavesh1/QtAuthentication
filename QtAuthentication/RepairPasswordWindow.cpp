#include "RepairPasswordWindow.h"
#include "ui_RepairPasswordWindow.h"

RepairPasswordWindow::RepairPasswordWindow(QWidget *parent)
    : BaseWindow(parent)
    , ui(new Ui::RepairPasswordWindow)
{
    ui->setupUi(this);
}

RepairPasswordWindow::~RepairPasswordWindow()
{
    delete ui;
}

void RepairPasswordWindow::setInterfaceCode(const bool &isMail)
{
    if (isMail)
        ui->acceptCodeSMSFrame->setVisible(false);
    else
        ui->acceptCodeMailFrame->setVisible(false);
}

void RepairPasswordWindow::ConnectSlots()
{

}

void RepairPasswordWindow::DisconnectSlots()
{

}

void RepairPasswordWindow::on_sendSMSCodeButton_clicked()
{
    animationSwapFrame.CloseAnimation(this, ui->acceptCodeSMSFrame);
}

void RepairPasswordWindow::on_sendRepeatSMSCodeButton_clicked()
{

}

void RepairPasswordWindow::on_sendMailCodeButton_clicked()
{
    animationSwapFrame.CloseAnimation(this, ui->acceptCodeMailFrame);
}

void RepairPasswordWindow::on_sendRepeatMailCodeButton_clicked()
{

}

void RepairPasswordWindow::on_newPasswordButton_clicked()
{
    this->close();
    AuthWindow *authWindow = new AuthWindow();
    authWindow->setAttribute(Qt::WA_DeleteOnClose);
    authWindow->show();
}
