/********************************************************************************
** Form generated from reading UI file 'WelcomeWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *userInfoLabel;
    QPushButton *exitButton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(500, 500);
        WelcomeWindow->setMinimumSize(QSize(500, 500));
        WelcomeWindow->setMaximumSize(QSize(500, 500));
        WelcomeWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        userInfoLabel = new QLabel(WelcomeWindow);
        userInfoLabel->setObjectName("userInfoLabel");
        userInfoLabel->setGeometry(QRect(80, 170, 331, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        userInfoLabel->setFont(font);
        userInfoLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        exitButton = new QPushButton(WelcomeWindow);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(80, 330, 341, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        exitButton->setFont(font1);
        exitButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        exitButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	background-color: rgb(122, 255, 98);\n"
"    color: black;     \n"
"    border-radius: 20px;\n"
"    padding: 8px 16px;  \n"
"    font-weight: bold;   \n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(102, 255, 153);\n"
"}"));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217 \321\204\320\276\321\200\320\274\320\260", nullptr));
        userInfoLabel->setText(QString());
        exitButton->setText(QCoreApplication::translate("WelcomeWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
