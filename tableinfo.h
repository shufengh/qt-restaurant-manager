#ifndef TABLEINFO_H
#define TABLEINFO_H

#include <QWidget>
#include "booking/bookingmng.h"
#include "tablemng.h"
#include "openTable/opentable.h"
#include "orderMng/ordermng.h"
namespace Ui {
    class TableInfo;
}

class TableInfo : public QWidget {
    Q_OBJECT
public:
    TableInfo(QWidget *parent = 0);
    TableInfo(QWidget *parent,int cliPos, TableMng *tbMng = 0);
    ~TableInfo();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::TableInfo *ui;
    int cliPos;
    TableMng *tbMng;
private slots:
    void on_pushButton_13_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_exit_clicked();
    void on_pushButton_clicked();
    void on_pushButton_14_clicked();
};

#endif // TABLEINFO_H
