#ifndef MENUINFO_H
#define MENUINFO_H

#include <QWidget>
#include "db.h"
#include <QSqlTableModel>
#include <QSqlError>
#include "ui_menuinfo.h"
namespace Ui {
    class Widget;
}

class MenuInfo : public QWidget {
    Q_OBJECT
public:
    MenuInfo(QWidget *parent = 0);

    ~MenuInfo();
    void initTableModel();
protected:
    void changeEvent(QEvent *e);

private:
    Ui::Widget *ui;
    Db *dbtest;
    QSqlTableModel *tableModel;

private slots:
    void on_pushButton_9_exit_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
};

#endif // MENUINFO_H
