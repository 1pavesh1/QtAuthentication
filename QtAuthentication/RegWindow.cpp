#include "RegWindow.h"
#include "ui_RegWindow.h"

RegWindow::RegWindow(QWidget *parent)
    : BaseWindow(parent)
    , ui(new Ui::RegWindow)
{
    ui->setupUi(this);
    ConnectSlots();
}

RegWindow::~RegWindow()
{
    delete ui;
}

void RegWindow::ConnectSlots()
{
    connect(ui->closeEye, &QPushButton::clicked, this, &RegWindow::ChangedEye);
    connect(ui->openEye, &QPushButton::clicked, this, &RegWindow::ChangedEye);
}

void RegWindow::DisconnectSlots()
{

}

void RegWindow::ChangedEye()
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

void RegWindow::on_authLink_clicked()
{
    this->close();
    AuthWindow *authWindow = new AuthWindow();
    authWindow->setAttribute(Qt::WA_DeleteOnClose);
    authWindow->show();
}

void RegWindow::on_userInfoButton_clicked()
{
    ValidatorUserInfo validatorUserInfo(this);
    QList <QLineEdit*> listLineEdits = ui->UserInfoFrame->findChildren<QLineEdit*>();
    if (validatorUserInfo.InputDataIsValid(listLineEdits))
    {
        animationSwapFrame.CloseAnimation(this, ui->UserInfoFrame);
    }
}

void RegWindow::on_backToUserInfoFromPhoneButton_clicked()
{
    animationSwapFrame.OpenAnimation(this, ui->UserInfoFrame);
}

void RegWindow::on_phoneButton_clicked()
{
    ValidatorUserInfo validatorUserInfo(this);
    QList <QLineEdit*> listLineEdits = ui->InputPhoneFrame->findChildren<QLineEdit*>();
    if (validatorUserInfo.InputDataIsValid(listLineEdits))
    {
        animationSwapFrame.CloseAnimation(this, ui->InputPhoneFrame);
    }
}

void RegWindow::on_backToPhoneFromAccessCodeButton_clicked()
{
    animationSwapFrame.OpenAnimation(this, ui->InputPhoneFrame);
}

void RegWindow::on_accessCodeButton_clicked()
{
    ValidatorUserInfo validatorUserInfo(this);
    QList <QLineEdit*> listLineEdits = ui->InputAccessCodePhoneFrame->findChildren<QLineEdit*>();
    if (validatorUserInfo.InputDataIsValid(listLineEdits))
    {
        animationSwapFrame.CloseAnimation(this, ui->InputAccessCodePhoneFrame);
    }
}

void RegWindow::on_backToAccessCodeInfoButton_clicked()
{
    animationSwapFrame.OpenAnimation(this, ui->InputAccessCodePhoneFrame);
}

void RegWindow::on_regButton_clicked()
{
    this->close();
    WelcomeWindow *welcomeWindow = new WelcomeWindow();
    welcomeWindow->setAttribute(Qt::WA_DeleteOnClose);
    welcomeWindow->show();
}
