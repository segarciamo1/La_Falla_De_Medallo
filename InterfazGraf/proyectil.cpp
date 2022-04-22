#include "proyectil.h"
#include <QTimer>
#include <QGraphicsScene>
#include "QDebug"
#include <QList>
#include "enemigo.h"
#include "capucho.h"
#include "ppal.h"
#include "mainwindow.h"

proyectil::proyectil()
{
    setPixmap(QPixmap(":/items/Imagenes/Libro.png"));
    QTimer *timer= new QTimer;
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);

}

void proyectil::move()
{

    static int puntuacion2=0;
    QList <QGraphicsItem *> colliding_items= collidingItems();
    for(int i=0,n=collidingItems().size();i<n;++i){
        if(typeid (*(colliding_items[i]))==typeid (enemigo) || typeid (*(colliding_items[i]))==typeid (capucho)){
            delete colliding_items[i];
            delete this;

            return;
        }
    }
    setPos(x()+10,y());
    //qDebug() << "la x esta en "<<x();
    if(pos().x()>limite+getPosicionjug()){
        scene()->removeItem(this);
        delete this;
        qDebug() << "se borro ese hpta";
    }
}

float proyectil::getPosicionjug() const
{
    return posicionjug;
}

void proyectil::setPosicionjug(float newPosicionjug)
{
    posicionjug = newPosicionjug;
}

int proyectil::getPuntuacion() const
{
    return puntuacion;
}

void proyectil::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}

bool proyectil::getSumaMuertos() const
{
    return sumaMuertos;
}

void proyectil::setSumaMuertos(bool newSumaMuertos)
{
    sumaMuertos = newSumaMuertos;
}
