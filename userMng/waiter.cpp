#include "waiter.h"
#include "ui_waiter.h"
#include <QMessageBox>
#include <QSqlError>
#include <QVariant>
#include <QSqlRecord>
#include <QSqlQuery>

Waiter::Waiter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Waiter)
{
    ui->setupUi(this);
    iniTableView();
}

void Waiter::iniTableView()
{
    model = new QSqlTableModel();
    model->setTable("waitress");
 //   model->setObjectName("waiter");
 //   model->set
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView->setModel(model);
}

Waiter::~Waiter()
{
    delete ui;
}

void Waiter::changeEvent(QEvent *e)
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

void Waiter::on_pushButton_submit_clicked()
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

void Waiter::on_pushButton_add_clicked()
{
    int rownum = model->rowCount();
    model->insertRow(rownum);
}

void Waiter::on_pushButton_delete_clicked()
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

void Waiter::on_pushButton_asc_clicked()
{
    model->setSort(0, Qt::AscendingOrder);
    model->select();
}

void Waiter::on_pushButton_desc_clicked()
{
    model->setSort(0, Qt::DescendingOrder);
    model->select();
}

void Waiter::on_pushButton_undo_clicked()
{
    model->revertAll();
}

void Waiter::on_pushButton_back_clicked()
{
    model->setTable("waiter");
    model->select();
}

void Waiter::on_pushButton_check_clicked()
{
    QString tableid = ui->lineEdit->text();
    model->setFilter(tr("ID = '%1'").arg(tableid));
    model->select();
}

void Waiter::on_pushButton_check_2_clicked()
{
    close();
}
