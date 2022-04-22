#ifndef PLATFORM_H
#define PLATFORM_H

#include <QObject>
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QTimer>
#include <QPainter>
#include <QImage>
#include <ppal.h>



class platform: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    platform(float x,float y);
    void posicion();
    void posicion(float newX,float newY);
    float getPosx() const;
    float getPosy() const;
    int getSizex() const;
    int getSizey() const;

private:
    QTimer *mov_timer1=new QTimer();
    float posx;
    float posy;
    const int sizex=80;
    const int sizey=20 ;

public slots:
    void mov();

};

#endif // PLATFORM_H
