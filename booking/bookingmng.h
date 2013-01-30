/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#ifndef BOOKINGMNG_H
#define BOOKINGMNG_H

#include <QDialog>
#include <QString>
#include <QTime>
#include "tablemng.h"
namespace Ui {
    class BookingMng;
}

class BookingMng : public QDialog {
    Q_OBJECT
public:
    BookingMng(QWidget *parent = 0);
    BookingMng(QWidget *parent = 0,QString btName = 0, TableMng *tbMng = 0);
    ~BookingMng();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::BookingMng *ui;
    QString btName;
    TableMng *tbMng;
private slots:

private slots:
    void on_pushButton_cancel_clicked();
    void on_pushButton_min_dec_clicked();
    void on_pushButton_min_add_clicked();
    void on_pushButton_hour_dec_2_clicked();
    void on_pushButton_hour_add_clicked();
    void on_pushButton_confirm_clicked();
};

#endif // BOOKINGMNG_H
