#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ppal.h"
#include "enemigo.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene;
    scene->setSceneRect(100,0,500,455);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setFixedSize(500,455);
    QImage fondo("../pruebitas/Terminadas/Fondo_Universidad.jpg");
    QBrush b1(fondo);
    ui->graphicsView->setBackgroundBrush(b1);
    jugador= new ppal();
    jugador->setRect(100,300,25,25);
    scene->addItem(jugador);
    jugador->start();
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), jugador, SLOT(spawn()));
    timer->start(100);
   // pajaros.append(new pajaro(250,400,50));
    //scene->addItem(pajaros.last());
   // ave= new pajaro(100,300,100);
    //scene->addItem(ave);
   // ave = new pajaro(250,400,50);
    //scene->addItem(ave);
    show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

