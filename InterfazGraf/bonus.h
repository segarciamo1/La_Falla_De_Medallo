#ifndef BONUS_H
#define BONUS_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QTimer>

class bonus:public QObject,public QGraphicsPixmapItem
{
Q_OBJECT
public:
    bonus(float x,float y);
    bonus();
    void posicion();
    void posicion(int newX,int newY);
    float getPosx() const;
    void setPosx(float newPosx);

    float getPosy() const;
    void setPosy(float newPosy);
    int getPuntuacion() const;
    void setPuntuacion(int newPuntuacion);

public slots:
    void move();

private:
     QTimer *timer1=new QTimer();
    float posx;
    float posy;
    int puntuacion;
};
#endif // BONUS_H
