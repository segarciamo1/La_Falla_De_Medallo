 #include "enemigo.h"
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>
#include <ppal.h>

enemigo::enemigo(QGraphicsItem *parent)
{
    int random_number= rand()%500;
    setPos(random_number,300);
    setRect(0,0,50,50);
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
    setPos(x()-5,y());
}

