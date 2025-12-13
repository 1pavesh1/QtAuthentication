/********************************************************************************
** Form generated from reading UI file 'RegWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegWindow
{
public:
    QFrame *InputAccessCodeFrame;
    QLabel *AccessCodeInfoLabel;
    QLabel *AccesCodeInfoLabel;
    QLineEdit *accessCodeQLineEdit;
    QLabel *AccessCodeLabel;
    QPushButton *regButton;
    QPushButton *backToAccessCodeInfoButton;
    QFrame *InputPhoneFrame;
    QLabel *infoLabel;
    QLabel *inputPhoneLabel;
    QComboBox *CountryQComboBox;
    QLabel *countryLabel;
    QLabel *codeCountryLabel;
    QLabel *phoneLabel;
    QLineEdit *phoneQLineEdit;
    QPushButton *phoneButton;
    QComboBox *PhoneQComboBox;
    QPushButton *backToUserInfoFromPhoneButton;
    QFrame *UserInfoFrame;
    QLineEdit *passwordQLineEdit;
    QLabel *regLabel;
    QLineEdit *loginQLineEdit;
    QFrame *line;
    QPushButton *authLink;
    QPushButton *openEye;
    QPushButton *userInfoButton;
    QPushButton *closeEye;
    QFrame *InputAccessCodePhoneFrame;
    QLabel *infoAccessCodeLabel;
    QLabel *inputAccessCodeInfoLabel;
    QLabel *codeLabel;
    QLineEdit *phoneAccessCodeQLineEdit;
    QPushButton *accessCodeButton;
    QPushButton *backToPhoneFromAccessCodeButton;

    void setupUi(QDialog *RegWindow)
    {
        if (RegWindow->objectName().isEmpty())
            RegWindow->setObjectName("RegWindow");
        RegWindow->resize(450, 400);
        RegWindow->setMinimumSize(QSize(450, 400));
        RegWindow->setMaximumSize(QSize(450, 400));
        QFont font;
        font.setBold(false);
        RegWindow->setFont(font);
        RegWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        InputAccessCodeFrame = new QFrame(RegWindow);
        InputAccessCodeFrame->setObjectName("InputAccessCodeFrame");
        InputAccessCodeFrame->setGeometry(QRect(0, 0, 451, 401));
        InputAccessCodeFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: none;\n"
"}"));
        InputAccessCodeFrame->setFrameShape(QFrame::Shape::StyledPanel);
        InputAccessCodeFrame->setFrameShadow(QFrame::Shadow::Raised);
        AccessCodeInfoLabel = new QLabel(InputAccessCodeFrame);
        AccessCodeInfoLabel->setObjectName("AccessCodeInfoLabel");
        AccessCodeInfoLabel->setGeometry(QRect(10, 40, 170, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        AccessCodeInfoLabel->setFont(font1);
        AccessCodeInfoLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        AccesCodeInfoLabel = new QLabel(InputAccessCodeFrame);
        AccesCodeInfoLabel->setObjectName("AccesCodeInfoLabel");
        AccesCodeInfoLabel->setGeometry(QRect(10, 80, 431, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(false);
        AccesCodeInfoLabel->setFont(font2);
        AccesCodeInfoLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        accessCodeQLineEdit = new QLineEdit(InputAccessCodeFrame);
        accessCodeQLineEdit->setObjectName("accessCodeQLineEdit");
        accessCodeQLineEdit->setGeometry(QRect(10, 170, 101, 45));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setStyleStrategy(QFont::PreferDefault);
        accessCodeQLineEdit->setFont(font3);
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
        accessCodeQLineEdit->setMaxLength(6);
        accessCodeQLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        AccessCodeLabel = new QLabel(InputAccessCodeFrame);
        AccessCodeLabel->setObjectName("AccessCodeLabel");
        AccessCodeLabel->setGeometry(QRect(10, 150, 101, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(12);
        font4.setBold(true);
        AccessCodeLabel->setFont(font4);
        AccessCodeLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        regButton = new QPushButton(InputAccessCodeFrame);
        regButton->setObjectName("regButton");
        regButton->setGeometry(QRect(10, 230, 341, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(16);
        font5.setBold(true);
        regButton->setFont(font5);
        regButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        regButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        backToAccessCodeInfoButton = new QPushButton(InputAccessCodeFrame);
        backToAccessCodeInfoButton->setObjectName("backToAccessCodeInfoButton");
        backToAccessCodeInfoButton->setGeometry(QRect(0, 0, 51, 31));
        backToAccessCodeInfoButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backToAccessCodeInfoButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	background-color: rgb(59, 59, 59);\n"
"    border-radius: 45px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/RoutIMG/IMG/BackPin60x60.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        backToAccessCodeInfoButton->setIcon(icon);
        backToAccessCodeInfoButton->setIconSize(QSize(40, 40));
        InputPhoneFrame = new QFrame(RegWindow);
        InputPhoneFrame->setObjectName("InputPhoneFrame");
        InputPhoneFrame->setGeometry(QRect(0, 0, 451, 401));
        InputPhoneFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: none;\n"
"}"));
        InputPhoneFrame->setFrameShape(QFrame::Shape::StyledPanel);
        InputPhoneFrame->setFrameShadow(QFrame::Shadow::Raised);
        infoLabel = new QLabel(InputPhoneFrame);
        infoLabel->setObjectName("infoLabel");
        infoLabel->setGeometry(QRect(10, 40, 170, 30));
        infoLabel->setFont(font1);
        infoLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        inputPhoneLabel = new QLabel(InputPhoneFrame);
        inputPhoneLabel->setObjectName("inputPhoneLabel");
        inputPhoneLabel->setGeometry(QRect(10, 80, 431, 61));
        inputPhoneLabel->setFont(font2);
        inputPhoneLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        CountryQComboBox = new QComboBox(InputPhoneFrame);
        CountryQComboBox->addItem(QString());
        CountryQComboBox->addItem(QString());
        CountryQComboBox->addItem(QString());
        CountryQComboBox->addItem(QString());
        CountryQComboBox->setObjectName("CountryQComboBox");
        CountryQComboBox->setGeometry(QRect(10, 170, 181, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        CountryQComboBox->setFont(font6);
        CountryQComboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        CountryQComboBox->setStyleSheet(QString::fromUtf8("QComboBox \n"
"{\n"
"    border: none;\n"
"    border-bottom: 2px solid rgb(122, 255, 98);\n"
"    padding: 12px 0px 8px 0px;\n"
"    background: transparent;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QComboBox:focus\n"
"{\n"
"    border-bottom-color: #3f51b5;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: none;\n"
"    width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    width: 0px;\n"
"	height: 0px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView \n"
"{\n"
"    border: none;\n"
"    background: white;\n"
"    selection-background-color: #3f51b5;\n"
"    selection-color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px;\n"
"    border-radius: 4px;\n"
"}"));
        countryLabel = new QLabel(InputPhoneFrame);
        countryLabel->setObjectName("countryLabel");
        countryLabel->setGeometry(QRect(10, 150, 71, 21));
        countryLabel->setFont(font4);
        countryLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        codeCountryLabel = new QLabel(InputPhoneFrame);
        codeCountryLabel->setObjectName("codeCountryLabel");
        codeCountryLabel->setGeometry(QRect(10, 230, 31, 21));
        codeCountryLabel->setFont(font4);
        codeCountryLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        phoneLabel = new QLabel(InputPhoneFrame);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setGeometry(QRect(90, 230, 141, 21));
        phoneLabel->setFont(font4);
        phoneLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        phoneQLineEdit = new QLineEdit(InputPhoneFrame);
        phoneQLineEdit->setObjectName("phoneQLineEdit");
        phoneQLineEdit->setGeometry(QRect(90, 250, 321, 45));
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
        phoneQLineEdit->setMaxLength(15);
        phoneButton = new QPushButton(InputPhoneFrame);
        phoneButton->setObjectName("phoneButton");
        phoneButton->setGeometry(QRect(10, 310, 341, 41));
        phoneButton->setFont(font5);
        phoneButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        phoneButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        PhoneQComboBox = new QComboBox(InputPhoneFrame);
        PhoneQComboBox->addItem(QString());
        PhoneQComboBox->addItem(QString());
        PhoneQComboBox->addItem(QString());
        PhoneQComboBox->addItem(QString());
        PhoneQComboBox->setObjectName("PhoneQComboBox");
        PhoneQComboBox->setGeometry(QRect(10, 254, 61, 41));
        PhoneQComboBox->setFont(font6);
        PhoneQComboBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        PhoneQComboBox->setStyleSheet(QString::fromUtf8("QComboBox \n"
"{\n"
"    border: none;\n"
"    border-bottom: 2px solid rgb(122, 255, 98);\n"
"    padding: 12px 0px 8px 0px;\n"
"    background: transparent;\n"
"    color: white;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QComboBox:focus\n"
"{\n"
"    border-bottom-color: #3f51b5;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: none;\n"
"    width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    width: 0px;\n"
"	height: 0px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView \n"
"{\n"
"    border: none;\n"
"    background: white;\n"
"    selection-background-color: #3f51b5;\n"
"    selection-color: white;\n"
"    font-size: 14px;\n"
"    padding: 8px;\n"
"    border-radius: 4px;\n"
"}"));
        backToUserInfoFromPhoneButton = new QPushButton(InputPhoneFrame);
        backToUserInfoFromPhoneButton->setObjectName("backToUserInfoFromPhoneButton");
        backToUserInfoFromPhoneButton->setGeometry(QRect(0, 0, 51, 31));
        backToUserInfoFromPhoneButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backToUserInfoFromPhoneButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	background-color: rgb(59, 59, 59);\n"
"    border-radius: 45px;\n"
"}"));
        backToUserInfoFromPhoneButton->setIcon(icon);
        backToUserInfoFromPhoneButton->setIconSize(QSize(40, 40));
        UserInfoFrame = new QFrame(RegWindow);
        UserInfoFrame->setObjectName("UserInfoFrame");
        UserInfoFrame->setGeometry(QRect(0, 0, 450, 401));
        UserInfoFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: none;\n"
"}"));
        UserInfoFrame->setFrameShape(QFrame::Shape::StyledPanel);
        UserInfoFrame->setFrameShadow(QFrame::Shadow::Raised);
        passwordQLineEdit = new QLineEdit(UserInfoFrame);
        passwordQLineEdit->setObjectName("passwordQLineEdit");
        passwordQLineEdit->setGeometry(QRect(59, 150, 341, 45));
        passwordQLineEdit->setFont(font6);
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
        passwordQLineEdit->setMaxLength(30);
        passwordQLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        regLabel = new QLabel(UserInfoFrame);
        regLabel->setObjectName("regLabel");
        regLabel->setGeometry(QRect(140, 40, 170, 30));
        regLabel->setFont(font1);
        regLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        loginQLineEdit = new QLineEdit(UserInfoFrame);
        loginQLineEdit->setObjectName("loginQLineEdit");
        loginQLineEdit->setGeometry(QRect(59, 80, 341, 45));
        loginQLineEdit->setFont(font3);
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
        loginQLineEdit->setMaxLength(40);
        line = new QFrame(UserInfoFrame);
        line->setObjectName("line");
        line->setGeometry(QRect(59, 270, 341, 1));
        line->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        authLink = new QPushButton(UserInfoFrame);
        authLink->setObjectName("authLink");
        authLink->setGeometry(QRect(59, 280, 91, 21));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(11);
        font7.setBold(false);
        font7.setUnderline(true);
        authLink->setFont(font7);
        authLink->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        authLink->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    color: rgb(122, 255, 98);\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}\n"
"QPushButton:hover { color: rgb(102, 255, 153); text-decoration: underline; }"));
        openEye = new QPushButton(UserInfoFrame);
        openEye->setObjectName("openEye");
        openEye->setGeometry(QRect(360, 156, 41, 35));
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
        userInfoButton = new QPushButton(UserInfoFrame);
        userInfoButton->setObjectName("userInfoButton");
        userInfoButton->setGeometry(QRect(59, 210, 341, 41));
        userInfoButton->setFont(font5);
        userInfoButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        userInfoButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        closeEye = new QPushButton(UserInfoFrame);
        closeEye->setObjectName("closeEye");
        closeEye->setGeometry(QRect(360, 156, 41, 35));
        closeEye->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        closeEye->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"    background: transparent;\n"
"    border: none;\n"
"    text-align: left;\n"
"    padding: 0;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/HideIMG/IMG/CloseEyePin48x48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        closeEye->setIcon(icon2);
        closeEye->setIconSize(QSize(40, 40));
        passwordQLineEdit->raise();
        regLabel->raise();
        line->raise();
        authLink->raise();
        openEye->raise();
        closeEye->raise();
        userInfoButton->raise();
        loginQLineEdit->raise();
        InputAccessCodePhoneFrame = new QFrame(RegWindow);
        InputAccessCodePhoneFrame->setObjectName("InputAccessCodePhoneFrame");
        InputAccessCodePhoneFrame->setGeometry(QRect(0, 0, 451, 401));
        InputAccessCodePhoneFrame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: none;\n"
"}"));
        InputAccessCodePhoneFrame->setFrameShape(QFrame::Shape::StyledPanel);
        InputAccessCodePhoneFrame->setFrameShadow(QFrame::Shadow::Raised);
        infoAccessCodeLabel = new QLabel(InputAccessCodePhoneFrame);
        infoAccessCodeLabel->setObjectName("infoAccessCodeLabel");
        infoAccessCodeLabel->setGeometry(QRect(10, 40, 170, 30));
        infoAccessCodeLabel->setFont(font1);
        infoAccessCodeLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        inputAccessCodeInfoLabel = new QLabel(InputAccessCodePhoneFrame);
        inputAccessCodeInfoLabel->setObjectName("inputAccessCodeInfoLabel");
        inputAccessCodeInfoLabel->setGeometry(QRect(10, 80, 431, 61));
        inputAccessCodeInfoLabel->setFont(font2);
        inputAccessCodeInfoLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        codeLabel = new QLabel(InputAccessCodePhoneFrame);
        codeLabel->setObjectName("codeLabel");
        codeLabel->setGeometry(QRect(10, 140, 141, 21));
        codeLabel->setFont(font4);
        codeLabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	color: white;\n"
"}"));
        phoneAccessCodeQLineEdit = new QLineEdit(InputAccessCodePhoneFrame);
        phoneAccessCodeQLineEdit->setObjectName("phoneAccessCodeQLineEdit");
        phoneAccessCodeQLineEdit->setGeometry(QRect(10, 160, 321, 45));
        phoneAccessCodeQLineEdit->setFont(font3);
        phoneAccessCodeQLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
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
        phoneAccessCodeQLineEdit->setMaxLength(6);
        phoneAccessCodeQLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        accessCodeButton = new QPushButton(InputAccessCodePhoneFrame);
        accessCodeButton->setObjectName("accessCodeButton");
        accessCodeButton->setGeometry(QRect(10, 310, 341, 41));
        accessCodeButton->setFont(font5);
        accessCodeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        accessCodeButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
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
        backToPhoneFromAccessCodeButton = new QPushButton(InputAccessCodePhoneFrame);
        backToPhoneFromAccessCodeButton->setObjectName("backToPhoneFromAccessCodeButton");
        backToPhoneFromAccessCodeButton->setGeometry(QRect(0, 0, 51, 31));
        backToPhoneFromAccessCodeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backToPhoneFromAccessCodeButton->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"	background-color: rgb(59, 59, 59);\n"
"    border-radius: 45px;\n"
"}"));
        backToPhoneFromAccessCodeButton->setIcon(icon);
        backToPhoneFromAccessCodeButton->setIconSize(QSize(40, 40));
        InputAccessCodeFrame->raise();
        InputAccessCodePhoneFrame->raise();
        InputPhoneFrame->raise();
        UserInfoFrame->raise();

        retranslateUi(RegWindow);

        QMetaObject::connectSlotsByName(RegWindow);
    } // setupUi

    void retranslateUi(QDialog *RegWindow)
    {
        RegWindow->setWindowTitle(QCoreApplication::translate("RegWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        AccessCodeInfoLabel->setText(QCoreApplication::translate("RegWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        AccesCodeInfoLabel->setText(QCoreApplication::translate("RegWindow", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\272\320\276\320\264 \320\264\320\276\321\201\321\202\321\203\320\277\320\260 \320\270\320\267 6 \321\206\320\270\321\204\321\200\n"
"\320\265\320\263\320\276 \320\262\321\213 \320\261\321\203\320\264\320\265\321\202\320\265 \320\277\321\200\320\270 \320\272\320\260\320\266\320\264\320\276\320\274 \320\262\321\205\320\276\320\264\320\265 \320\262 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        accessCodeQLineEdit->setInputMask(QString());
        accessCodeQLineEdit->setText(QString());
        accessCodeQLineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\232\320\276\320\264", nullptr));
        AccessCodeLabel->setText(QCoreApplication::translate("RegWindow", "\320\232\320\276\320\264 \320\264\320\276\321\201\321\202\321\203\320\277\320\260", nullptr));
        regButton->setText(QCoreApplication::translate("RegWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        backToAccessCodeInfoButton->setText(QString());
        infoLabel->setText(QCoreApplication::translate("RegWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        inputPhoneLabel->setText(QCoreApplication::translate("RegWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\262\320\260\321\210\321\203 \321\201\321\202\321\200\320\260\320\275\321\203 \320\270\320\267 \321\201\320\277\320\270\321\201\320\272\320\260 \320\270 \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \n"
"\320\275\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        CountryQComboBox->setItemText(0, QCoreApplication::translate("RegWindow", "\320\240\320\276\321\201\321\201\320\270\320\271\321\201\320\272\320\260\321\217 \320\244\320\265\320\264\320\265\321\200\320\260\321\206\320\270\321\217", nullptr));
        CountryQComboBox->setItemText(1, QCoreApplication::translate("RegWindow", "\320\221\320\265\320\273\320\276\321\200\321\203\321\201\321\201\320\270\321\217", nullptr));
        CountryQComboBox->setItemText(2, QCoreApplication::translate("RegWindow", "\320\243\320\272\321\200\320\260\320\270\320\275\320\260", nullptr));
        CountryQComboBox->setItemText(3, QCoreApplication::translate("RegWindow", "\320\232\320\260\320\267\320\260\321\205\321\201\321\202\320\260\320\275", nullptr));

        countryLabel->setText(QCoreApplication::translate("RegWindow", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        codeCountryLabel->setText(QCoreApplication::translate("RegWindow", "\320\232\320\276\320\264", nullptr));
        phoneLabel->setText(QCoreApplication::translate("RegWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        phoneQLineEdit->setInputMask(QString());
        phoneQLineEdit->setText(QString());
        phoneQLineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        phoneButton->setText(QCoreApplication::translate("RegWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        PhoneQComboBox->setItemText(0, QCoreApplication::translate("RegWindow", "+7", nullptr));
        PhoneQComboBox->setItemText(1, QCoreApplication::translate("RegWindow", "+375", nullptr));
        PhoneQComboBox->setItemText(2, QCoreApplication::translate("RegWindow", "+380", nullptr));
        PhoneQComboBox->setItemText(3, QCoreApplication::translate("RegWindow", "+7", nullptr));

        backToUserInfoFromPhoneButton->setText(QString());
        passwordQLineEdit->setInputMask(QString());
        passwordQLineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        regLabel->setText(QCoreApplication::translate("RegWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        loginQLineEdit->setInputMask(QString());
        loginQLineEdit->setText(QString());
        loginQLineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        authLink->setText(QCoreApplication::translate("RegWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        openEye->setText(QString());
        userInfoButton->setText(QCoreApplication::translate("RegWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        closeEye->setText(QString());
        infoAccessCodeLabel->setText(QCoreApplication::translate("RegWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        inputAccessCodeInfoLabel->setText(QCoreApplication::translate("RegWindow", "\320\235\320\260 \320\264\320\260\320\275\320\275\321\213\320\265 \321\207\321\202\320\276 \320\262\321\213 \320\262\320\262\320\265\320\273\320\270 \320\262\321\213\321\201\320\273\320\260\320\275 \320\272\320\276\320\264", nullptr));
        codeLabel->setText(QCoreApplication::translate("RegWindow", "\320\232\320\276\320\264", nullptr));
        phoneAccessCodeQLineEdit->setInputMask(QString());
        phoneAccessCodeQLineEdit->setText(QString());
        phoneAccessCodeQLineEdit->setPlaceholderText(QCoreApplication::translate("RegWindow", "\320\232\320\276\320\264", nullptr));
        accessCodeButton->setText(QCoreApplication::translate("RegWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        backToPhoneFromAccessCodeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegWindow: public Ui_RegWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
