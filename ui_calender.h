/********************************************************************************
** Form generated from reading UI file 'calender.ui'
**
** Created: Thu Jun 23 23:30:54 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDER_H
#define UI_CALENDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Calender
{
public:
    QDialogButtonBox *buttonBox;
    QCalendarWidget *calendarWidget;

    void setupUi(QDialog *Calender)
    {
        if (Calender->objectName().isEmpty())
            Calender->setObjectName(QString::fromUtf8("Calender"));
        Calender->resize(400, 270);
        buttonBox = new QDialogButtonBox(Calender);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(300, 30, 91, 211));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        calendarWidget = new QCalendarWidget(Calender);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 30, 261, 201));

        retranslateUi(Calender);
        QObject::connect(buttonBox, SIGNAL(accepted()), Calender, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Calender, SLOT(reject()));

        QMetaObject::connectSlotsByName(Calender);
    } // setupUi

    void retranslateUi(QDialog *Calender)
    {
        Calender->setWindowTitle(QApplication::translate("Calender", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Calender: public Ui_Calender {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDER_H
