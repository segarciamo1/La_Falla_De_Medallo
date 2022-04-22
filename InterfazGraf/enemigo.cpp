 #include "enemigo.h"
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>
#include <ppal.h>
#include <math.h>
#include <proyectil.h>
#include <QtMath>


enemigo::enemigo(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/personajes/Imagenes/Aves.png"));
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
    static int cont=0,contador=0;
    posx=100+100*qCos(cont);
    posy=100+100*qSin(cont);
    cont += 5.0f;
    //qDeg()<<"x: "<<posx<<", y: "<<posy;
    posicion();
    QList<QGraphicsItem *> list = collidingItems();
    foreach(QGraphicsItem * i , list)
    {
        proyectil * item= dynamic_cast<proyectil *>(i);
        if (item)
        {
            contador+=10;
            puntuacion=contador;
//            qDebug() << "la puntuacion de enemigo es"<<puntuacion;
            return;

        }

    }


    if (Fotograma1 == 1) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves.png"));
    }
    else if (Fotograma1 == 2) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves2.png"));
    }
    else if (Fotograma1 == 3) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves3.png"));
    }
    else if (Fotograma1 == 4) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves4.png"));
    }
    else if (Fotograma1 == 5) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves5.png"));
    }
    else if (Fotograma1 == 6) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves6.png"));
    }
    else if (Fotograma1 == 7) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves7.png"));
    }
    else if (Fotograma1 == 8) {
        setPixmap(QPixmap(":/personajes/Imagenes/Aves8.png"));
    }
    if(Fotograma1 == 8){
        Fotograma1=0;
    }

    Fotograma1 ++;
}

int enemigo::getPuntuacion() const
{
    return puntuacion;
}

void enemigo::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}
