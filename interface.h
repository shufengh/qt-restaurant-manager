#ifndef INTERFACE_H
#define INTERFACE_H
#include"QGraphicsView"
#include"QGraphicsScene"
#include"QGraphicsItem"
#include <QGraphicsItem>
#include "iconitem.h"
#include "menuinfo.h"
#include "tableinfo.h"
#include "tablemng.h"
#include "userMng/table.h"
#include "userMng/waiter.h"
class interface: public QGraphicsView
{
    Q_OBJECT
public:
    interface(QWidget *parent = 0,int ut=0);
    void init();
    void addItems();//增加iconitem
    void menuInfo();
    void tableInfo(int);
    void setCliPos(int);
    void openTablesMng();
    void openWaitersMng();
    void justDateShow();
    int getCliPos();
    TableMng * getTableMngCls();
protected:
    void mouseDoubleClickEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
private:
    QWidget *parent;
    QGraphicsScene *scene;
    QStringList icon_name;

    iconitem *image;   //图标显示
    MenuInfo *menuinfo;   //餐厅菜品管理
    TableInfo *pTableInfo; // 显示所有餐桌

    TableMng *tbMng;  //管理餐桌

    int cliPos;
    int userType;
};
#endif // INTERFACE_H
