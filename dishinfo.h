/*
 *  Just feel free and Happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#ifndef DISHINFO_H
#define DISHINFO_H
#include <QString>

//����ÿһ����˼�¼
class DishInfo {
private:
    QString dishName;
    int     price;
    int     num;
public:
    DishInfo(QString dh, int p, int num);
    QString getDishName();
    int getPrice();
    int getNum();
    void setNum(int);
};

#endif // DISHINFO_H
