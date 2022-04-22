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

    connect(timer,SIGNAL(timeout()), this, SLOT(suma()));

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

void MainWindow::suma()
{
    static int conta=0;
    if(conta==10){
        puntuacion=bonu->getPuntuacion();
        qDebug() << "sumonobnu"<<puntuacion;
        conta=0;
    }
    conta++;

}





