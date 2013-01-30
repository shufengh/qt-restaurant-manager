/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#include "bookingmng.h"
#include "ui_bookingmng.h"

BookingMng::BookingMng(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookingMng)
{
    ui->setupUi(this);

    QTime time  = QTime::currentTime();
    int t = 10*(time.minute()/10+1);
    if(t == 60){
        ui->lcdNumber_hour->display(time.hour()+1);
        ui->lcdNumber_minute->display(0);
    }
    else{
        ui->lcdNumber_hour->display(time.hour());
        ui->lcdNumber_minute->display(t);
    }

}
BookingMng::BookingMng(QWidget *parent, QString btName, TableMng *tbMng) :
    QDialog(parent),
    ui(new Ui::BookingMng)
{
    ui->setupUi(this);
    this->btName = btName;
    this->tbMng = tbMng;
    ui->label_2_tblName->setText(btName);
    QTime time  = QTime::currentTime();
    int t = 10*(time.minute()/10+1);
    if(t == 60){
        ui->lcdNumber_hour->display(time.hour()+1);
        ui->lcdNumber_minute->display(0);
    }
    else{
        ui->lcdNumber_hour->display(time.hour());
        ui->lcdNumber_minute->display(t);
    }

}
BookingMng::~BookingMng()
{
    delete ui;
}

void BookingMng::changeEvent(QEvent *e)
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


void BookingMng::on_pushButton_confirm_clicked()
{

    QTime tm(ui->lcdNumber_hour->value(),ui->lcdNumber_minute->value(),0);
    if(tm < QTime::currentTime()){
        QMessageBox::warning(this,"Error time",tr("预订时间已过"));
    }
    else if(!this->tbMng->isInBookingTable(this->btName)){
        int r = this->tbMng->addBookingTable(this->btName,tm);
        switch(r){
        case 0:{
                QMessageBox::warning(this,0,tr("请您准时前往"));
                break;
            }
        case 1:{
                QMessageBox::warning(this,0,tr("此桌已预定"));
                break;
            }
        case 2:{
                QMessageBox::warning(this,0,tr("此桌正在使用中"));
                break;
            }
        default:{
                QMessageBox::warning(this,0,tr("未知错误"));
                break;
            }

        }
    }
    else
        QMessageBox::warning(this,"Already booked",tr("当前桌子已被预订"));
    close();
}
void BookingMng::on_pushButton_cancel_clicked()
{
    close();
}

void BookingMng::on_pushButton_hour_add_clicked()
{
    int hour = (int)ui->lcdNumber_hour->value();
    ++hour;
    if(hour == 24)
        hour = 0;
    ui->lcdNumber_hour->display(hour);
}

void BookingMng::on_pushButton_hour_dec_2_clicked()
{
    int hour = (int)ui->lcdNumber_hour->value();
    --hour;
    if(hour == -1)
        hour = 23;
    ui->lcdNumber_hour->display(hour);
}

void BookingMng::on_pushButton_min_add_clicked()
{
    int minute = (int) ui->lcdNumber_minute->value();
    minute +=10;
    if(minute == 60)
        minute = 0;
    ui->lcdNumber_minute->display(minute);
}

void BookingMng::on_pushButton_min_dec_clicked()
{
    int minute = (int) ui->lcdNumber_minute->value();
    minute -=10;
    if(minute == -10)
        minute = 50;
    ui->lcdNumber_minute->display(minute);
}


