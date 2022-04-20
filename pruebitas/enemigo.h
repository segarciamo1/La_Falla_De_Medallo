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
public slots:
    void move();
};

#endif // ENEMIGO_H
