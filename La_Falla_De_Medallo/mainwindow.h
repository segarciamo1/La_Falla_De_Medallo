#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QList>
#include <QtMath>

#include<ppal.h>
#include<enemigo.h>
#include <platform.h>
#include <bonus.h>
#include <capucho.h>
#include <proyectil.h>
#include <score.h>

#include "guardarpartida.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public:
    void keyPressEvent(QKeyEvent *ev);
    void sumapuntuacion();
    score * puntaje;

public slots:
    void suma();

private:
    Ui::MainWindow *uiq;
    GuardarPartida * guardarpartida1 = new GuardarPartida();
    QGraphicsScene* scene;
    platform *plataforma;
    bonus * bonu;
    ppal *jugador;
    capucho * capu;
    enemigo * ene;

    QList <QGraphicsPixmapItem*> enemys;
    QList <QGraphicsPixmapItem*> bonuss;
    QList <QGraphicsPixmapItem*> capuchos;
    QList <QGraphicsRectItem*> plataformas;
    int puntuacion=0;
};
#endif // MAINWINDOW_H
