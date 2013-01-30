#include "db.h"

Db::Db()
{
    createConnection();
}
Db::~Db(){
    if(db.isOpen())
        db.close();
    db.removeDatabase(db.connectionName());
    qDebug()<<"db closed";
}
void Db::closeConnection(){
    if(db.isOpen())
        db.close();
    db.removeDatabase(db.connectionName());
    qDebug()<<"db closed";
}
Db * Db::getInstance(){
    if(pSelf == NULL)
        pSelf = new Db();
    return pSelf;
}
bool Db::createConnection(){
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("RestMs.db");
    if(!db.open()){
        QMessageBox::critical(0,"open error","unable to open the connection",QMessageBox::Cancel);
        return false;
    }
    return true;
}
void Db::createTable(){
    QSqlQuery query;
    query.exec("create table admin (name varchar(10) primary key, pwd varchar(10))");
    query.exec("create table waitress (name varchar(10) primary key, pwd varchar(10))");
    query.exec("create table tables(id int primary key,type varchar(10),\
                                    seatNum int, state varchar(10), bookTime varchar(20),\
                                    comment varchar(20) )");
    query.exec("create table dishes(id int primary key, name varchar(20),prize int, comment varchar(20))");

    query.exec("insert into admin values('admin','a')");
    query.exec("insert into admin values('bingo','a')");
    query.exec("insert into waitress values('w001','a')");
    query.exec("insert into waitress values('w002','a')");

    query.exec("insert into tables values(1,'extra big',20, 'empty', '','')");
    query.exec("insert into tables values(2, 'couple', 10,'empty','good')");
    query.exec("insert into tables values(3, 'couple', 8,'empty','good')");

    query.exec("insert into dishes values(1,'Kongpo Chicken', 28,'')");
    query.exec("insert into dishes values(2,'Soft Fried meat', 48,'')");
    query.exec("insert into dishes values(3, 'toofu', '8','delicious')");
    query.exec("insert into dishes values(4, 'jiding', '10','perfect')");
//    while(query.next()){
//            int num;
//            QString name,sex;
//            num = query.value(0).toInt();
//            name = query.value(1).toString();
//            sex = query.value(2).toString();
//            qDebug()<<"the num is"<<num;
//            qDebug()<<"the name is "<<name;
//            qDebug()<<"the sex is"<<sex;
//
//    }
}
