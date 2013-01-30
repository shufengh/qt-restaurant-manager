/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#include "calender.h"
#include "ui_calender.h"

Calender::Calender(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calender)
{
    ui->setupUi(this);
    this->setGeometry(parent->pos().x()+100,parent->pos().y()+80,400,270);
}

Calender::~Calender()
{
    delete ui;
}

void Calender::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
