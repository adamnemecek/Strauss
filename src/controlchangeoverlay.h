#ifndef CONTROLCHANGEOVERLAY_H
#define CONTROLCHANGEOVERLAY_H

class ControlChangeItem;
class CollisionItem;

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QWidget>
#include <QPainter>
#include <QApplication>
#include <QDebug>
#include <QMouseEvent>
#include <QGraphicsItem>
#include <QList>
#include <QKeyEvent>
#include <QRubberBand>
#include <QEvent>
#include <QGraphicsSceneEvent>
class ControlChangeOverlay  : public QGraphicsView{
    Q_OBJECT

    struct ccDataStruct
    {
        ControlChangeItem *leftItem;
        ControlChangeItem *rightItem;
        std::vector<QGraphicsLineItem*> lineItems;
         QMap<int,QGraphicsItem*> activeItems;
    };

public:
    ControlChangeOverlay(QWidget *parent = 0);
    void createLineConnector();
    void removeSelectedItems();
    void removeCollidingItems(QList<QGraphicsItem*> &items);
    void setCurrentOverlay(int index);
    bool eventFilter(QObject *target, QEvent *event);
    QGraphicsScene * scene = nullptr;
    QMap<int,QGraphicsItem*> activeItems;
    bool canDraw = false;
protected:
    void showEvent(QShowEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);

private:
    ControlChangeItem *leftItem;
    ControlChangeItem *rightItem;
    CollisionItem *collisionItem;
    bool firstShow = true;
    QPoint origin;
    std::vector<QGraphicsLineItem*> lineItems;
    QRubberBand *rubberBand;
    QGraphicsRectItem * rectItem;
};

#endif // CONTROLCHANGEOVERLAY_H
