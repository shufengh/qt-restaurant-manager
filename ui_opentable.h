/********************************************************************************
** Form generated from reading UI file 'opentable.ui'
**
** Created: Sun Jun 19 21:41:08 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENTABLE_H
#define UI_OPENTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OpenTable
{
public:
    QLabel *label;
    QLabel *label_tbName;
    QLabel *label_2;
    QLabel *label_status;
    QPushButton *pushButton_gst_comes;
    QPushButton *pushButton_gst_cancel;
    QPushButton *pushButton_openTbl;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *OpenTable)
    {
        if (OpenTable->objectName().isEmpty())
            OpenTable->setObjectName(QString::fromUtf8("OpenTable"));
        OpenTable->resize(320, 240);
        label = new QLabel(OpenTable);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 41, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Aharoni"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_tbName = new QLabel(OpenTable);
        label_tbName->setObjectName(QString::fromUtf8("label_tbName"));
        label_tbName->setGeometry(QRect(110, 20, 91, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aharoni"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_tbName->setFont(font1);
        label_2 = new QLabel(OpenTable);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 60, 31, 30));
        label_2->setFont(font);
        label_status = new QLabel(OpenTable);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(110, 60, 141, 30));
        label_status->setFont(font);
        pushButton_gst_comes = new QPushButton(OpenTable);
        pushButton_gst_comes->setObjectName(QString::fromUtf8("pushButton_gst_comes"));
        pushButton_gst_comes->setGeometry(QRect(40, 110, 101, 41));
        pushButton_gst_comes->setFont(font);
        pushButton_gst_cancel = new QPushButton(OpenTable);
        pushButton_gst_cancel->setObjectName(QString::fromUtf8("pushButton_gst_cancel"));
        pushButton_gst_cancel->setGeometry(QRect(150, 110, 111, 41));
        pushButton_gst_cancel->setFont(font);
        pushButton_openTbl = new QPushButton(OpenTable);
        pushButton_openTbl->setObjectName(QString::fromUtf8("pushButton_openTbl"));
        pushButton_openTbl->setGeometry(QRect(40, 170, 101, 41));
        pushButton_openTbl->setFont(font);
        pushButton_exit = new QPushButton(OpenTable);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(150, 170, 111, 41));
        pushButton_exit->setFont(font);

        retranslateUi(OpenTable);

        QMetaObject::connectSlotsByName(OpenTable);
    } // setupUi

    void retranslateUi(QDialog *OpenTable)
    {
        OpenTable->setWindowTitle(QApplication::translate("OpenTable", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OpenTable", "\346\241\214\345\217\267", 0, QApplication::UnicodeUTF8));
        label_tbName->setText(QApplication::translate("OpenTable", "Tb Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OpenTable", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label_status->setText(QApplication::translate("OpenTable", "Table status", 0, QApplication::UnicodeUTF8));
        pushButton_gst_comes->setText(QApplication::translate("OpenTable", "\345\256\242\344\272\272\345\210\260\344\272\206", 0, QApplication::UnicodeUTF8));
        pushButton_gst_cancel->setText(QApplication::translate("OpenTable", "\345\256\242\344\272\272\346\224\276\351\270\275\345\255\220\344\272\206", 0, QApplication::UnicodeUTF8));
        pushButton_openTbl->setText(QApplication::translate("OpenTable", "\345\274\200\346\241\214\345\225\246", 0, QApplication::UnicodeUTF8));
        pushButton_exit->setText(QApplication::translate("OpenTable", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OpenTable: public Ui_OpenTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENTABLE_H
