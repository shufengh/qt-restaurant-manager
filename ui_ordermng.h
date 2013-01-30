/********************************************************************************
** Form generated from reading UI file 'ordermng.ui'
**
** Created: Sun Jun 19 22:56:42 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERMNG_H
#define UI_ORDERMNG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OrderMng
{
public:
    QLabel *label;
    QLabel *label_tbName;
    QLabel *label_curCost;
    QLabel *label_2;
    QPushButton *pushButton_order;
    QPushButton *pushButton_pay;

    void setupUi(QDialog *OrderMng)
    {
        if (OrderMng->objectName().isEmpty())
            OrderMng->setObjectName(QString::fromUtf8("OrderMng"));
        OrderMng->resize(320, 240);
        label = new QLabel(OrderMng);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_tbName = new QLabel(OrderMng);
        label_tbName->setObjectName(QString::fromUtf8("label_tbName"));
        label_tbName->setGeometry(QRect(170, 25, 54, 21));
        label_tbName->setFont(font);
        label_curCost = new QLabel(OrderMng);
        label_curCost->setObjectName(QString::fromUtf8("label_curCost"));
        label_curCost->setGeometry(QRect(170, 65, 71, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aharoni"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_curCost->setFont(font1);
        label_2 = new QLabel(OrderMng);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 60, 81, 31));
        label_2->setFont(font);
        pushButton_order = new QPushButton(OrderMng);
        pushButton_order->setObjectName(QString::fromUtf8("pushButton_order"));
        pushButton_order->setGeometry(QRect(40, 120, 111, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aharoni"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_order->setFont(font2);
        pushButton_pay = new QPushButton(OrderMng);
        pushButton_pay->setObjectName(QString::fromUtf8("pushButton_pay"));
        pushButton_pay->setGeometry(QRect(170, 120, 121, 91));
        pushButton_pay->setFont(font2);

        retranslateUi(OrderMng);

        QMetaObject::connectSlotsByName(OrderMng);
    } // setupUi

    void retranslateUi(QDialog *OrderMng)
    {
        OrderMng->setWindowTitle(QApplication::translate("OrderMng", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OrderMng", "\346\241\214\345\217\267", 0, QApplication::UnicodeUTF8));
        label_tbName->setText(QApplication::translate("OrderMng", "No", 0, QApplication::UnicodeUTF8));
        label_curCost->setText(QApplication::translate("OrderMng", "Cost", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OrderMng", "\345\275\223\345\211\215\346\266\210\350\264\271", 0, QApplication::UnicodeUTF8));
        pushButton_order->setText(QApplication::translate("OrderMng", "\347\202\271\350\217\234", 0, QApplication::UnicodeUTF8));
        pushButton_pay->setText(QApplication::translate("OrderMng", "\347\273\223\347\256\227", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OrderMng: public Ui_OrderMng {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERMNG_H
