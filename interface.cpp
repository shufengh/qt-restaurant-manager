#include "interface.h"

#include"QGraphicsPixmapItem"
#include"QMouseEvent"
#include"QGraphicsDropShadowEffect"
#include "calender.h"
interface::interface(QWidget *parent ,int ut)
    :QGraphicsView(parent)
{
    this->parent = parent;
    this->userType = ut;
    init();
    this->tbMng = new TableMng();
}
void interface::init(){
    //实例化GraphicsScene
    this->scene=new QGraphicsScene(this);
    scene->setSceneRect(0,0,636,476);
    //setGeometry(0,0,640,480);
    this->setGeometry(parent->pos().x(),parent->pos().y(),parent->pos().rx(),parent->pos().ry());
    setMinimumSize(640, 480);
   // setMaximumSize(640, 480);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setScene(scene);
    //在场景中加入item
    this->addItems();
    //在mainInterface-GraphicsView中加入scene。
    this->setScene(this->scene);
}
void interface::addItems()
{
    //增加背景图片item
    QGraphicsPixmapItem *backimage=this->scene->addPixmap(QPixmap(":/images/login.png"));
    backimage->setPos(-2,-2);
    //初始化图片文本
    QString str="Table Info#Open Table#Booking#Menu Mng#Table Mng#User Mng#Calendar#Exit";
    this->icon_name=str.split("#");
    //增加向导图标iconitem
    int imageCount=icon_name.count();
    int imageOffset =150;
    int leftMargin = 45;
    int topMargin =50;

    QFont font("Arial", 15, QFont::Bold);
    for (int i = 0; i < imageCount; ++i) {
        QGraphicsTextItem *label = new QGraphicsTextItem;

        int columnOffset = -((i / 4) * 20);
        int x = ((i % 4) * imageOffset) + leftMargin;
        int y = ((i / 4) * imageOffset) + topMargin + columnOffset;

        image = new iconitem(i,QPixmap(tr(":/images/%1.png").arg(i+1)));
        image ->setPos(x, y);
        scene->addItem(image);
        //设置影子
        QGraphicsDropShadowEffect *DropShadow = new QGraphicsDropShadowEffect(this);
        DropShadow->setOffset(10,10);
        image->setGraphicsEffect(DropShadow);
        //设置透明度
        QGraphicsOpacityEffect *opacity = new QGraphicsOpacityEffect(this);
        opacity->setOpacity(0.8);
        image ->setGraphicsEffect(opacity);

        label = scene->addText(icon_name[i],font);
        QPointF labelOffset(((70 - label->boundingRect().width()) / 2), 85);//(51.2 - label->boundingRect().width()) / 2)
        label ->setPos(QPointF(x, y) + labelOffset);
      //  label ->setDefaultTextColor(QColor(255,255,255));
    }
}
//双击鼠标左键，结束应用程序
void interface::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        this->close();
    }
}

void interface::mouseReleaseEvent(QMouseEvent *event){
    if(QGraphicsItem *item = itemAt(event->pos())){
        if(iconitem* image = qgraphicsitem_cast<iconitem *>(item)){
            switch(image->id()){
            case 0:
                {
                    this->setCliPos(image->id());
                    this->tableInfo(image->id());
                    break;
                }
            case 1:
                {
                    this->setCliPos(image->id());
                    this->tableInfo(image->id());
                    break;
                }
            case 2:
                {
                    this->setCliPos(image->id());
                    this->tableInfo(image->id());
                    break;
                }
            case 3:
                {
                    if(this->userType != 0){
                        QMessageBox::critical(this,"",tr("权限不够"));
                        break;
                    }
                    this->setCliPos(image->id());
                    this->menuInfo();
                    break;
                }
            case 4:
                {
                    if(this->userType != 0){
                        QMessageBox::critical(this,"",tr("权限不够"));
                        break;
                    }
                    this->setCliPos(image->id());
                    this->openTablesMng();
                    break;
                }
            case 5:
                {
                    if(this->userType != 0){
                        QMessageBox::critical(this,"",tr("权限不够"));
                        break;
                    }
                    this->openWaitersMng();
                    break;
                }
            case 6:
                {
                    this->justDateShow();
                    break;
                }
            case 7:
                {
                    close();
                    break;
                }
            default:
                {
                    break;
                }
            }

        }

    }

}
void interface::menuInfo(){
    //实例化tablemodel
    this->menuinfo = new MenuInfo(this);
    this->menuinfo->setGeometry(40,40,560,300);
    this->menuinfo->show();
}
void interface::tableInfo(int n){
    this->pTableInfo = new TableInfo(this,n,this->tbMng);
    this->pTableInfo->setGeometry(30,50,580,348);
    this->pTableInfo->show();

}
void interface::setCliPos(int n){
    this->cliPos = n;
}
int interface::getCliPos(){
    return this->cliPos;
}
TableMng * interface::getTableMngCls(){
    return tbMng;
}
void interface::openTablesMng(){
    Table *table = new Table(this);
    table->setGeometry(40,40,560,400);
    table->show();
}
void interface::openWaitersMng(){
    Waiter *waiter = new Waiter(this);
    waiter->setGeometry(40,40,498,403);
    waiter->show();
}
void interface::justDateShow(){
    Calender *cld = new Calender(this);
    cld->setModal(true);
    cld->show();
}
