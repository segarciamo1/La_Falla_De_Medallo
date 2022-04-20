#include "ppal.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <proyectil.h>
#include "enemigo.h"



ppal::ppal(QGraphicsItem *parent)

{

    salto=false;
    setFlag(QGraphicsItem::ItemIsFocusable);
    timerY= new QTimer(this);
    connect(timerY,SIGNAL(timeout()), this, SLOT(movy()));

}

void ppal::keyPressEvent(QKeyEvent *ev)
{

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

void ppal::spawn()
{
    static int conta=0;
    if(conta==50){
        enemigo *ene= new enemigo();
        scene()->addItem(ene);
        conta=0;
    }
    conta++;


}
void ppal::movy()
{
    setFocus();
    vy=vy+((-GRAV)*DT);
    posy +=-vy*DT+(0.5*DT*DT*GRAV);
    if(posy>=1){
        posicion(posx,1);
        posy=1;
    }
    else{
        posicion();
    }

    qDebug() << "la posicion es" << posy;


}
