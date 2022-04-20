#ifndef PPAL_H
#define PPAL_H

#include <QGraphicsItem>
#include <QPainter>

#define GRAV -9.8
#define DT 0.1
class ppal : public QGraphicsItem
{
private:
    float x, y, vx, vy, ax, ay;
public:
    ppal();
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget);

    void aceleracion();
    void velocidades();
    float posicionx();
    float posiciony(float tiempo);
};

#endif // PPAL_H
