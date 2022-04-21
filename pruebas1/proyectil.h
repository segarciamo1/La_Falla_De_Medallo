#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsRectItem>

class proyectil : public QObject,public QGraphicsRectItem{
  Q_OBJECT

public:
    proyectil();

public slots:
    void move();
};

#endif // PROYECTIL_H
