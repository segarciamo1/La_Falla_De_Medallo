#include "pajaro.h"
#include "mainwindow.h"

pajaro::pajaro(float x, float y, float _rad):
cx(x),cy(y),rad(_rad)
{

    posx=rad+cx;
    posy=cy;
    posicion();
    connect(timerPajaro,SIGNAL(timeout()),this,SLOT(mov()));
    timerPajaro->start(10);

}
void pajaro::mov(){

    angulo=angulo+w*DT;
    posx=cx+rad*cos(angulo);
    posy=cy+rad*sin(angulo);
    qDebug()<<"x: "<<posx<<", y: "<<posy;
    posicion();


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
