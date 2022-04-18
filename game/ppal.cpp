#include "ppal.h"

ppal::ppal()
{

}

QRectF ppal::boundingRect() const
{
    return QRectF(40,40,25,25);
}

void ppal::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkBlue);
    painter->drawEllipse(boundingRect());
    //QPixmap pixmap;
    //pixmap.load(":/Imagenes/pacman.png");
    //painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}

void ppal::mover()
{
    setPos(x(),y());
}
