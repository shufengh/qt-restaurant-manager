/********************************************************************************
** Form generated from reading UI file 'waiter.ui'
**
** Created: Fri Jun 24 10:37:13 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITER_H
#define UI_WAITER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Waiter
{
public:
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_add;
    QPushButton *pushButton_asc;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_check;
    QTableView *tableView;
    QPushButton *pushButton_back;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_undo;
    QPushButton *pushButton_desc;
    QPushButton *pushButton_check_2;

    void setupUi(QWidget *Waiter)
    {
        if (Waiter->objectName().isEmpty())
            Waiter->setObjectName(QString::fromUtf8("Waiter"));
        Waiter->resize(500, 400);
        label = new QLabel(Waiter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 500, 400));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/wall3-new.png")));
        label_3 = new QLabel(Waiter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 0, 321, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        pushButton_add = new QPushButton(Waiter);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(417, 66, 75, 23));
        pushButton_asc = new QPushButton(Waiter);
        pushButton_asc->setObjectName(QString::fromUtf8("pushButton_asc"));
        pushButton_asc->setGeometry(QRect(417, 160, 75, 23));
        pushButton_delete = new QPushButton(Waiter);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(417, 113, 80, 23));
        pushButton_check = new QPushButton(Waiter);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));
        pushButton_check->setGeometry(QRect(320, 345, 75, 23));
        tableView = new QTableView(Waiter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 401, 301));
        pushButton_back = new QPushButton(Waiter);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(417, 301, 75, 23));
        label_2 = new QLabel(Waiter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 345, 91, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(Waiter);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 345, 133, 20));
        pushButton_submit = new QPushButton(Waiter);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(417, 19, 80, 23));
        pushButton_undo = new QPushButton(Waiter);
        pushButton_undo->setObjectName(QString::fromUtf8("pushButton_undo"));
        pushButton_undo->setGeometry(QRect(417, 254, 75, 23));
        pushButton_desc = new QPushButton(Waiter);
        pushButton_desc->setObjectName(QString::fromUtf8("pushButton_desc"));
        pushButton_desc->setGeometry(QRect(417, 207, 75, 23));
        pushButton_check_2 = new QPushButton(Waiter);
        pushButton_check_2->setObjectName(QString::fromUtf8("pushButton_check_2"));
        pushButton_check_2->setGeometry(QRect(417, 345, 75, 23));

        retranslateUi(Waiter);

        QMetaObject::connectSlotsByName(Waiter);
    } // setupUi

    void retranslateUi(QWidget *Waiter)
    {
        Waiter->setWindowTitle(QApplication::translate("Waiter", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("Waiter", "Welcome to Waiter Management ", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("Waiter", "addWaiter", 0, QApplication::UnicodeUTF8));
        pushButton_asc->setText(QApplication::translate("Waiter", "ascID", 0, QApplication::UnicodeUTF8));
        pushButton_delete->setText(QApplication::translate("Waiter", "deleteWaiter", 0, QApplication::UnicodeUTF8));
        pushButton_check->setText(QApplication::translate("Waiter", "Check", 0, QApplication::UnicodeUTF8));
        pushButton_back->setText(QApplication::translate("Waiter", "backTable", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Waiter", "WaiterID", 0, QApplication::UnicodeUTF8));
        pushButton_submit->setText(QApplication::translate("Waiter", "submitModify", 0, QApplication::UnicodeUTF8));
        pushButton_undo->setText(QApplication::translate("Waiter", "unDo", 0, QApplication::UnicodeUTF8));
        pushButton_desc->setText(QApplication::translate("Waiter", "descID", 0, QApplication::UnicodeUTF8));
        pushButton_check_2->setText(QApplication::translate("Waiter", "close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Waiter: public Ui_Waiter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITER_H
