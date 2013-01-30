/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#include "ordermng.h"
#include "ui_ordermng.h"

OrderMng::OrderMng(QWidget *parent, QString btName, TableMng *tbMng) :
    QDialog(parent),
    ui(new Ui::OrderMng)
{
    ui->setupUi(this);
    this->btName = btName;
    this->tbMng = tbMng;
    this->pCR = this->tbMng->getCostRec(this->btName);
    int cost = this->pCR->sumCost();

    ui->label_tbName->setText(btName);
    ui->label_curCost->setText(tr("%1").arg(cost));
}

OrderMng::~OrderMng()
{
    delete ui;
}

void OrderMng::changeEvent(QEvent *e)
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

void OrderMng::on_pushButton_order_clicked()
{
    MakeOrder *mo = new MakeOrder(this,this->pCR);
    mo->show();
    int cost = this->pCR->sumCost();
    ui->label_curCost->setText(tr("%1").arg(cost));
}

void OrderMng::on_pushButton_pay_clicked()
{
    int r = QMessageBox::information(this,tr("½áÕÊ ×ÀºÅ£º%1").arg(this->btName),
                             this->pCR->printAll());
    if(r == QMessageBox::Ok){
        this->tbMng->removeUsingTable(this->btName);
        close();
    }
}
