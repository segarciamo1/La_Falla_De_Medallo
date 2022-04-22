#ifndef CAPUCHO_H
#define CAPUCHO_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>
class capucho:public QObject,public QGraphicsPixmapItem
{
Q_OBJECT
public:
    capucho(float posi);
    capucho(float x,float y);
    void posicion();
    void posicion(int newX,int newY);
    int getPuntuacion() const;
    void setPuntuacion(int newPuntuacion);

public slots:
    void move();
private:
    QTimer *mov_timer1=new QTimer();
    float posx;
    float posy;
    int puntuacion=0;
    int movimiento=1;
};

#endif // CAPUCHO_H
