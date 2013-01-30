/********************************************************************************
** Form generated from reading UI file 'makeorder.ui'
**
** Created: Thu Jun 23 21:17:29 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEORDER_H
#define UI_MAKEORDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_MakeOrder
{
public:
    QLabel *label;
    QLineEdit *lineEdit_dishName;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_numAdd;
    QPushButton *pushButton_numDec;
    QPushButton *pushButton_makeOrder;
    QTableView *tableView;
    QLabel *label_dishCount;

    void setupUi(QDialog *MakeOrder)
    {
        if (MakeOrder->objectName().isEmpty())
            MakeOrder->setObjectName(QString::fromUtf8("MakeOrder"));
        MakeOrder->resize(520, 360);
        label = new QLabel(MakeOrder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 20, 51, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        lineEdit_dishName = new QLineEdit(MakeOrder);
        lineEdit_dishName->setObjectName(QString::fromUtf8("lineEdit_dishName"));
        lineEdit_dishName->setGeometry(QRect(390, 50, 121, 31));
        lcdNumber = new QLCDNumber(MakeOrder);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(410, 134, 80, 30));
        pushButton_numAdd = new QPushButton(MakeOrder);
        pushButton_numAdd->setObjectName(QString::fromUtf8("pushButton_numAdd"));
        pushButton_numAdd->setGeometry(QRect(410, 90, 80, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aharoni"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_numAdd->setFont(font1);
        pushButton_numDec = new QPushButton(MakeOrder);
        pushButton_numDec->setObjectName(QString::fromUtf8("pushButton_numDec"));
        pushButton_numDec->setGeometry(QRect(410, 170, 80, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aharoni"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_numDec->setFont(font2);
        pushButton_makeOrder = new QPushButton(MakeOrder);
        pushButton_makeOrder->setObjectName(QString::fromUtf8("pushButton_makeOrder"));
        pushButton_makeOrder->setGeometry(QRect(390, 220, 121, 61));
        pushButton_makeOrder->setFont(font2);
        tableView = new QTableView(MakeOrder);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 371, 341));
        label_dishCount = new QLabel(MakeOrder);
        label_dishCount->setObjectName(QString::fromUtf8("label_dishCount"));
        label_dishCount->setGeometry(QRect(390, 300, 121, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Aharoni"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_dishCount->setFont(font3);

        retranslateUi(MakeOrder);

        QMetaObject::connectSlotsByName(MakeOrder);
    } // setupUi

    void retranslateUi(QDialog *MakeOrder)
    {
        MakeOrder->setWindowTitle(QApplication::translate("MakeOrder", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MakeOrder", "\350\217\234\345\220\215", 0, QApplication::UnicodeUTF8));
        pushButton_numAdd->setText(QApplication::translate("MakeOrder", "+", 0, QApplication::UnicodeUTF8));
        pushButton_numDec->setText(QApplication::translate("MakeOrder", "-", 0, QApplication::UnicodeUTF8));
        pushButton_makeOrder->setText(QApplication::translate("MakeOrder", "\347\202\271\350\217\234", 0, QApplication::UnicodeUTF8));
        label_dishCount->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MakeOrder: public Ui_MakeOrder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEORDER_H
