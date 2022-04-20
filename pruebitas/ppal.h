#ifndef PPAL_H
#define PPAL_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#define GRAV 5
#define DT 0.1

class ppal : public QObject,public QGraphicsRectItem
{
Q_OBJECT
public:
    ppal(QGraphicsItem *parent=0);
    void keyPressEvent(QKeyEvent *ev);
    void posicion();
    void posicion(int newX,int newY);
    void start();
    void stop();

public slots:
    void spawn();
    void movy();

private:
    float posx;
    float posy;
    float vy=0;
    float vx=8;
    bool salto;
    QTimer * timerY;


};

#endif // PPAL_H
