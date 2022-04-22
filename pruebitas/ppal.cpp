#include "ppal.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <proyectil.h>
#include "enemigo.h"
#include "platform.h"


ppal::ppal(QGraphicsItem *parent)

{

    salto=false;
    setFlag(QGraphicsItem::ItemIsFocusable);
    timerY= new QTimer(this);
    connect(timerY,SIGNAL(timeout()), this, SLOT(movy()));

}

void ppal::keyPressEvent(QKeyEvent *ev)
{
   salto=false;
   if(ev->key()==Qt::Key_A){
        //setPos(pos().x()-vx,pos().y());

        posx=posx-vx;

   }
   else if(ev->key()==Qt::Key_D){
       //setPos(pos().x()+vx,pos().y());

       posx=posx+vx;
   }
   else if(ev->key()==Qt::Key_W){
        vy=40;
        salto=true;
   }
   else if(ev->key()==Qt::Key_Space){
       proyectil * disparo= new proyectil();
       disparo->setPos(this->x(),this->y());
       scene()->addItem(disparo);
   }


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
    if(posy>=1){

        QList <QGraphicsItem *> list= collidingItems();

        if (list.size()==0){
            salto=false;
            sobre=false;
        }
        posicion(posx,1);
        posy=1;

    }
    else{
        QList <QGraphicsItem *> list= collidingItems();

        if (list.size()==0){
            salto=false;
            sobre=false;
        }
        posicion();
    }


    //qDebug() << "la posicion es" << posy;


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
    conta++;
}
