#include "pajaro.h"
#include "mainwindow.h"

pajaro::pajaro(float x, float y, float _rad)
{
    cx=x;
    cy=y;
    rad=_rad;
    posx=rad+cx;
    posy=cy;
    posicion(); // con posX y posY definidas en el constructor posiciono el personaje
    connect(timerPajaro,SIGNAL(timeout()),this,SLOT(mov()));
    timerPajaro->start(10);

}
void pajaro::mov(){

    angulo=angulo+w*DT;
    posx=cx+rad*cos(angulo);
    posy=cy+rad*sin(angulo);
    //qDebug()<<"x: "<<posx<<", y: "<<posy;
    posicion();
    /*
    QList<QGraphicsItem *> list = collidingItems();
    foreach(QGraphicsItem * i , list)
    {
        Tico * item= dynamic_cast<Tico *>(i);
        if (item)
        {
            game->setTico_vidas(game->getTico_vidas()-1);
            if (game->getTico_vidas()<=0){
                //game->setLevel(0);
                game->setTico_vidas(3);
                movi_timer->stop();
                game->backMenu();
            }
            else
                game->start();
        }

    }
    */
}
void pajaro::posicion() //metodo (sobrecargado) llamado en el constructor para posicionar personaje
{
    setPos(posx,posy);
}
void pajaro::posicion(int newX,int newY) // Actualizar posición con parametros
{
    posx=newX;
    posy=newY;
    setPos(posx,posy);
}
