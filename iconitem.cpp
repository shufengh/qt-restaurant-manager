#include "iconitem.h"
#include"QGraphicsOpacityEffect"
#include"QGraphicsDropShadowEffect"

iconitem::iconitem(int id,const QPixmap &pixmap,QGraphicsItem *parent,QGraphicsScene *scene)
         :QGraphicsPixmapItem(pixmap,parent,scene)
{
    this->recordId=id;
    this->setAcceptsHoverEvents(true);
    this->timeLine.setDuration(80);
    this->timeLine.setFrameRange(0,40);
    connect(&this->timeLine,SIGNAL(frameChanged(int)),this,SLOT(setFrame(int)));
    this->adjust();
    //this->dropshadow();
}
void iconitem::hoverEnterEvent(QGraphicsSceneHoverEvent * event)
{
    timeLine.setDirection(QTimeLine::Forward);

    if (timeLine.state() == QTimeLine::NotRunning)
        timeLine.start();

}
/*
void iconitem::dropshadow()
{
    QGraphicsDropShadowEffect *DropShadow = new QGraphicsDropShadowEffect(this);
    DropShadow->setOffset(10,10);
    this->setGraphicsEffect(DropShadow);
}
*/
void iconitem::hoverLeaveEvent(QGraphicsSceneHoverEvent * /*event*/)
{
    timeLine.setDirection(QTimeLine::Backward);

    if (timeLine.state() == QTimeLine::NotRunning)
        timeLine.start();

}

void iconitem::setFrame(int frame)
{
    adjust();
    //this->dropshadow();
    QPointF center = boundingRect().center();

    translate(center.x(), center.y());
    scale(1 + frame / 220.0, 1 + frame / 220.0);
    translate(-center.x(), -center.y());
    QGraphicsOpacityEffect *opacity = new QGraphicsOpacityEffect(this);
    opacity->setOpacity((0.8+frame/50));
    ((iconitem*)this)->setGraphicsEffect(opacity);
}

void iconitem::adjust()
{
    QMatrix matrix;
    matrix.scale(90/ boundingRect().width(), 90/ boundingRect().height());
    setMatrix(matrix);
}
int iconitem::id()
{
    return this->recordId;
}
