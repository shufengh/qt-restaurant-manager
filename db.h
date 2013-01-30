#ifndef DB_H
#define DB_H
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QMessageBox>
#include<QDebug>
#include<QVariant>
class Db
{
public:

    ~Db();
    bool createConnection();
    void createTable();
    void closeConnection();
    static Db * getInstance();
private:
    Db();
    QSqlDatabase db;
    static Db *pSelf;
};

#endif // DB_H
