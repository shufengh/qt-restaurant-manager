/*
 *  Just feel free and Happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#include "dishinfo.h"

DishInfo::DishInfo(QString dh, int p, int num)
{
    this->dishName = dh;
    this->price = p;
    this->num = num;
}
QString DishInfo::getDishName(){
    return this->dishName;
}
int DishInfo::getPrice(){
    return this->price;
}
int DishInfo::getNum(){
    return this->num;
}
void DishInfo::setNum(int n){
    this->num += n;
}
