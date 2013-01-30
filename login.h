#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QDebug>
#include "db.h"
#include "iconitem.h"
#include "interface.h"
namespace Ui {
    class Login;
}

class Login : public QWidget {
    Q_OBJECT
public:
    Login(QWidget *parent = 0);

    ~Login();

protected:
    void changeEvent(QEvent *e);
    int getUserType();
private:
    Ui::Login *ui;
    Db *db;
    interface *iface;
    iconitem *item;
    int userType;
private slots:
    void on_pushButton_exit_clicked();
    void on_pushButtonlogin_clicked();
};

#endif // LOGIN_H
