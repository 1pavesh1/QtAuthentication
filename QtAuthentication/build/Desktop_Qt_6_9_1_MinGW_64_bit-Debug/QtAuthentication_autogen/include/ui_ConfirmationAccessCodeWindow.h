/********************************************************************************
** Form generated from reading UI file 'ConfirmationAccessCodeWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATIONACCESSCODEWINDOW_H
#define UI_CONFIRMATIONACCESSCODEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConfirmationAccessCodeWindow
{
public:
    QLabel *regLabel;
    QLineEdit *accessCodeQLineEdit;
    QPushButton *confirmAccessCodeButton;

    void setupUi(QDialog *ConfirmationAccessCodeWindow)
    {
        if (ConfirmationAccessCodeWindow->objectName().isEmpty())
            ConfirmationAccessCodeWindow->setObjectName("ConfirmationAccessCodeWindow");
        ConfirmationAccessCodeWindow->resize(450, 400);
        ConfirmationAccessCodeWindow->setMinimumSize(QSize(400, 400));
        ConfirmationAccessCodeWindow->setMaximumSize(QSize(450, 400));
        ConfirmationAccessCodeWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        regLabel = new QLabel(ConfirmationAccessCodeWindow);
        regLabel->setObjectName("regLabel");
        regLabel->setGeometry(QRect(130, 30, 181, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        regLabel->setFont(font);
        regLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        accessCodeQLineEdit = new QLineEdit(ConfirmationAccessCodeWindow);
        accessCodeQLineEdit->setObjectName("accessCodeQLineEdit");
        accessCodeQLineEdit->setGeometry(QRect(50, 180, 341, 45));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        accessCodeQLineEdit->setFont(font1);
        accessCodeQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
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
        accessCodeQLineEdit->setMaxLength(25);
        accessCodeQLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        accessCodeQLineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        confirmAccessCodeButton = new QPushButton(ConfirmationAccessCodeWindow);
        confirmAccessCodeButton->setObjectName("confirmAccessCodeButton");
        confirmAccessCodeButton->setGeometry(QRect(50, 260, 341, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        font2.setBold(true);
        confirmAccessCodeButton->setFont(font2);
        confirmAccessCodeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        confirmAccessCodeButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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

        retranslateUi(ConfirmationAccessCodeWindow);

        QMetaObject::connectSlotsByName(ConfirmationAccessCodeWindow);
    } // setupUi

    void retranslateUi(QDialog *ConfirmationAccessCodeWindow)
    {
        ConfirmationAccessCodeWindow->setWindowTitle(QCoreApplication::translate("ConfirmationAccessCodeWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\272\320\276\320\264\320\260", nullptr));
        regLabel->setText(QCoreApplication::translate("ConfirmationAccessCodeWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\n"
"\320\272\320\276\320\264\320\260 \320\264\320\276\321\201\321\202\321\203\320\277\320\260", nullptr));
        accessCodeQLineEdit->setInputMask(QString());
        accessCodeQLineEdit->setText(QString());
        accessCodeQLineEdit->setPlaceholderText(QCoreApplication::translate("ConfirmationAccessCodeWindow", "\320\232\320\276\320\264", nullptr));
        confirmAccessCodeButton->setText(QCoreApplication::translate("ConfirmationAccessCodeWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmationAccessCodeWindow: public Ui_ConfirmationAccessCodeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATIONACCESSCODEWINDOW_H
