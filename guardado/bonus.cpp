#include "bonus.h"
#include "ppal.h"
#include "score.h"
#include "mainwindow.h"


bonus::bonus(float x,float y)

{
    posx=x;
    posy=y;
    setPixmap(QPixmap(":/items/Imagenes/Pizza.png"));
    posicion();
    QTimer *timer1= new QTimer;
    connect(timer1,SIGNAL(timeout()), this, SLOT(move()));
    timer1->start(50);
    score1= new score();

}

bonus::bonus()
{
     setPixmap(QPixmap(":/items/Imagenes/Pizza.png"));
}

void bonus::posicion()
{
    setPos(posx,posy);
}

void bonus::posicion(int newX, int newY)
{
    setPos(newX,newY);
}

float bonus::getPosx() const
{
    return posx;
}

void bonus::setPosx(float newPosx)
{
    posx = newPosx;
}

float bonus::getPosy() const
{
    return posy;
}

void bonus::setPosy(float newPosy)
{
    posy = newPosy;
}

void bonus::move()
{
    static int incpuntaje=0;
    QList <QGraphicsItem *> colliding_items= collidingItems();
    for(int i=0,n=collidingItems().size();i<n;++i){
        if(typeid (*(colliding_items[i]))==typeid (ppal)){
            delete this;
            score1->increase();
            incpuntaje+=10;
            puntuacion=incpuntaje;
            //qDebug() << "la puntuacion  de bonus es"<<puntuacion;
            return;
        }
    }
}

int bonus::getPuntuacion() const
{
    return puntuacion;
}

void bonus::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}

