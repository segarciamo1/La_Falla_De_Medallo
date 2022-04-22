#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>

class proyectil : public QObject,public QGraphicsPixmapItem{
  Q_OBJECT

public:
    proyectil();

public slots:
    void move();
};

#endif // PROYECTIL_H
