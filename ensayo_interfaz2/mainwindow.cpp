#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(-500, -250, 1000, 500);;
    ui->graphicsView->setScene(scene);
    l1 = new QGraphicsLineItem(-500,-250,500,-250);
    l2 = new QGraphicsLineItem(-500,250,500,250);
    l3 = new QGraphicsLineItem(-500,-250,-500,250);
    l4 = new QGraphicsLineItem(500,-250,500,250);


    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(Actualizar()));
    w2=new QMainWindow(this);
    s2=new QGraphicsScene();
    v2=new QGraphicsView(s2);

    b2 = new QPushButton("empezar",w2);
    b2->setGeometry(0,50,20,20);
    w3=new QMainWindow(this);
    s3=new QGraphicsScene();
    v3=new QGraphicsView(s2);
    nombreEditable= new QTextEdit("escriba su nombre",w2);
    a=new QLabel(" tecla a para ir a la izquiera",w3);
    s=new QLabel(" tecla s para ir abajo",w3);
    d=new QLabel(" tecla d para ir a la derecha",w3);
    w=new QLabel(" tecla w para ir arriba",w3);
    h=new QLabel(" tecla h para disparar",w3);
    a->setGeometry(10,0,150,20);
    s->setGeometry(10,20,150,20);
    d->setGeometry(10,40,150,20);
    w->setGeometry(10,60,150,20);
    h->setGeometry(10,80,150,20);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actualizar()
{

}



void MainWindow::on_pushButton_2_clicked()
{
      w2->show();
      w3->hide();
}


void MainWindow::on_pushButton_clicked()
{
    w3->show();
    w2->hide();
}

