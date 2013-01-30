/*
 *  Just feel free and happy hackin'
 *   __huishufeng@gmail.com__
 *
 */

#include "tablemng.h"

TableMng::TableMng()
{

}
int TableMng::addBookingTable(QString name, QTime dt){
    if(this->BookingMng.contains(name)){
        //QMessageBox::warning(this,"Already booked",tr("当前桌子已被预订"));
        return 1;
    }
    if(this->UsingMng.contains(name)){
        //QMessageBox::warning(this,"In use",tr("当前桌子正在使用中"));
        return 2;
    }
    this->BookingMng.insert(name,dt);
    return 0;
}
int TableMng::removeBookingTable(QString name){
    return this->BookingMng.remove(name);
}
int TableMng::addUsingTable(QString name, CostRec *pCR){
    if(this->BookingMng.contains(name)){
       // QMessageBox::warning(this,"Already booked",tr("当前桌子已被预订"));
        return 1;
    }
    if(this->UsingMng.contains(name)){
        //QMessageBox::warning(this,"In use",tr("当前桌子正在使用中"));
        return 2;
    }
    this->UsingMng.insert(name,pCR);
    return 0;
//    for(QMap<QString, CostRec *>::iterator i = this->UsingMng.begin();
//        i != this->UsingMng.end(); ++i){
//    }
}
int TableMng::removeUsingTable(QString name){
    return this->UsingMng.remove(name);
}
bool TableMng::isInBookingTable(QString name){
    return this->BookingMng.contains(name);
}
bool TableMng::isInUsingTable(QString name){
    return this->UsingMng.contains(name);
}
CostRec * TableMng::getCostRec(QString name){
    return this->UsingMng.value(name);
}
QTime TableMng::getBkTable(QString name){
    return this->BookingMng.value(name);
}
bool TableMng::isBookingTableEmpty(){
    return this->BookingMng.isEmpty();
}
bool TableMng::isUsingTableEmpty(){
    return this->UsingMng.isEmpty();
}
