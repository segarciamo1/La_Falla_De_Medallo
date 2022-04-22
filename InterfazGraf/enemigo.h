#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class enemigo:public QObject,public QGraphicsPixmapItem
{
Q_OBJECT
public:
    enemigo(QGraphicsItem *parent=0);
    void posicion();
    void posicion(int newX,int newY);
    int getPuntuacion() const;
    void setPuntuacion(int newPuntuacion);

public slots:
    void move();
private:
    float posx;
    float posy;
    float iy;
    float ix;
    float rad=1;
    float angulo;
    const float w=0.4;
    int puntuacion=0;

    short int Fotograma1 = 1;
};

#endif // ENEMIGO_H
