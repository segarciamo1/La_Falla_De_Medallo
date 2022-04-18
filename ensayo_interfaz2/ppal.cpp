#include "ppal.h"
#include <QGraphicsScene>
#include <QKeyEvent>


QRectF ppal::boundingRect() const
{
    return QRectF(-10,-10,25,25);
}

void ppal::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //painter->setBrush(Qt::darkBlue);
    //painter->drawEllipse(boundingRect());
    QPixmap pixmap;
    pixmap.load(":/Imagenes/pacman.png");
    painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

void ppal::mover()
{

}

