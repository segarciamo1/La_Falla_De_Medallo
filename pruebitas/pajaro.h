#ifndef PAJARO_H
#define PAJARO_H

#define DT 0.1 //cada cuantos milisegundos se actualiza
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QList>
#include <QMainWindow>
#include <math.h>
class pajaro:public QObject,public QGraphicsRectItem{

Q_OBJECT
public:
    pajaro(float x, float y,float rad);
    void posicion();
    void posicion(int newX,int newY);
private:
    QTimer * timerPajaro;
    float cx; //centro en x
    float cy; //centro en y
    float posx;
    float posy;
    float rad;
    float angulo;
    float iy;
    float ix;
    float fy;
    float fx;
    bool dir=0;
    const float w=0.1;
public slots:
     void mov();
};

#endif // PAJARO_H
