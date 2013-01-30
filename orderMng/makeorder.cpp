/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#include "makeorder.h"
#include "ui_makeorder.h"

MakeOrder::MakeOrder(QWidget *parent, CostRec *pCR) :
    QDialog(parent),
    ui(new Ui::MakeOrder)
{
    ui->setupUi(this);
    this->pCR = pCR;
    ui->lcdNumber->display(1);
    db->getInstance();
    initTableModel();
}

MakeOrder::~MakeOrder()
{
    delete ui;
}

void MakeOrder::changeEvent(QEvent *e)
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
void MakeOrder::initTableModel(){
    tableModel = new QSqlTableModel();
    tableModel->setTable("dishes");
    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tableModel->select();
    ui->tableView->setModel(tableModel);
}



void MakeOrder::on_tableView_clicked(QModelIndex index)
{
    ui->lineEdit_dishName->clear();
    ui->lcdNumber->display(1);
    QSqlQuery query;
    query.exec(tr("select name,prize from dishes where id=%1").arg(index.row()+1));
    if(query.next()){
        ui->lineEdit_dishName->setText(query.value(0).toString());
        this->name = query.value(0).toString();
        this->price = query.value(1).toInt();
       // qDebug()<<this->name<<" "<<this->price;
    }
    else
        QMessageBox::warning(this,0,tr("无选定内容"));
}

void MakeOrder::on_pushButton_numAdd_clicked()
{
    int nCount = ui->lcdNumber->value();
    ++nCount;
    ui->lcdNumber->display(nCount);
}

void MakeOrder::on_pushButton_numDec_clicked()
{
    int nCount = ui->lcdNumber->value();
    --nCount;
    ui->lcdNumber->display(nCount);
}

void MakeOrder::on_pushButton_makeOrder_clicked()
{
    this->pCR->addDish(this->name,this->price,ui->lcdNumber->value());
    ui->lineEdit_dishName->clear();
    ui->lcdNumber->display(0);
    ui->label_dishCount->setText(tr("%1\n共点%2份").arg(this->name).arg(this->pCR->getDishCount(this->name)));
}
