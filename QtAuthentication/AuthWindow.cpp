#include "AuthWindow.h"
#include "ui_AuthWindow.h"

AuthWindow::AuthWindow(QWidget *parent)
    : BaseWindow(parent)
    , ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
    ConnectSlots();
}

AuthWindow::~AuthWindow()
{
    delete ui;
}

void AuthWindow::ConnectSlots()
{
    connect(ui->closeEye, &QPushButton::clicked, this, &AuthWindow::ChangedEye);
    connect(ui->openEye, &QPushButton::clicked, this, &AuthWindow::ChangedEye);
}

void AuthWindow::DisconnectSlots()
{

}

void AuthWindow::ChangedEye()
{
    if (ui->closeEye->isVisible())
    {
        ui->openEye->setVisible(true);
        ui->closeEye->setVisible(false);
        ui->passwordQLineEdit->setEchoMode(QLineEdit::Normal);
    }
    else if (ui->openEye->isVisible())
    {
        ui->openEye->setVisible(false);
        ui->closeEye->setVisible(true);
        ui->passwordQLineEdit->setEchoMode(QLineEdit::Password);
    }
}

void AuthWindow::on_authButton_clicked()
{
    ValidatorUserInfo validatorUserInfo(this);
    QList <QLineEdit*> listLineEdits = this->findChildren<QLineEdit*>();
    if (validatorUserInfo.InputDataIsValid(listLineEdits))
    {
        this->close();
        ConfirmationAccessCodeWindow *confirmationAccessCodeWindow = new ConfirmationAccessCodeWindow();
        confirmationAccessCodeWindow->setAttribute(Qt::WA_DeleteOnClose);
        confirmationAccessCodeWindow->show();
    }
}

void AuthWindow::on_regLink_clicked()
{
    this->close();
    RegWindow *regWindow = new RegWindow();
    regWindow->setAttribute(Qt::WA_DeleteOnClose);
    regWindow->show();
}

void AuthWindow::on_passwordLink_clicked()
{
    ValidatorUserInfo validatorUserInfo(this);
    QList <QLineEdit*> listLineEdits = { ui->phoneQLineEdit };
    if (validatorUserInfo.InputDataIsValid(listLineEdits))
    {
        RepairPasswordWindow *repairPasswordWindow = new RepairPasswordWindow();

        if (ui->phoneQLineEdit->text().contains('@'))
            repairPasswordWindow->setInterfaceCode(true);
        else
            repairPasswordWindow->setInterfaceCode(false);

        this->close();
        repairPasswordWindow->setAttribute(Qt::WA_DeleteOnClose);
        repairPasswordWindow->show();
    }
}
