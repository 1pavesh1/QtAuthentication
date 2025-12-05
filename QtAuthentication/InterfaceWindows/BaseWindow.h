#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QDialog>
#include <QCloseEvent>
#include <QWidget>
#include <QCloseEvent>
#include <QTemporaryFile>
#include <QMouseEvent>
#include <QTimer>
#include <QParallelAnimationGroup>

class BaseWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BaseWindow(QWidget *parent = nullptr)
        : QDialog(parent)
    { }

    ~BaseWindow()
    {

    }

    void EnableWindow()
    {
        this->setEnabled(true);
    }

    void DisableWindow()
    {
        this->setEnabled(false);
    }

signals:
    void closeSignal();

protected:
    void closeEvent(QCloseEvent *event) override
    {
        DisconnectSlots();
        emit closeSignal();
        event->accept();
    }

    virtual void ConnectSlots() = 0;
    virtual void DisconnectSlots() = 0;
    virtual void InitInterface() { }
};

#endif // BASEWINDOW_H
