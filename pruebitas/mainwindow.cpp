#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ppal.h"
#include "enemigo.h"
#include <QKeyEvent>
#include <proyectil.h>
#include <bonus.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene;
    scene->setSceneRect(100,0,800,455);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setFixedSize(800,455);
    QImage fondo("../pruebitas/Terminadas/Fondo_Universidad.jpg");
    QBrush b1(fondo);
    ui->graphicsView->setBackgroundBrush(b1);
    jugador= new ppal();
    scene->addItem(jugador);
    jugador->start();
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), jugador, SLOT(spawn()));
    timer->start(100);
    connect(timer,SIGNAL(timeout()), this, SLOT(puntuacionTotal()));
    plataforma= new platform(200,100);
    proyectil *disparo= new proyectil();
    scene->addItem(plataforma);
    bonu=new bonus(100,200);
    scene->addItem(bonu);

    show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *ev)
{

    jugador->setSalto(false);
    if(ev->key()==Qt::Key_A){
         //setPos(pos().x()-vx,pos().y());
         jugador->setPosx(jugador->getPosx()-jugador->getVx());
         scene->setSceneRect(jugador->getPosx(),0,800,455);




    }
    else if(ev->key()==Qt::Key_D){
        //setPos(pos().x()+vx,pos().y());
        jugador->setPosx(jugador->getPosx()+jugador->getVx());
        scene->setSceneRect(jugador->getPosx(),0,800,455);


    }
    else if(ev->key()==Qt::Key_W){
         jugador->setVy(40);
         jugador->setSalto(true);
    }
    else if(ev->key()==Qt::Key_Space){
        proyectil * disparo= new proyectil();
        disparo->setPos(jugador->getPosx(),jugador->getPosy());
        scene->addItem(disparo);

    }



}

int MainWindow::getPuntuacion() const
{
    return puntuacion;
}

void MainWindow::setPuntuacion(int newPuntuacion)
{
    puntuacion = newPuntuacion;
}

void MainWindow::puntuacionTotal()
{
    static int cont=0;
    if(cont==15){
        puntuacion=bonu->getPuntuacion();
        qDebug() << "la puntuacion total es"<<puntuacion;
        cont=0;
    }
    cont++;


}

