#include "platform.h"
#include <QBrush>


platform::platform(float x, float y)

{
    posx=x;
    posy=y;
    setRect(0,0,sizex,sizey);
    posicion();
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBrush(brush);
    connect(mov_timer1,SIGNAL(timeout()),this,SLOT(mov()));
    qDebug() << "se creo plataforma";
    mov_timer1->start(10);
}

void platform::posicion()
{
    setPos(posx,posy);
}
void platform::posicion(float newX,float newY)
{
    posx=newX;
    posy=newY;
    setPos(posx,posy);
}
float platform::getPosx() const
{
    return posx;
}
float platform::getPosy() const
{
    return posy;
}
int platform::getSizex() const
{
    return sizex;
}
int platform::getSizey() const
{
    return sizey;
}

void platform::mov()
{
    //debe detectar colisiones con el personaje ppal
    QList<QGraphicsItem *> list = collidingItems();
    foreach(QGraphicsItem * i , list) //es probable que tenga que mover esto a la parte de las plataformas, para que el mov de tico varie por plataforma
    {
        ppal * item= dynamic_cast<ppal *>(i); //Con esto se hace la colision con cada plataforma
        if (item)
        {
            if (item->getPosy()<posy+sizey/2){
                item->setSobre(true);
                if (!item->getSalto()){
                item->setPosy(posy);
                item->setVy(0);
                qDebug() << "choco plataforma";


                }
            }
            if (item->getPosy()>posy+sizey-5){
                item->setPosy(posy+sizey);
                item->setVy(0);
            }
        }
    }


}
