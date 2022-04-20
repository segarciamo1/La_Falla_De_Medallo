#include "ppal.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <proyectil.h>
#include "enemigo.h"



ppal::ppal(QGraphicsItem *parent)

{

    salto=false;
    setFlag(QGraphicsItem::ItemIsFocusable);

}

void ppal::keyPressEvent(QKeyEvent *ev)
{
   /*switch (ev->key()) {
    case   Qt::Key_A :    {
        setPos(x()-5,y());
        break;

    }
    case Qt::Key_W :

    {
        //actualizar();
        setPos(x(),y()-5);
        break;
    }
    case Qt::Key_S:
    {

        int condicionsuelo=pos().y()+5>=265?pos().y():pos().y()+5;
        setPos(pos().x(),condicionsuelo);
        qDebug() << "la posicion es" <<pos().y();
        break;
    }
    case Qt::Key_D:
    {
       setPos(x()+5,y());

       qDebug() << "la posicion x es" << pos().x();

        break;
    }

}
*/
   if(ev->key()==Qt::Key_A){
       posx=posx-vx;
       posicion();

   }
   else if(ev->key()==Qt::Key_D){
       posx=posx+vx;
       posicion();
   }
   else if(ev->key()==Qt::Key_W){
        vy=20;
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
    vy =vy+((-GRAV)*DT);
    posy +=-vy*DT+(0.5*DT*DT*GRAV);
    posicion();

}
