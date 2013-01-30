#include "tableinfo.h"
#include "ui_tableinfo.h"

TableInfo::TableInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableInfo)
{
    ui->setupUi(this);
}
TableInfo::TableInfo(QWidget *parent, int cliPos, TableMng *tbMng) :
    QWidget(parent),
    ui(new Ui::TableInfo)
{
    ui->setupUi(this);
    this->cliPos = cliPos;
    this->tbMng = tbMng;
}
TableInfo::~TableInfo()
{
    delete ui;
}

void TableInfo::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void TableInfo::on_pushButton_14_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_14->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_14->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_14->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_14->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }

}

void TableInfo::on_pushButton_exit_clicked()
{
    close();
}

void TableInfo::on_pushButton_2_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_2->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_2->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_2->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_2->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }

}

void TableInfo::on_pushButton_3_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_3->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_3->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_3->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_3->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_4_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_4->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_4->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_4->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_4->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_5_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_5->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_5->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_5->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_5->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_6_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_6->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_6->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_6->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_6->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_7_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_7->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_7->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_7->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_7->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_8_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_8->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_8->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_8->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_8->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_9_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_9->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_9->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_9->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_9->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_10_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_10->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_10->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_10->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_10->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_11_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_11->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_11->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_11->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_11->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_12_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_12->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_12->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_12->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_12->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}

void TableInfo::on_pushButton_13_clicked()
{
    switch(this->cliPos){
    case 0:{
            if(!this->tbMng->isInUsingTable(ui->pushButton_13->text())){
                QMessageBox::warning(this,0,tr("请先开桌"));
                break;
            }
        OrderMng *om = new OrderMng(this,ui->pushButton_13->text(),this->tbMng);
        om->show();
        break;
    }
    case 1:{
        OpenTable *ot = new OpenTable(this,ui->pushButton_13->text(),this->tbMng);
        ot->show();
        break;
    }
    case 2:{
        BookingMng *bm = new BookingMng(this,ui->pushButton_13->text(),this->tbMng);
        bm->show();
        break;
    }
    default:
        break;
    }
}
