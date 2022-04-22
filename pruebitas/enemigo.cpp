 #include "enemigo.h"
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>
#include <ppal.h>
#include <math.h>
#include <proyectil.h>

enemigo::enemigo(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/Personajes/Terminadas/Aves.png"));
    static int conta =1;
    posicion(400*conta,400);
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
    static int cont=0;
     posx=100+100*qCos(qDegreesToRadians(cont));
    posy=100+100*qSin(qDegreesToRadians(cont));
    cont += 5.0f;
    //qDeg()<<"x: "<<posx<<", y: "<<posy;
    posicion();
    QList <QGraphicsItem *> colliding_items= collidingItems();
    for(int i=0,n=collidingItems().size();i<n;++i){
        if(typeid (*(colliding_items[i]))==typeid (proyectil)){
            cont+=10;
            puntuacion=cont;

            return;
        }
    }


}

int enemigo::getPuntuacion() const
{
    return puntuacion;
}

void enemigo::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}

