#include "pianorollitem.h"
#include <QDebug>


PianoRollItem::PianoRollItem()
{
brush = (QColor(102, 179, 255));
setCacheMode(QGraphicsItem::DeviceCoordinateCache);
}



QRectF PianoRollItem::boundingRect() const
{

          return QRectF(0,0,width,keyHeight);
}
void PianoRollItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
{
    QRectF rect = boundingRect();
     //const qreal lod = option->levelOfDetailFromTransform(painter->worldTransform());
    QPen pen(Qt::black,1);
    painter->setPen(pen);
    painter->fillRect(rect,brush);
    painter->drawRect(rect);

}

void PianoRollItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{

    QGraphicsItem::mouseDoubleClickEvent(event);

}

void PianoRollItem::setBoundingRect(int _width){

      prepareGeometryChange();
      this->width = _width;

}
