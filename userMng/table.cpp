#include "table.h"
#include "ui_table.h"
#include <QMessageBox>
#include <QSqlError>
#include <QVariant>
#include <QSqlRecord>
#include <QSqlQuery>

Table::Table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Table)
{
    ui->setupUi(this);
    iniTableView();
}


void Table::iniTableView()
{
    model = new QSqlTableModel();
    model->setTable("tables");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView->setModel(model);
}

Table::~Table()
{
    delete ui;
}

void Table::changeEvent(QEvent *e)
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

void Table::on_pushButton_submit_clicked()
{
    model->database().transaction();
    if(model->submitAll())
    {
        model->database().commit();
    }
    else
    {
        model->database().rollback();
        QMessageBox::warning(this, "fail", tr("batabase error:%1").arg(model->lastError().text()));
    }

}

void Table::on_pushButton_delete_clicked()
{
    int currRow = ui->tableView->currentIndex().row();
    model->removeRow(currRow);
    int ok = QMessageBox::warning(this, "delect current row", "are you sure to delect?" , QMessageBox::Yes, QMessageBox::No);
    if(ok ==  QMessageBox::Yes)
    {
       model->submitAll();
    }
    else
    {
        model->revertAll();
    }
}

void Table::on_pushButton_add_clicked()
{
    int rownum = model->rowCount();
    model->insertRow(rownum);
}

void Table::on_pushButton_asc_clicked()
{
    model->setSort(0, Qt::AscendingOrder);
    model->select();
}


void Table::on_pushButton_des_clicked()
{
    model->setSort(0, Qt::DescendingOrder);
    model->select();

}
void Table::on_pushButton_check_clicked()
{
    QString tableid = ui->lineEdit->text();
    model->setFilter(tr("ID = '%1'").arg(tableid));
    model->select();
}


void Table::on_pushButton_undo_clicked()
{
    model->revertAll();
}

void Table::on_pushButton_back_clicked()
{
    model->setTable("table1");
    model->select();
}

void Table::on_pushButton_back_2_clicked()
{
    close();
}
