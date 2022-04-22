#include "capucho.h"
#include "proyectil.h"
#include <QtMath>

capucho::capucho(float posi)
{
    setPixmap(QPixmap(":/personajes/Imagenes/Capucho.png"));
    QTimer *timer= new QTimer;
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
    movimiento=posi;
}
capucho::capucho(float x, float y)
{

     setPixmap(QPixmap(":/Personajes/Terminadas/Capucho.png"));
     posx=x;
     posy=y;
     posicion();
     QTimer *timer= new QTimer;
     connect(timer,SIGNAL(timeout()), this, SLOT(move()));
     timer->start(50);

}

void capucho::posicion()
{
    setPos(posx,posy);
}

void capucho::posicion(int newX, int newY)
{
    setPos(newX,newY);
}

void capucho::move()
{
    static float cont=0,contador=0;
    float pos_x=100+100*qCos(qDegreesToRadians(cont));
    cont += 5.0f;
    pos_x=pos_x+movimiento;
    posicion(pos_x,293);
    QList<QGraphicsItem *> list = collidingItems();
    foreach(QGraphicsItem * i , list)
    {
        proyectil * item= dynamic_cast<proyectil *>(i);
        if (item)
        {
            contador+=10;
            puntuacion=contador;
//            qDebug() << "la puntuacion de capuchos es"<<puntuacion;
            return;

        }

    }

}

int capucho::getPuntuacion() const
{
    return puntuacion;
}

void capucho::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}
