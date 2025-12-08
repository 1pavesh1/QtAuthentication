#include "ConfirmationAccessCodeWindow.h"
#include "ui_ConfirmationAccessCodeWindow.h"

ConfirmationAccessCodeWindow::ConfirmationAccessCodeWindow(QWidget *parent)
    : BaseWindow(parent)
    , ui(new Ui::ConfirmationAccessCodeWindow)
{
    ui->setupUi(this);
}

ConfirmationAccessCodeWindow::~ConfirmationAccessCodeWindow()
{
    delete ui;
}

void ConfirmationAccessCodeWindow::ConnectSlots()
{

}

void ConfirmationAccessCodeWindow::DisconnectSlots()
{

}

void ConfirmationAccessCodeWindow::on_confirmAccessCodeButton_clicked()
{
    ValidatorUserInfo validatorUserInfo(this);
    QList <QLineEdit*> listLineEdits = this->findChildren<QLineEdit*>();
    if (validatorUserInfo.InputDataIsValid(listLineEdits))
    {
        this->close();
        WelcomeWindow *welcomeWindow = new WelcomeWindow();
        welcomeWindow->setAttribute(Qt::WA_DeleteOnClose);
        welcomeWindow->show();
    }
}

