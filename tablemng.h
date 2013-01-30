/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#ifndef TABLEMNG_H
#define TABLEMNG_H
#include <QWidget>
#include <QMap>
#include <QTime>
#include "costrec.h"
#include <QMessageBox>
class TableMng
{
public:
    TableMng();
    int addUsingTable(QString, CostRec *);
    int removeUsingTable(QString);
    CostRec *getCostRec(QString name);
    int addBookingTable(QString, QTime);
    int removeBookingTable(QString);
    QTime getBkTable(QString);
    bool isInUsingTable(QString);
    bool isInBookingTable(QString);
    bool isUsingTableEmpty();
    bool isBookingTableEmpty();
private:
    QMap<QString,CostRec *> UsingMng;
    QMap<QString,QTime> BookingMng;
};

#endif // TABLEMNG_H
