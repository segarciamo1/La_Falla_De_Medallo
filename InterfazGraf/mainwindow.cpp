#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ppal.h"
#include "enemigo.h"
#include <QKeyEvent>
#include <proyectil.h>
#include <bonus.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , uiq(new Ui::MainWindow)
{
    uiq->setupUi(this);
    scene=new QGraphicsScene;
    scene->setSceneRect(100,0,800,455);
    uiq->graphicsView->setScene(scene);
    uiq->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    uiq->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    uiq->graphicsView->setFixedSize(800,455);
    QImage fondo(":/fondos/Imagenes/Fondo_Universidad.jpg");
    QBrush b1(fondo);
    uiq->graphicsView->setBackgroundBrush(b1);
    jugador= new ppal();
    scene->addItem(jugador);
    jugador->start();
    QTimer *timer = new QTimer(this);

//    connect(timer,SIGNAL(timeout()), jugador, SLOT(spawn()));

    timer->start(100);
    plataforma= new platform(200,100);

    scene->addItem(plataforma);
    ene=new enemigo();
    scene->addItem(ene);
    capu= new capucho();
    scene->addItem(capu);

    bonu=new bonus(100,200);
    scene->addItem(bonu);
    show();
}

MainWindow::~MainWindow()
{
    delete uiq;
}

void MainWindow::keyPressEvent(QKeyEvent *ev)
{

    jugador->setSalto(false);
    if(ev->key()==Qt::Key_A){
         //setPos(pos().x()-vx,pos().y());
         jugador->setPosx(jugador->getPosx()-jugador->getVx());
         scene->setSceneRect(jugador->getPosx(),0,800,455);
         jugador->ppal::Animacion_Izquierda();
    }
    else if(ev->key()==Qt::Key_D){
        //setPos(pos().x()+vx,pos().y());
        jugador->setPosx(jugador->getPosx()+jugador->getVx());
        scene->setSceneRect(jugador->getPosx(),0,800,455);
        jugador->ppal::Animacion_Derecha();

    }
    else if(ev->key()==Qt::Key_W){
         jugador->setVy(40);
         jugador->setSalto(true);

         jugador->ppal::Animacion_Salto();
    }
    else if(ev->key()==Qt::Key_Space){
        proyectil * disparo= new proyectil();
        disparo->setPos(jugador->getPosx(),jugador->getPosy());
        scene->addItem(disparo);
    }
    else if(ev->key()==Qt::Key_Escape){
        hide();
        guardarpartida1->show();
    }
}

void MainWindow::suma()
{
    static int conta=0;
    if(conta==10){
        puntuacion=bonu->getPuntuacion()+ene->getPuntuacion()+capu->getPuntuacion();
//        qDebug() << "sumonobnu"<<puntuacion;
        conta=0;
    }
    conta++;
}
