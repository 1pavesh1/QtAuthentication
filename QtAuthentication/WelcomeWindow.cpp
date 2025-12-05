#include "WelcomeWindow.h"
#include "ui_WelcomeWindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : BaseWindow(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::ConnectSlots()
{

}

void WelcomeWindow::DisconnectSlots()
{

}

void WelcomeWindow::on_exitButton_clicked()
{
    this->close();
}

