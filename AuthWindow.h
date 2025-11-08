#ifndef AUTHWINDOW_H
#define AUTHWINDOW_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class AuthWindow;
}
QT_END_NAMESPACE

class AuthWindow : public QDialog
{
    Q_OBJECT

public:
    AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();

private:
    Ui::AuthWindow *ui;
};
#endif // AUTHWINDOW_H
