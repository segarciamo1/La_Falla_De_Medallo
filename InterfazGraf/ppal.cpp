#include "ppal.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <proyectil.h>
#include "enemigo.h"
#include "platform.h"
#include "capucho.h"
#include "bonus.h"

ppal::ppal(QGraphicsItem *parent):
    QGraphicsPixmapItem(parent)
{

    posx=100;
    setPixmap(QPixmap(":/personajes/Imagenes/PersonajePrincipal.png"));
    salto=false;
    setFlag(QGraphicsItem::ItemIsFocusable);
    timerY= new QTimer(this);
    timerVidas = new QTimer(this);
    connect(timerY,SIGNAL(timeout()), this, SLOT(movy()));
    connect(timerY,SIGNAL(timeout()), this, SLOT(damage()));
    timerVidas->start(1500);
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
    if(posy<=1){

        posicion(posx,1);
        posy=1;
        vy=-3;
//        qDebug() << "la posicion es" << posy;
    }
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

int ppal::getPuntuacion() const
{
    return puntuacion;
}

void ppal::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}

void ppal::Animacion_Derecha()
{
    if (FotogramaDer == 1) {
        setPixmap(QPixmap(":/personajes/Imagenes/PersonajePrincipal.png"));
    }
    else if (FotogramaDer == 2) {
        setPixmap(QPixmap(":/personajes/Imagenes/PersonajePrincipal_Derecha2.png"));
    }
    if(FotogramaDer == 2){
        FotogramaDer=0;
    }
    FotogramaDer ++;
}

void ppal::Animacion_Izquierda()
{
    if (FotogramaIzq == 1) {
        setPixmap(QPixmap(":/personajes/Imagenes/PersonajePrincipal_Izquieda1.png"));
    }
    else if (FotogramaIzq == 2) {
        setPixmap(QPixmap(":/personajes/Imagenes/PersonajePrincipal_Izquieda2.png"));
    }
    if(FotogramaIzq == 2){
        FotogramaIzq=0;
    }
    FotogramaIzq ++;
}

void ppal::Animacion_Salto()
{
    setPixmap(QPixmap(":/personajes/Imagenes/PersonajePrincipal_DerechaSalto.png"));
}



void ppal::damage()
{
    QList <QGraphicsItem *> colliding_items= collidingItems();
    for(int i=0,n=collidingItems().size();i<n;++i){
        if(typeid (*(colliding_items[i]))!=typeid (platform) and typeid (*(colliding_items[i]))!=typeid (proyectil) and typeid (*(colliding_items[i]))!=typeid (bonus)){
            vidas-=1;
//            qDebug() << "las vidas son" << vidas;
            if(vidas==0){
                perdiste->show();

                break;
            }
//            qDebug() << "las vidas son" << vidas;
        }
    }
}

void ppal::score()
{

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
