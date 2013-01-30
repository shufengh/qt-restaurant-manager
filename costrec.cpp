#include "costrec.h"

CostRec::CostRec()
{
    this->dishInfos.clear();
}
void CostRec::addDish(QString dh, int p, int num){
    for(QList<DishInfo * >::iterator i = this->dishInfos.begin();
    i!=this->dishInfos.end();++i){
        if(dh == (*i)->getDishName()){
            (*i)->setNum(num);
        }
        if((*i)->getNum()<=0){
            this->dishInfos.removeOne(*i);
        }
    }
   this->dishInfos.append(new DishInfo(dh,p,num));
}
QString CostRec::printAll(){
    int totalCost = 0;
    QString str,temp;
    str.append(QObject::tr("菜名\t\t数量\t价格\n"));
    for(QList<DishInfo * >::iterator i = this->dishInfos.begin(); i!=this->dishInfos.end();++i){
        str.append((*i)->getDishName());
        str.append("\t");
        temp.setNum((*i)->getNum());
        str.append(temp);
        str.append("\t");
        temp.setNum((*i)->getPrice());
        str.append(temp);
        str.append("\n");
        totalCost +=  (*i)->getNum()*(*i)->getPrice();
      //  qDebug()<<(*i)->getNum()<<"  "<<(*i)->getPrice();
    }
    str.append("----------------------------------------------\n");
    str.append(QObject::tr("您本次消费  %1 元 \n").arg(totalCost));
    return str;
}
int CostRec::sumCost(){
    int sum = 0;
    for(QList<DishInfo * >::iterator i = this->dishInfos.begin();
    i != this->dishInfos.end(); ++i){
        sum +=  (*i)->getNum()*(*i)->getPrice();
    }
    return sum;
}
int CostRec::getDishCount(QString dh){
    int nCount = 0;
    for(QList<DishInfo * >::iterator i = this->dishInfos.begin();
    i != this->dishInfos.end(); ++i){
        if((*i)->getDishName() == dh){
            nCount = (*i)->getNum();
            break;
        }
    }
    return nCount;
}
