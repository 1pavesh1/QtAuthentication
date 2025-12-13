/********************************************************************************
** Form generated from reading UI file 'RepairPasswordWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPAIRPASSWORDWINDOW_H
#define UI_REPAIRPASSWORDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RepairPasswordWindow
{
public:
    QFrame *acceptCodeSMSFrame;
    QPushButton *sendRepeatSMSCodeButton;
    QLineEdit *codeSMSQLineEdit;
    QLabel *infoSMSLabel;
    QPushButton *sendSMSCodeButton;
    QLabel *timerPhoneLabel;
    QFrame *newPasswordFrame;
    QLineEdit *newPasswordRepeatQLineEdit;
    QPushButton *newPasswordButton;
    QLineEdit *newPasswordQLineEdit;
    QFrame *acceptCodeMailFrame;
    QPushButton *sendRepeatMailCodeButton;
    QLineEdit *codeMailQLineEdit;
    QLabel *infoMailLabel;
    QPushButton *sendMailCodeButton;
    QLabel *timerMailLabel;

    void setupUi(QDialog *RepairPasswordWindow)
    {
        if (RepairPasswordWindow->objectName().isEmpty())
            RepairPasswordWindow->setObjectName("RepairPasswordWindow");
        RepairPasswordWindow->resize(450, 400);
        RepairPasswordWindow->setMinimumSize(QSize(450, 400));
        RepairPasswordWindow->setMaximumSize(QSize(450, 400));
        RepairPasswordWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        acceptCodeSMSFrame = new QFrame(RepairPasswordWindow);
        acceptCodeSMSFrame->setObjectName("acceptCodeSMSFrame");
        acceptCodeSMSFrame->setGeometry(QRect(0, 0, 450, 401));
        acceptCodeSMSFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: none;\n"
"}"));
        acceptCodeSMSFrame->setFrameShape(QFrame::Shape::StyledPanel);
        acceptCodeSMSFrame->setFrameShadow(QFrame::Shadow::Raised);
        sendRepeatSMSCodeButton = new QPushButton(acceptCodeSMSFrame);
        sendRepeatSMSCodeButton->setObjectName("sendRepeatSMSCodeButton");
        sendRepeatSMSCodeButton->setGeometry(QRect(160, 140, 141, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(false);
        font.setUnderline(false);
        sendRepeatSMSCodeButton->setFont(font);
        sendRepeatSMSCodeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sendRepeatSMSCodeButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    color: rgb(122, 255, 98);\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}\n"
"QPushButton:hover { color: rgb(102, 255, 153); }"));
        codeSMSQLineEdit = new QLineEdit(acceptCodeSMSFrame);
        codeSMSQLineEdit->setObjectName("codeSMSQLineEdit");
        codeSMSQLineEdit->setGeometry(QRect(10, 70, 321, 45));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setStyleStrategy(QFont::PreferDefault);
        codeSMSQLineEdit->setFont(font1);
        codeSMSQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
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
        codeSMSQLineEdit->setMaxLength(6);
        infoSMSLabel = new QLabel(acceptCodeSMSFrame);
        infoSMSLabel->setObjectName("infoSMSLabel");
        infoSMSLabel->setGeometry(QRect(10, 0, 371, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(false);
        infoSMSLabel->setFont(font2);
        infoSMSLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        sendSMSCodeButton = new QPushButton(acceptCodeSMSFrame);
        sendSMSCodeButton->setObjectName("sendSMSCodeButton");
        sendSMSCodeButton->setGeometry(QRect(10, 130, 131, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(13);
        font3.setBold(true);
        sendSMSCodeButton->setFont(font3);
        sendSMSCodeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sendSMSCodeButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        timerPhoneLabel = new QLabel(acceptCodeSMSFrame);
        timerPhoneLabel->setObjectName("timerPhoneLabel");
        timerPhoneLabel->setGeometry(QRect(320, 180, 51, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(11);
        timerPhoneLabel->setFont(font4);
        timerPhoneLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        newPasswordFrame = new QFrame(RepairPasswordWindow);
        newPasswordFrame->setObjectName("newPasswordFrame");
        newPasswordFrame->setGeometry(QRect(0, 0, 450, 401));
        newPasswordFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: none;\n"
"}"));
        newPasswordFrame->setFrameShape(QFrame::Shape::StyledPanel);
        newPasswordFrame->setFrameShadow(QFrame::Shadow::Raised);
        newPasswordRepeatQLineEdit = new QLineEdit(newPasswordFrame);
        newPasswordRepeatQLineEdit->setObjectName("newPasswordRepeatQLineEdit");
        newPasswordRepeatQLineEdit->setGeometry(QRect(50, 150, 341, 45));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        newPasswordRepeatQLineEdit->setFont(font5);
        newPasswordRepeatQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
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
        newPasswordRepeatQLineEdit->setMaxLength(40);
        newPasswordRepeatQLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        newPasswordButton = new QPushButton(newPasswordFrame);
        newPasswordButton->setObjectName("newPasswordButton");
        newPasswordButton->setGeometry(QRect(50, 210, 341, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(16);
        font6.setBold(true);
        newPasswordButton->setFont(font6);
        newPasswordButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        newPasswordButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        newPasswordQLineEdit = new QLineEdit(newPasswordFrame);
        newPasswordQLineEdit->setObjectName("newPasswordQLineEdit");
        newPasswordQLineEdit->setGeometry(QRect(51, 96, 341, 45));
        newPasswordQLineEdit->setFont(font5);
        newPasswordQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
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
        newPasswordQLineEdit->setMaxLength(40);
        newPasswordQLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        acceptCodeMailFrame = new QFrame(RepairPasswordWindow);
        acceptCodeMailFrame->setObjectName("acceptCodeMailFrame");
        acceptCodeMailFrame->setGeometry(QRect(0, 0, 450, 401));
        acceptCodeMailFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: none;\n"
"}"));
        acceptCodeMailFrame->setFrameShape(QFrame::Shape::StyledPanel);
        acceptCodeMailFrame->setFrameShadow(QFrame::Shadow::Raised);
        sendRepeatMailCodeButton = new QPushButton(acceptCodeMailFrame);
        sendRepeatMailCodeButton->setObjectName("sendRepeatMailCodeButton");
        sendRepeatMailCodeButton->setGeometry(QRect(160, 140, 141, 21));
        sendRepeatMailCodeButton->setFont(font);
        sendRepeatMailCodeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sendRepeatMailCodeButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    color: rgb(122, 255, 98);\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}\n"
"QPushButton:hover { color: rgb(102, 255, 153); }"));
        codeMailQLineEdit = new QLineEdit(acceptCodeMailFrame);
        codeMailQLineEdit->setObjectName("codeMailQLineEdit");
        codeMailQLineEdit->setGeometry(QRect(10, 70, 321, 45));
        codeMailQLineEdit->setFont(font1);
        codeMailQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
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
        codeMailQLineEdit->setMaxLength(6);
        infoMailLabel = new QLabel(acceptCodeMailFrame);
        infoMailLabel->setObjectName("infoMailLabel");
        infoMailLabel->setGeometry(QRect(10, 0, 371, 71));
        infoMailLabel->setFont(font2);
        infoMailLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        sendMailCodeButton = new QPushButton(acceptCodeMailFrame);
        sendMailCodeButton->setObjectName("sendMailCodeButton");
        sendMailCodeButton->setGeometry(QRect(10, 130, 131, 41));
        sendMailCodeButton->setFont(font3);
        sendMailCodeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sendMailCodeButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        timerMailLabel = new QLabel(acceptCodeMailFrame);
        timerMailLabel->setObjectName("timerMailLabel");
        timerMailLabel->setGeometry(QRect(320, 180, 51, 21));
        timerMailLabel->setFont(font4);
        timerMailLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        newPasswordFrame->raise();
        acceptCodeSMSFrame->raise();
        acceptCodeMailFrame->raise();

        retranslateUi(RepairPasswordWindow);

        QMetaObject::connectSlotsByName(RepairPasswordWindow);
    } // setupUi

    void retranslateUi(QDialog *RepairPasswordWindow)
    {
        RepairPasswordWindow->setWindowTitle(QCoreApplication::translate("RepairPasswordWindow", "\320\222\320\276\321\201\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        sendRepeatSMSCodeButton->setText(QCoreApplication::translate("RepairPasswordWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271", nullptr));
        codeSMSQLineEdit->setInputMask(QString());
        codeSMSQLineEdit->setText(QString());
        codeSMSQLineEdit->setPlaceholderText(QCoreApplication::translate("RepairPasswordWindow", "\320\232\320\276\320\264", nullptr));
        infoSMSLabel->setText(QCoreApplication::translate("RepairPasswordWindow", "\320\235\320\260 \320\275\320\276\320\274\320\265\321\200, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\277\321\200\320\270\320\262\321\217\320\267\320\260\320\275 \320\272 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\321\203 \320\261\321\203\320\264\320\265\321\202\n"
"\320\262\321\213\321\201\320\273\320\260\320\275 SMS \321\201 \320\272\320\276\320\264\320\276\320\274, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276\n"
"\320\262\320\262\320\265\321\201\321\202\320\270 \320\262 \320\277\320\276\320\273\320\265 \320\275\320\270\320\266\320\265.", nullptr));
        sendSMSCodeButton->setText(QCoreApplication::translate("RepairPasswordWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        timerPhoneLabel->setText(QString());
        newPasswordRepeatQLineEdit->setInputMask(QString());
        newPasswordRepeatQLineEdit->setPlaceholderText(QCoreApplication::translate("RepairPasswordWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
        newPasswordButton->setText(QCoreApplication::translate("RepairPasswordWindow", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        newPasswordQLineEdit->setInputMask(QString());
        newPasswordQLineEdit->setPlaceholderText(QCoreApplication::translate("RepairPasswordWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        sendRepeatMailCodeButton->setText(QCoreApplication::translate("RepairPasswordWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\321\213\320\271", nullptr));
        codeMailQLineEdit->setInputMask(QString());
        codeMailQLineEdit->setText(QString());
        codeMailQLineEdit->setPlaceholderText(QCoreApplication::translate("RepairPasswordWindow", "\320\232\320\276\320\264", nullptr));
        infoMailLabel->setText(QCoreApplication::translate("RepairPasswordWindow", "\320\235\320\260 \320\277\320\276\321\207\321\202\321\203, \320\272\320\276\321\202\320\276\321\200\320\260\321\217 \320\277\321\200\320\270\320\262\321\217\320\267\320\260\320\275\320\260 \320\272 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\321\203 \320\261\321\203\320\264\320\265\321\202\n"
"\320\262\321\213\321\201\320\273\320\260\320\275\320\276 \320\277\320\270\321\201\321\214\320\274\320\276 \321\201 \320\272\320\276\320\264\320\276\320\274, \320\272\320\276\321\202\320\276\321\200\321\213\320\271 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276\n"
"\320\262\320\262\320\265\321\201\321\202\320\270 \320\262 \320\277\320\276\320\273\320\265 \320\275\320\270\320\266\320\265.", nullptr));
        sendMailCodeButton->setText(QCoreApplication::translate("RepairPasswordWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        timerMailLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RepairPasswordWindow: public Ui_RepairPasswordWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPAIRPASSWORDWINDOW_H
