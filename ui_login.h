/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Sat Jun 25 16:09:51 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_title;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_account;
    QLineEdit *lineEdit_2_pwd;
    QPushButton *pushButtonlogin;
    QPushButton *pushButton_exit;
    QLabel *label_5_account_warnning;
    QLabel *label_5_pwd_warning;
    QComboBox *comboBox;
    QLabel *label_5;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(640, 480);
        label = new QLabel(Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 640, 480));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/login.png")));
        label->setScaledContents(false);
        label_title = new QLabel(Login);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(90, 140, 491, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_title->setFont(font);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 264, 31, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aharoni"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_4 = new QLabel(Login);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 293, 31, 21));
        label_4->setFont(font1);
        lineEdit_account = new QLineEdit(Login);
        lineEdit_account->setObjectName(QString::fromUtf8("lineEdit_account"));
        lineEdit_account->setGeometry(QRect(150, 260, 151, 24));
        lineEdit_2_pwd = new QLineEdit(Login);
        lineEdit_2_pwd->setObjectName(QString::fromUtf8("lineEdit_2_pwd"));
        lineEdit_2_pwd->setGeometry(QRect(150, 290, 151, 24));
        lineEdit_2_pwd->setEchoMode(QLineEdit::Password);
        pushButtonlogin = new QPushButton(Login);
        pushButtonlogin->setObjectName(QString::fromUtf8("pushButtonlogin"));
        pushButtonlogin->setGeometry(QRect(150, 353, 75, 30));
        pushButtonlogin->setFocusPolicy(Qt::ClickFocus);
        pushButtonlogin->setStyleSheet(QString::fromUtf8(""));
        pushButtonlogin->setAutoDefault(false);
        pushButtonlogin->setDefault(false);
        pushButtonlogin->setFlat(false);
        pushButton_exit = new QPushButton(Login);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(227, 353, 75, 30));
        label_5_account_warnning = new QLabel(Login);
        label_5_account_warnning->setObjectName(QString::fromUtf8("label_5_account_warnning"));
        label_5_account_warnning->setGeometry(QRect(320, 260, 91, 21));
        label_5_pwd_warning = new QLabel(Login);
        label_5_pwd_warning->setObjectName(QString::fromUtf8("label_5_pwd_warning"));
        label_5_pwd_warning->setGeometry(QRect(320, 290, 91, 21));
        comboBox = new QComboBox(Login);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(150, 320, 151, 24));
        label_5 = new QLabel(Login);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 322, 31, 21));
        label_5->setFont(font1);
        QWidget::setTabOrder(lineEdit_account, lineEdit_2_pwd);
        QWidget::setTabOrder(lineEdit_2_pwd, comboBox);
        QWidget::setTabOrder(comboBox, pushButtonlogin);
        QWidget::setTabOrder(pushButtonlogin, pushButton_exit);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_title->setText(QApplication::translate("Login", "\346\254\242\350\277\216\344\275\277\347\224\250\350\217\234\345\215\225\347\256\241\347\220\206\347\263\273\347\273\237v0.009", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Login", "\345\270\220\345\217\267", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Login", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        pushButtonlogin->setText(QApplication::translate("Login", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("Login", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        label_5_account_warnning->setText(QString());
        label_5_pwd_warning->setText(QString());
        label_5->setText(QApplication::translate("Login", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
