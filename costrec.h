
#ifndef COSTREC_H
#define COSTREC_H
#include <QString>
#include "dishinfo.h"
#include <QList>
#include <QDebug>
#include <QStringBuilder>
class CostRec
{
private:
    QList<DishInfo * > dishInfos;

public:
    CostRec();
    void addDish(QString dh, int p, int num);
    int sumCost();
    QString printAll();
    int getDishCount(QString dh);
};

#endif // COSTREC_H
