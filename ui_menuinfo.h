/********************************************************************************
** Form generated from reading UI file 'menuinfo.ui'
**
** Created: Fri Jun 17 14:15:29 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUINFO_H
#define UI_MENUINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_9_exit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(560, 300);
        Widget->setAutoFillBackground(false);
        Widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(Widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 0, 0, 6, 3);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 3, 1, 1);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 3, 1, 1);

        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 3, 3, 1, 1);

        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 4, 3, 1, 1);

        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 5, 3, 1, 1);

        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 6, 0, 1, 1);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 6, 1, 1, 1);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 2, 1, 1);

        pushButton_9_exit = new QPushButton(Widget);
        pushButton_9_exit->setObjectName(QString::fromUtf8("pushButton_9_exit"));

        gridLayout->addWidget(pushButton_9_exit, 6, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Widget", "\346\217\220\344\272\244\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Widget", "\346\222\244\351\224\200\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Widget", "\345\242\236\345\212\240\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Widget", "\345\210\240\351\231\244\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Widget", "\346\214\211ID\345\215\207\345\272\217\346\216\222\345\210\227", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Widget", "\346\214\211ID\351\231\215\345\272\217\346\216\222\345\210\227", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Widget", "\350\277\224\345\233\236\345\205\250\350\241\250", 0, QApplication::UnicodeUTF8));
        pushButton_9_exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUINFO_H
