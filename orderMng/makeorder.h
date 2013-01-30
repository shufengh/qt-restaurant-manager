/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#ifndef MAKEORDER_H
#define MAKEORDER_H

#include <QDialog>
#include "costrec.h"
#include "db.h"
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQuery>
namespace Ui {
    class MakeOrder;
}

class MakeOrder : public QDialog {
    Q_OBJECT
public:
    MakeOrder(QWidget *parent = 0,CostRec *pCR = 0);
    ~MakeOrder();
    void initTableModel();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::MakeOrder *ui;
    CostRec *pCR;
    Db *db;
    QSqlTableModel *tableModel;
    QString name;
    int price;
private slots:
    void on_pushButton_makeOrder_clicked();
    void on_pushButton_numDec_clicked();
    void on_pushButton_numAdd_clicked();
    void on_tableView_clicked(QModelIndex index);
};

#endif // MAKEORDER_H
