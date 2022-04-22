 #include "enemigo.h"
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>
#include <ppal.h>
#include <math.h>

enemigo::enemigo(QGraphicsItem *parent)
{


    setRect(400,0,50,50);
    posicion(400,300);
    QTimer *timer= new QTimer;
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);

}

void enemigo::posicion()
{
     setPos(posx,posy);
}

void enemigo::posicion(int newX, int newY)
{
     setPos(newX,newY);
}

void enemigo::move()
{
    angulo=angulo+w*DT;
    posx=posx+rad*cos(angulo);
    posy=posy+rad*sin(angulo);
    qDebug()<<"x: "<<posx<<", y: "<<posy;
    posicion();
}
