#include "ppal.h"

ppal::ppal()
{

}

QRectF ppal::boundingRect() const
{
    return QRectF(40,270,25,25);
}

void ppal::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkBlue);
    painter->drawEllipse(boundingRect());
    //QPixmap pixmap;
    //pixmap.load(":/Imagenes/pacman.png");
    //painter->drawPixmap(boundingRect(),pixmap,pixmap.rect());
}


void ppal::aceleracion()
{
    ax += 0;
    ay = GRAV;
}

void ppal::velocidades()
// calcula las aceleraciones
{
    vx = vx + (ax*DT);
    vy = vy + (ay*DT);
}

float ppal::posiciony(float tiempo)
{
     y = y + (vy * tiempo) + (0.5 * ay * pow(tiempo,2));
     return y;
}

float ppal::posicionx()
// calcula y Actualiza las posiciones
{
    x = x + (vx * DT) + (0.5 * ax * pow(DT,2));
    return x;

}

