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
    posicion();
    QTimer *timer= new QTimer;
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);


}

enemigo::enemigo(float x, float y)
{
    setPixmap(QPixmap(":/Personajes/Terminadas/Aves.png"));
    posx=x;
    posy=y;
    posicion();
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
    static int cont=0,contador=0;
    /*posx=100+100*qCos(qDegreesToRadians(cont));
    posy=100+100*qSin(qDegreesToRadians(cont));
    cont += 5.0f;
    //qDeg()<<"x: "<<posx<<", y: "<<posy;
    */
    angulo=angulo+w*DT;
    posx=posx+rad*cos(angulo);
    posy=posy+rad*sin(angulo);
    posicion();
    QList<QGraphicsItem *> list = collidingItems();
    foreach(QGraphicsItem * i , list)
    {
        proyectil * item= dynamic_cast<proyectil *>(i);
        if (item)
        {
            contador+=10;
            puntuacion=contador;
            qDebug() << "la puntuacion de enemigo es"<<puntuacion;
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

