#ifndef PPAL_H
#define PPAL_H


#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsItem>
#include <QPainter>

class ppal : public QGraphicsItem
{

private:
    float x, y,vidas;


public:
    ppal();
    void keyPressEvent(QKeyEvent * event);
    QRectF boundingRect() const;
        void paint(QPainter *painter,
           const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mover();




};
#endif // PPAL_H
