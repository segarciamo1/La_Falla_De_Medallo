#include "capucho.h"
#include "proyectil.h"
#include <QtMath>

capucho::capucho()
{
    setPixmap(QPixmap(":/personajes/Imagenes/Capucho.png"));
    static int conta =1;
    posicion(400*conta,400);
    QTimer *timer= new QTimer;
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
    conta++;
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
    posicion(pos_x,this->posy);
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
