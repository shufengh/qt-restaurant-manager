#include "menuinfo.h"

MenuInfo::MenuInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setAutoFillBackground(true);
    dbtest->getInstance();
    initTableModel();
}

void MenuInfo::initTableModel(){
    tableModel = new QSqlTableModel();
    tableModel->setTable("dishes");
    tableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tableModel->select();
    ui->tableView->setModel(tableModel);
}

MenuInfo::~MenuInfo()
{
    delete ui;
}

void MenuInfo::changeEvent(QEvent *e)
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

void MenuInfo::on_pushButton_3_clicked()
{
    tableModel->database().transaction();
    if(tableModel->submitAll())
        tableModel->database().commit();
    else{
        tableModel->database().rollback();
        QMessageBox::warning(this,"failed",
                             tr("数据库错误: %1").arg(tableModel->lastError().text()));
    }
}

void MenuInfo::on_pushButton_4_clicked()
{
        tableModel->revertAll();
}

void MenuInfo::on_pushButton_5_clicked()
{
    int rowNum = tableModel->rowCount();
    tableModel->insertRow(rowNum);

}

void MenuInfo::on_pushButton_6_clicked()
{
    int ret = QMessageBox::warning(this,tr("删除当前行"),tr("你确认删除吗"),
                          QMessageBox::Yes,
                          QMessageBox::No);
    if(ret == QMessageBox::Yes){
    int rowNum = ui->tableView->currentIndex().row();
    tableModel->removeRow(rowNum);
    tableModel->submitAll();
    }
    else
         tableModel->revertAll();

}

void MenuInfo::on_pushButton_7_clicked()
{
    tableModel->setSort(0,Qt::AscendingOrder);
    tableModel->select();
}

void MenuInfo::on_pushButton_8_clicked()
{
    tableModel->setSort(0,Qt::DescendingOrder);
    tableModel->select();
}

void MenuInfo::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    tableModel->setFilter(tr("name = '%1'").arg(name));
    tableModel->select();
}

void MenuInfo::on_pushButton_2_clicked()
{
    tableModel->setTable("dishes");
    tableModel->select();
}

void MenuInfo::on_pushButton_9_exit_clicked()
{
    close();
}
