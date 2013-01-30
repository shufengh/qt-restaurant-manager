/********************************************************************************
** Form generated from reading UI file 'bookingmng.ui'
**
** Created: Sun Jun 19 21:06:22 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINGMNG_H
#define UI_BOOKINGMNG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BookingMng
{
public:
    QLabel *label;
    QLabel *label_2_tblName;
    QPushButton *pushButton_confirm;
    QPushButton *pushButton_cancel;
    QLCDNumber *lcdNumber_hour;
    QLCDNumber *lcdNumber_minute;
    QPushButton *pushButton_hour_add;
    QPushButton *pushButton_hour_dec_2;
    QPushButton *pushButton_min_add;
    QPushButton *pushButton_min_dec;

    void setupUi(QDialog *BookingMng)
    {
        if (BookingMng->objectName().isEmpty())
            BookingMng->setObjectName(QString::fromUtf8("BookingMng"));
        BookingMng->resize(320, 240);
        label = new QLabel(BookingMng);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 71, 31));
        label_2_tblName = new QLabel(BookingMng);
        label_2_tblName->setObjectName(QString::fromUtf8("label_2_tblName"));
        label_2_tblName->setGeometry(QRect(140, 20, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_2_tblName->setFont(font);
        pushButton_confirm = new QPushButton(BookingMng);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(50, 180, 91, 41));
        pushButton_cancel = new QPushButton(BookingMng);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(160, 180, 91, 41));
        lcdNumber_hour = new QLCDNumber(BookingMng);
        lcdNumber_hour->setObjectName(QString::fromUtf8("lcdNumber_hour"));
        lcdNumber_hour->setGeometry(QRect(70, 94, 70, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aharoni"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lcdNumber_hour->setFont(font1);
        lcdNumber_hour->setStyleSheet(QString::fromUtf8(""));
        lcdNumber_minute = new QLCDNumber(BookingMng);
        lcdNumber_minute->setObjectName(QString::fromUtf8("lcdNumber_minute"));
        lcdNumber_minute->setGeometry(QRect(152, 94, 70, 30));
        lcdNumber_minute->setFont(font1);
        lcdNumber_minute->setStyleSheet(QString::fromUtf8(""));
        pushButton_hour_add = new QPushButton(BookingMng);
        pushButton_hour_add->setObjectName(QString::fromUtf8("pushButton_hour_add"));
        pushButton_hour_add->setGeometry(QRect(70, 61, 70, 30));
        pushButton_hour_add->setFont(font);
        pushButton_hour_dec_2 = new QPushButton(BookingMng);
        pushButton_hour_dec_2->setObjectName(QString::fromUtf8("pushButton_hour_dec_2"));
        pushButton_hour_dec_2->setGeometry(QRect(70, 130, 70, 30));
        pushButton_hour_dec_2->setFont(font);
        pushButton_min_add = new QPushButton(BookingMng);
        pushButton_min_add->setObjectName(QString::fromUtf8("pushButton_min_add"));
        pushButton_min_add->setGeometry(QRect(152, 61, 70, 30));
        pushButton_min_add->setFont(font);
        pushButton_min_dec = new QPushButton(BookingMng);
        pushButton_min_dec->setObjectName(QString::fromUtf8("pushButton_min_dec"));
        pushButton_min_dec->setGeometry(QRect(152, 130, 70, 30));
        pushButton_min_dec->setFont(font);

        retranslateUi(BookingMng);

        QMetaObject::connectSlotsByName(BookingMng);
    } // setupUi

    void retranslateUi(QDialog *BookingMng)
    {
        BookingMng->setWindowTitle(QApplication::translate("BookingMng", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BookingMng", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Table No</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2_tblName->setText(QApplication::translate("BookingMng", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Table name</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_confirm->setText(QApplication::translate("BookingMng", "Confirm", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("BookingMng", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_hour_add->setText(QApplication::translate("BookingMng", "+", 0, QApplication::UnicodeUTF8));
        pushButton_hour_dec_2->setText(QApplication::translate("BookingMng", "-", 0, QApplication::UnicodeUTF8));
        pushButton_min_add->setText(QApplication::translate("BookingMng", "+", 0, QApplication::UnicodeUTF8));
        pushButton_min_dec->setText(QApplication::translate("BookingMng", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BookingMng: public Ui_BookingMng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINGMNG_H
