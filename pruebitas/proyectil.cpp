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
    setPixmap(QPixmap(":/Items/Terminadas/Libro.png"));
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
    if(pos().x()>450){
        scene()->removeItem(this);
        delete this;

    }

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
