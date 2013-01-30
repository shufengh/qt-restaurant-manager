/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created: Fri Jun 24 10:37:13 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

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

class Ui_Table
{
public:
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_back_2;
    QLabel *label_2;
    QPushButton *pushButton_undo;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_add;
    QPushButton *pushButton_back;
    QLineEdit *lineEdit;
    QPushButton *pushButton_des;
    QPushButton *pushButton_asc;
    QTableView *tableView;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_check;

    void setupUi(QWidget *Table)
    {
        if (Table->objectName().isEmpty())
            Table->setObjectName(QString::fromUtf8("Table"));
        Table->resize(560, 380);
        label = new QLabel(Table);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 561, 380));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/grey_background.png")));
        label_3 = new QLabel(Table);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 391, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        pushButton_back_2 = new QPushButton(Table);
        pushButton_back_2->setObjectName(QString::fromUtf8("pushButton_back_2"));
        pushButton_back_2->setGeometry(QRect(400, 327, 75, 23));
        label_2 = new QLabel(Table);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(21, 327, 42, 16));
        pushButton_undo = new QPushButton(Table);
        pushButton_undo->setObjectName(QString::fromUtf8("pushButton_undo"));
        pushButton_undo->setGeometry(QRect(400, 282, 75, 23));
        pushButton_delete = new QPushButton(Table);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(400, 102, 75, 23));
        pushButton_add = new QPushButton(Table);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(400, 147, 75, 23));
        pushButton_back = new QPushButton(Table);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(310, 327, 75, 23));
        lineEdit = new QLineEdit(Table);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(69, 328, 133, 20));
        pushButton_des = new QPushButton(Table);
        pushButton_des->setObjectName(QString::fromUtf8("pushButton_des"));
        pushButton_des->setGeometry(QRect(400, 237, 75, 23));
        pushButton_asc = new QPushButton(Table);
        pushButton_asc->setObjectName(QString::fromUtf8("pushButton_asc"));
        pushButton_asc->setGeometry(QRect(400, 192, 75, 23));
        tableView = new QTableView(Table);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(21, 57, 371, 251));
        pushButton_submit = new QPushButton(Table);
        pushButton_submit->setObjectName(QString::fromUtf8("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(400, 57, 80, 23));
        pushButton_check = new QPushButton(Table);
        pushButton_check->setObjectName(QString::fromUtf8("pushButton_check"));
        pushButton_check->setGeometry(QRect(229, 327, 75, 23));

        retranslateUi(Table);

        QMetaObject::connectSlotsByName(Table);
    } // setupUi

    void retranslateUi(QWidget *Table)
    {
        Table->setWindowTitle(QApplication::translate("Table", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_3->setText(QApplication::translate("Table", "Welcome to TableManagement", 0, QApplication::UnicodeUTF8));
        pushButton_back_2->setText(QApplication::translate("Table", "close", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Table", "tableID", 0, QApplication::UnicodeUTF8));
        pushButton_undo->setText(QApplication::translate("Table", "unDo", 0, QApplication::UnicodeUTF8));
        pushButton_delete->setText(QApplication::translate("Table", "deleteTable", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("Table", "addTable", 0, QApplication::UnicodeUTF8));
        pushButton_back->setText(QApplication::translate("Table", "backTable", 0, QApplication::UnicodeUTF8));
        pushButton_des->setText(QApplication::translate("Table", "descendNum", 0, QApplication::UnicodeUTF8));
        pushButton_asc->setText(QApplication::translate("Table", "ascendNum", 0, QApplication::UnicodeUTF8));
        pushButton_submit->setText(QApplication::translate("Table", "submitChange", 0, QApplication::UnicodeUTF8));
        pushButton_check->setText(QApplication::translate("Table", "check", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Table: public Ui_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
