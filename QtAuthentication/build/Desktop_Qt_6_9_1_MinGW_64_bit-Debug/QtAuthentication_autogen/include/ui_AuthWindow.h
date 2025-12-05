/********************************************************************************
** Form generated from reading UI file 'AuthWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHWINDOW_H
#define UI_AUTHWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AuthWindow
{
public:
    QPushButton *closeEye;
    QLineEdit *loginQLineEdit;
    QLabel *authLabel;
    QFrame *line;
    QPushButton *passwordLink;
    QLineEdit *passwordQLineEdit;
    QPushButton *regLink;
    QPushButton *authButton;
    QLineEdit *phoneQLineEdit;
    QPushButton *openEye;

    void setupUi(QDialog *AuthWindow)
    {
        if (AuthWindow->objectName().isEmpty())
            AuthWindow->setObjectName("AuthWindow");
        AuthWindow->resize(450, 400);
        AuthWindow->setMinimumSize(QSize(450, 400));
        AuthWindow->setMaximumSize(QSize(450, 400));
        AuthWindow->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        AuthWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        closeEye = new QPushButton(AuthWindow);
        closeEye->setObjectName("closeEye");
        closeEye->setGeometry(QRect(350, 156, 41, 35));
        closeEye->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        closeEye->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/HideIMG/IMG/CloseEyePin48x48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        closeEye->setIcon(icon);
        closeEye->setIconSize(QSize(40, 40));
        loginQLineEdit = new QLineEdit(AuthWindow);
        loginQLineEdit->setObjectName("loginQLineEdit");
        loginQLineEdit->setGeometry(QRect(49, 80, 341, 45));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setStyleStrategy(QFont::PreferDefault);
        loginQLineEdit->setFont(font);
        loginQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    padding-top: 5px;\n"
"    padding-left: 5px;\n"
"    border: none;\n"
"    border-bottom: 2px solid rgb(122, 255, 98);\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLineEdit:focus \n"
"{\n"
"    border-bottom-color: rgb(76, 255, 73);\n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: #9e9e9e;\n"
"    font-size: 14px;\n"
"}"));
        loginQLineEdit->setMaxLength(25);
        authLabel = new QLabel(AuthWindow);
        authLabel->setObjectName("authLabel");
        authLabel->setGeometry(QRect(130, 40, 178, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        authLabel->setFont(font1);
        authLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        line = new QFrame(AuthWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(50, 340, 341, 1));
        line->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        passwordLink = new QPushButton(AuthWindow);
        passwordLink->setObjectName("passwordLink");
        passwordLink->setGeometry(QRect(290, 350, 111, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setUnderline(true);
        passwordLink->setFont(font2);
        passwordLink->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        passwordLink->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    color: rgb(122, 255, 98);\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}\n"
"QPushButton:hover { color: rgb(102, 255, 153); text-decoration: underline; }"));
        passwordQLineEdit = new QLineEdit(AuthWindow);
        passwordQLineEdit->setObjectName("passwordQLineEdit");
        passwordQLineEdit->setGeometry(QRect(49, 150, 341, 45));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        passwordQLineEdit->setFont(font3);
        passwordQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    padding-top: 5px;\n"
"    padding-left: 5px;\n"
"    border: none;\n"
"    border-bottom: 2px solid rgb(122, 255, 98);\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLineEdit:focus \n"
"{\n"
"    border-bottom-color: rgb(76, 255, 73);\n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: #9e9e9e;\n"
"    font-size: 14px;\n"
"}"));
        passwordQLineEdit->setMaxLength(25);
        passwordQLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        regLink = new QPushButton(AuthWindow);
        regLink->setObjectName("regLink");
        regLink->setGeometry(QRect(50, 350, 91, 21));
        regLink->setFont(font2);
        regLink->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        regLink->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    color: rgb(122, 255, 98);\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}\n"
"QPushButton:hover { color: rgb(102, 255, 153); text-decoration: underline; }"));
        authButton = new QPushButton(AuthWindow);
        authButton->setObjectName("authButton");
        authButton->setGeometry(QRect(50, 280, 341, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(16);
        font4.setBold(true);
        authButton->setFont(font4);
        authButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        authButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        phoneQLineEdit = new QLineEdit(AuthWindow);
        phoneQLineEdit->setObjectName("phoneQLineEdit");
        phoneQLineEdit->setGeometry(QRect(49, 220, 341, 45));
        phoneQLineEdit->setFont(font3);
        phoneQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    color: white; \n"
"    padding-top: 5px;\n"
"    padding-left: 5px;\n"
"    border: none;\n"
"    border-bottom: 2px solid rgb(122, 255, 98);\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLineEdit:focus \n"
"{\n"
"    border-bottom-color: rgb(76, 255, 73);\n"
"}\n"
"\n"
"QLineEdit::placeholder \n"
"{\n"
"    color: #9e9e9e;\n"
"    font-size: 14px;\n"
"}"));
        phoneQLineEdit->setMaxLength(25);
        phoneQLineEdit->setEchoMode(QLineEdit::EchoMode::Normal);
        openEye = new QPushButton(AuthWindow);
        openEye->setObjectName("openEye");
        openEye->setGeometry(QRect(350, 156, 41, 35));
        openEye->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        openEye->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/HideIMG/IMG/OpenEyePin48x48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        openEye->setIcon(icon1);
        openEye->setIconSize(QSize(40, 40));
        loginQLineEdit->raise();
        authLabel->raise();
        line->raise();
        passwordLink->raise();
        passwordQLineEdit->raise();
        regLink->raise();
        authButton->raise();
        phoneQLineEdit->raise();
        openEye->raise();
        closeEye->raise();

        retranslateUi(AuthWindow);

        QMetaObject::connectSlotsByName(AuthWindow);
    } // setupUi

    void retranslateUi(QDialog *AuthWindow)
    {
        AuthWindow->setWindowTitle(QCoreApplication::translate("AuthWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        closeEye->setText(QString());
        loginQLineEdit->setInputMask(QString());
        loginQLineEdit->setText(QString());
        loginQLineEdit->setPlaceholderText(QCoreApplication::translate("AuthWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        authLabel->setText(QCoreApplication::translate("AuthWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        passwordLink->setText(QCoreApplication::translate("AuthWindow", "\320\267\320\260\320\261\321\213\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        passwordQLineEdit->setInputMask(QString());
        passwordQLineEdit->setPlaceholderText(QCoreApplication::translate("AuthWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        regLink->setText(QCoreApplication::translate("AuthWindow", "\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        authButton->setText(QCoreApplication::translate("AuthWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        phoneQLineEdit->setInputMask(QString());
        phoneQLineEdit->setText(QString());
        phoneQLineEdit->setPlaceholderText(QCoreApplication::translate("AuthWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275 \320\270\320\273\320\270 \320\277\320\276\321\207\321\202\320\260", nullptr));
        openEye->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AuthWindow: public Ui_AuthWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHWINDOW_H
