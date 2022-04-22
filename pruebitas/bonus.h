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
    void posicion();
    void posicion(int newX,int newY);
    float getPosx() const;
    void setPosx(float newPosx);

    float getPosy() const;
    void setPosy(float newPosy);
public slots:
    void move();

private:
     QTimer *timer1=new QTimer();
    float posx;
    float posy;

};
#endif // BONUS_H
