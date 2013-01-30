/********************************************************************************
** Form generated from reading UI file 'tableinfo.ui'
**
** Created: Sun Jun 19 15:09:12 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEINFO_H
#define UI_TABLEINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableInfo
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_7;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_12;

    void setupUi(QWidget *TableInfo)
    {
        if (TableInfo->objectName().isEmpty())
            TableInfo->setObjectName(QString::fromUtf8("TableInfo"));
        TableInfo->resize(580, 348);
        label = new QLabel(TableInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 580, 348));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/images/wall3.png);"));
        pushButton = new QPushButton(TableInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 96, 96));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/images/tableIcon.png);\n"
"font: 75 14pt \"Aharoni\";\n"
""));
        pushButton_2 = new QPushButton(TableInfo);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(126, 10, 96, 96));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_3 = new QPushButton(TableInfo);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(242, 10, 96, 96));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_4 = new QPushButton(TableInfo);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(356, 10, 96, 96));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_5 = new QPushButton(TableInfo);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(472, 10, 96, 96));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_9 = new QPushButton(TableInfo);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(356, 126, 96, 96));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_8 = new QPushButton(TableInfo);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(242, 126, 96, 96));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_6 = new QPushButton(TableInfo);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 126, 96, 96));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_10 = new QPushButton(TableInfo);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(472, 126, 96, 96));
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_7 = new QPushButton(TableInfo);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(126, 126, 96, 96));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_14 = new QPushButton(TableInfo);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(356, 242, 96, 96));
        pushButton_14->setStyleSheet(QString::fromUtf8("border-image: url(:/images/tableIcon.png);\n"
"font: 75 14pt \"Aharoni\";"));
        pushButton_13 = new QPushButton(TableInfo);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(242, 242, 96, 96));
        pushButton_13->setStyleSheet(QString::fromUtf8("border-image: url(:/images/tableIcon.png);\n"
"font: 75 14pt \"Aharoni\";"));
        pushButton_11 = new QPushButton(TableInfo);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 242, 96, 96));
        pushButton_11->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));
        pushButton_exit = new QPushButton(TableInfo);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(472, 242, 96, 96));
        pushButton_exit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/pause1.png);\n"
"font: 75 14pt \"Aharoni\";\n"
"\n"
""));
        pushButton_12 = new QPushButton(TableInfo);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(126, 242, 96, 96));
        pushButton_12->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Aharoni\";border-image: url(:/images/tableIcon.png);"));

        retranslateUi(TableInfo);

        QMetaObject::connectSlotsByName(TableInfo);
    } // setupUi

    void retranslateUi(QWidget *TableInfo)
    {
        TableInfo->setWindowTitle(QApplication::translate("TableInfo", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("TableInfo", "T1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("TableInfo", "T2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("TableInfo", "T3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("TableInfo", "T4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("TableInfo", "T5", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("TableInfo", "T9", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("TableInfo", "T8", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("TableInfo", "T6", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("TableInfo", "T10", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("TableInfo", "T7", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("TableInfo", "T14", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("TableInfo", "T13", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("TableInfo", "T11", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("TableInfo", "Exit", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("TableInfo", "T12", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TableInfo: public Ui_TableInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEINFO_H
