/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#include "opentable.h"
#include "ui_opentable.h"

OpenTable::OpenTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenTable)
{
    ui->setupUi(this);
}
OpenTable::OpenTable(QWidget *parent, QString btName, TableMng *tbMng) :
    QDialog(parent),
    ui(new Ui::OpenTable)
{
    ui->setupUi(this);
    this->btName = btName;
    this->tbMng = tbMng;
    init();
}
void OpenTable::init(){
    ui->label_tbName->setText(this->btName);
    if(this->tbMng->isInBookingTable(this->btName)){
        ui->label_status->setText(tr("�ѱ�Ԥ��"));
        ui->pushButton_openTbl->setDisabled(true);
    }
    else if(this->tbMng->isInUsingTable(this->btName)){
        ui->label_status->setText(tr("���˾Ͳ���"));
        ui->pushButton_gst_comes->setDisabled(true);
        ui->pushButton_gst_cancel->setDisabled(true);
        ui->pushButton_openTbl->setDisabled(true);
    }
    else {
        ui->label_status->setText(tr("������"));
        ui->pushButton_gst_comes->setDisabled(true);
        ui->pushButton_gst_cancel->setDisabled(true);
    }
}
OpenTable::~OpenTable()
{
    delete ui;
}

void OpenTable::changeEvent(QEvent *e)
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

void OpenTable::on_pushButton_gst_comes_clicked()
{
    int r = this->tbMng->removeBookingTable(this->btName);
    if(r == 0){
        QMessageBox::warning(this,0,tr("������Ԥ��"));
        return;
    }
    r = this->tbMng->addUsingTable(this->btName,new CostRec());
    switch(r){
    case 0:{
            QMessageBox::warning(this,0,tr("ף�òͿ���"));
            break;
        }
    case 1:{
            QMessageBox::warning(this,0,tr("������Ԥ��"));
            break;
        }
    case 2:{
            QMessageBox::warning(this,0,tr("��������ʹ����"));
            break;
        }
    default:{
            QMessageBox::warning(this,0,tr("δ֪����"));
            break;
        }

    }
    close();

}

void OpenTable::on_pushButton_gst_cancel_clicked()
{
        int r = this->tbMng->removeBookingTable(this->btName);
        if(r == 1)
            QMessageBox::warning(this,0,tr("��ȡ������"));
        else
            QMessageBox::warning(this,0,tr("������Ԥ��"));

        close();
}

void OpenTable::on_pushButton_openTbl_clicked()
{
    int r = this->tbMng->addUsingTable(this->btName,new CostRec());
  //  QMessageBox::warning(this,0,tr("ף�òͿ���"));
    switch(r){
    case 0:{
            QMessageBox::warning(this,0,tr("ף�òͿ���"));
            break;
        }
    case 1:{
            QMessageBox::warning(this,0,tr("������Ԥ��"));
            break;
        }
    case 2:{
            QMessageBox::warning(this,0,tr("��������ʹ����"));
            break;
        }
    default:{
            QMessageBox::warning(this,0,tr("δ֪����"));
            break;
        }

    }
    close();
}

void OpenTable::on_pushButton_exit_clicked()
{
    close();
}
