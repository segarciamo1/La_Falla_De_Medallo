#ifndef PPAL_H
#define PPAL_H

#include <QGraphicsItem>
#include <QPainter>

class ppal : public QGraphicsItem
{
public:
    ppal();
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mover();
};

#endif // PPAL_H
