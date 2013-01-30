#ifndef ICONITEM_H
#define ICONITEM_H
#include"QGraphicsPixmapItem"
#include"QTimeLine"

class iconitem:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    iconitem(int id,const QPixmap &pixmap,QGraphicsItem *parent=0,
             QGraphicsScene *scene=0);
    void adjust();
    int id();
    //void dropshadow();

protected:
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

private slots:
    void setFrame(int frame);
private:
    QTimeLine timeLine;
    int recordId;
};


#endif // ICONITEM_H

