#ifndef PPAL_H
#define PPAL_H
#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <perdiste.h>
#define GRAV 8
#define DT 0.1

class ppal : public QObject,public QGraphicsPixmapItem
{
Q_OBJECT
public:
    ppal(QGraphicsItem *parent=0);
    void posicion();
    void posicion(int newX,int newY);
    void start();
    void stop();
    void sumaPuntuacion(int puntbonus,int puntmuertos);

    float getPosx() const;
    void setPosx(float newPosx);

    float getPosy() const;
    void setPosy(float newPosy);

    float getVy() const;
    void setVy(float newVy);

    bool getSobre() const;
    void setSobre(bool newSobre);

    int getTamanoX() const;

    int getTamanoY() const;

    bool getSalto() const;
    void setSalto(bool newSalto);

    float getVx() const;
    void setVx(float newVx);

    int getVidas() const;
    void setVidas(int newVidas);

    int getPuntuacion() const;
    void setPuntuacion(int newPuntuacion);

    // Animaciones
    void Animacion_Derecha();
    void Animacion_Izquierda();
    void Animacion_Salto();

public slots:
    void movy();
    void damage();
    void score();

private:
    float posx;
    float posy;
    float vy=0;
    float vx=8;
    bool salto;
    bool sobre=false;
    QTimer * timerY;
    QTimer * timerVidas;

    const int tamanoX=25;
    const int tamanoY=25;
    int vidas=100;
    int puntuacion=0;
    Perdiste * perdiste = new Perdiste();

	// Variables para fotogramas
    short int FotogramaDer = 1;
    short int FotogramaIzq = 1;
    short int FotogramaSal = 1;
};

#endif // PPAL_H
