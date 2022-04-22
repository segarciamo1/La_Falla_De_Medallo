#include "ppal.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <proyectil.h>
#include "enemigo.h"
#include "platform.h"
#include "mainwindow.h"
#include "capucho.h"
#include "bonus.h"

ppal::ppal(QGraphicsItem *parent):
    QGraphicsPixmapItem(parent)
{

    posx=100;
    setPixmap(QPixmap(":/Personajes/Terminadas/PersonajePrincipal.png"));
    salto=false;
    setFlag(QGraphicsItem::ItemIsFocusable);
    timerY= new QTimer(this);
    connect(timerY,SIGNAL(timeout()), this, SLOT(movy()));
    connect(timerY,SIGNAL(timeout()), this, SLOT(damage()));


}



void ppal::posicion()
{
    setPos(posx,posy);
}

void ppal::posicion(int newX, int newY)
{
    setPos(newX,newY);
}

void ppal::start()
{
    timerY->start(20);
}

void ppal::stop()
{
    vy=0;
    timerY->stop();
}

void ppal::sumaPuntuacion(int puntbonus, int puntmuertos)
{
    puntuacion+=puntbonus+puntmuertos;
}



void ppal::movy()
{
    setFocus();
    vy=vy+((-GRAV)*DT);
    posy +=-vy*DT+(0.5*DT*DT*GRAV);
    if(posy>=290){


        posicion(posx,290);
        posy=290;

    }
    else if(sobre==true){
        posicion(posx,posy);
    }
    else{
        posicion();
    }
    QList<QGraphicsItem *> list = collidingItems() ;
    if (list.size()==0){
        salto=false;
        sobre=false;
    }



    //qDebug() << "la posicion es" << posy;


}

void ppal::damage()
{
    QList <QGraphicsItem *> colliding_items= collidingItems();
    for(int i=0,n=collidingItems().size();i<n;++i){
        if(typeid (*(colliding_items[i]))!=typeid (platform) and typeid (*(colliding_items[i]))!=typeid (proyectil)){
            vidas-=1;
            qDebug() << "las vidas son" << vidas;
        }
    }
}

void ppal::score()
{

}

int ppal::getPuntuacion() const
{
    return puntuacion;
}

void ppal::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}

int ppal::getVidas() const
{
    return vidas;
}

void ppal::setVidas(int newVidas)
{
    vidas = newVidas;
}

float ppal::getVx() const
{
    return vx;
}

void ppal::setVx(float newVx)
{
    vx = newVx;
}

bool ppal::getSalto() const
{
    return salto;
}

void ppal::setSalto(bool newSalto)
{
    salto = newSalto;
}

int ppal::getTamanoY() const
{
    return tamanoY;
}

int ppal::getTamanoX() const
{
    return tamanoX;
}

bool ppal::getSobre() const
{
    return sobre;
}

void ppal::setSobre(bool newSobre)
{
    sobre = newSobre;
}

float ppal::getVy() const
{
    return vy;
}

void ppal::setVy(float newVy)
{
    vy = newVy;
}

float ppal::getPosy() const
{
    return posy;
}

void ppal::setPosy(float newPosy)
{
    posy = newPosy;
}

float ppal::getPosx() const
{
    return posx;
}

void ppal::setPosx(float newPosx)
{
    posx = newPosx;
}

