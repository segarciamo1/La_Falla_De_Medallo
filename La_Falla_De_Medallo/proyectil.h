#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include "score.h"

class proyectil : public QObject,public QGraphicsPixmapItem{
  Q_OBJECT

public:
    proyectil();

    bool getSumaMuertos() const;
    void setSumaMuertos(bool newSumaMuertos);

    int getPuntuacion() const;
    void setPuntuacion(int newPuntuacion);

    float getPosicionjug() const;
    void setPosicionjug(float newPosicionjug);

public slots:
    void move();

private:
    bool sumaMuertos=false;
    score *score1;
    int puntuacion=0;
    int limite=850;
    short int FotogramaDis = 1;
    float posicionjug;
};

#endif // PROYECTIL_H
