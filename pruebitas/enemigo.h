#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
class enemigo:public QObject,public QGraphicsRectItem
{
Q_OBJECT
public:
    enemigo(QGraphicsItem *parent=0);
    enemigo(float x,float y,float xf, float yf);
    void posicion();
    void posicion(int newX,int newY);
public slots:
    void move();
private:
    float posx;
    float posy;
    float iy;
    float ix;
    float fy;
    float fx;
    float rad=25;
    float angulo;
    const float w=0.1;
};

#endif // ENEMIGO_H
