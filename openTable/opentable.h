/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#ifndef OPENTABLE_H
#define OPENTABLE_H

#include <QDialog>
#include "tablemng.h"
namespace Ui {
    class OpenTable;
}

class OpenTable : public QDialog {
    Q_OBJECT
public:
    OpenTable(QWidget *parent = 0);
    OpenTable(QWidget *parent = 0,QString btName = 0, TableMng *tbMng = 0);
    ~OpenTable();
    void init();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::OpenTable *ui;
    QString btName;
    TableMng *tbMng;
private slots:
    void on_pushButton_exit_clicked();
    void on_pushButton_openTbl_clicked();
    void on_pushButton_gst_cancel_clicked();
    void on_pushButton_gst_comes_clicked();
};

#endif // OPENTABLE_H
