/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#ifndef ORDERMNG_H
#define ORDERMNG_H

#include <QDialog>
#include "tablemng.h"
#include "makeorder.h"
#include <QStringBuilder>
#include <QMessageBox>
namespace Ui {
    class OrderMng;
}

class OrderMng : public QDialog {
    Q_OBJECT
public:
    OrderMng(QWidget *parent = 0,QString btName = 0, TableMng *tbMng = 0);
    ~OrderMng();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::OrderMng *ui;
    QString btName;
    TableMng *tbMng;
    CostRec *pCR;
private slots:
    void on_pushButton_pay_clicked();
    void on_pushButton_order_clicked();
};

#endif // ORDERMNG_H
