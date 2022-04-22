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


void ppal::movy()
{
    setFocus();
    vy=vy+((-GRAV)*DT);
    posy +=-vy*DT+(0.5*DT*DT*GRAV);
    if(posy>=290){


        posicion(posx,290);
        posy=290;

    }
    else{
        posicion();
    }


    //qDebug() << "la posicion es" << posy;


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
void ppal::spawn()
{
    static int conta=0;
    if(conta==0){
        enemigo *ene= new enemigo();
        scene()->addItem(ene);

    }
    if(conta==1){
        capucho *capu= new capucho();
        scene()->addItem(capu);

    }

    conta++;
}
