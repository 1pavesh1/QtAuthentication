#ifndef NOTIFICATIONWIDGET_H
#define NOTIFICATIONWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include "../WidgetInterface/CommonCustomWidgetInterface.h"
#include "../Data/Enum/TypeNotification.h"

class NotificationWidget : public QWidget, public CommonCustomWidgetInterface
{
    Q_OBJECT
    Q_PROPERTY(float opacity READ opacity WRITE setOpacity)

private:
    QVBoxLayout         *mainLayout;
    QLabel              *messageLabel;
    QLabel              *iconLabel;
    QTimer              *timer;
    QString             backgroundColor;
    QString             borderColor;
    QString             iconPath;
    QString             message;
    float               mOpacity;
    TypeNotification    typeNotification;

    QGraphicsOpacityEffect  *opacityEffect;
    QPropertyAnimation      *animation;

    void StartTimer()
    {
        timer = new QTimer(this);
        timer->setSingleShot(true);
        connect(timer, &QTimer::timeout, this, &NotificationWidget::CloseAnimation);
        timer->start(3000);
    }

    void SetPosition()
    {
        move(parentWidget()->rect().center().x() - width() / 2, 10);
    }

    void setOpacity(float opacity)
    {
        opacityEffect->setOpacity(opacity);
    }

    void SetupError()
    {
        switch (typeNotification)
        {
        case TypeNotification::WARNING:
            backgroundColor = "#ffeb3b";
            borderColor = "#ffc107";
            iconPath = ":/MessageIMG/IMG/WarningPin48x48.png";
            break;
        case TypeNotification::DANGER:
            backgroundColor = "#ffcdd2";
            borderColor = "#f44336";
            iconPath = ":/MessageIMG/IMG/ErrorPin48x48.png";
            break;
        case TypeNotification::INFORMATION:
            backgroundColor = "#bbdefb";
            borderColor = "#2196f3";
            iconPath = ":/MessageIMG/IMG/InformationPin48x48.png";
            break;
        case TypeNotification::SUCCESS:
            backgroundColor = "#c8e6c9";
            borderColor = "#4caf50";
            iconPath = ":/MessageIMG/IMG/SuccessPin48x48.png";
            break;
        }
    }

    void InitializationInterface() override
    {
        mainLayout = new QVBoxLayout(this);
        mainLayout->setContentsMargins(15, 10, 15, 10);
        mainLayout->setSpacing(8);

        QHBoxLayout *contentLayout = new QHBoxLayout();
        contentLayout->setSpacing(10);
        contentLayout->setContentsMargins(0, 0, 0, 0);

        iconLabel = new QLabel(this);
        iconLabel->setFixedSize(24, 24);
        iconLabel->setScaledContents(true);
        iconLabel->setPixmap(QIcon(iconPath).pixmap(24, 24));

        messageLabel = new QLabel(this);
        messageLabel->setWordWrap(true);
        messageLabel->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        messageLabel->setFixedWidth(message.size() * 8 + 10);
        messageLabel->adjustSize();

        contentLayout->addWidget(iconLabel);
        contentLayout->addWidget(messageLabel, 1);

        mainLayout->addLayout(contentLayout);
        setLayout(mainLayout);

        opacityEffect = new QGraphicsOpacityEffect(this);
        opacityEffect->setOpacity(1.0);
        setGraphicsEffect(opacityEffect);

        adjustSize();
    }

    void SetupQCC() override
    {
        setStyleSheet(QString(R"(
            ErrorWidget
            {
                background: %1;
                border: 1px;
                border-radius: 25px;
                padding: 5px;
            }
            QLabel
            {
                color: black;
                font-size: 14px;
                font-weight: bold;
                background: transparent;
                border: none;
            }
        )").arg(backgroundColor));
    }

    void LoadContent() override
    {
        messageLabel->setText(message);
    }

    void OpenAnimation()
    {
        setOpacity(0.0);
        animation = new QPropertyAnimation(this, "opacity");
        animation->setDuration(300);
        animation->setStartValue(0.0);
        animation->setEndValue(1.0);
        animation->setEasingCurve(QEasingCurve::OutCubic);
        animation->start();
    }

    void CloseAnimation()
    {
        animation = new QPropertyAnimation(this, "opacity");
        animation->setDuration(500);
        animation->setStartValue(1.0);
        animation->setEndValue(0.0);
        animation->setEasingCurve(QEasingCurve::OutCubic);
        connect(animation, &QPropertyAnimation::finished, this, &NotificationWidget::close);
        animation->start();
    }

    float opacity() const
    {
        return mOpacity;
    }

    void Show()
    {
        SetPosition();

        show();
        raise();
        activateWindow();

        StartTimer();
    }

public:
    NotificationWidget(QWidget *parent, const QString &message, const TypeNotification &typeNotification)
        : QWidget(parent), message(message), typeNotification(typeNotification)
    {
        setWindowFlags(Qt::FramelessWindowHint | Qt::SubWindow);
        setAttribute(Qt::WA_ShowWithoutActivating);
        setAttribute(Qt::WA_DeleteOnClose);

        SetupError();
        SetupQCC();
        InitializationInterface();
        LoadContent();
        OpenAnimation();
        Show();
    }

    void paintEvent(QPaintEvent *event) override
    {
        Q_UNUSED(event);
        QPainter        painter(this);
        QPainterPath    painterPath;

        painterPath.addRoundedRect(rect(), 25, 25);

        painter.setRenderHint(QPainter::Antialiasing);
        painter.fillPath(painterPath, QColor(backgroundColor));
        painter.strokePath(painterPath, QPen(QColor(borderColor)));
    }

    void mousePressEvent(QMouseEvent *event) override
    {
        Q_UNUSED(event);

        CloseAnimation();
    }

    void showEvent(QShowEvent *event) override
    {
        Q_UNUSED(event);
        raise();
    }
};

#endif // NOTIFICATIONWIDGET_H
