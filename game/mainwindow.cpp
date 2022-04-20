#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtDebug"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(50, 0, 450, 450);
    ui->graphicsView->setScene(scene);
    //scene->addItem(ppal);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(actualizar()));
    timer->start(100);
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
    p1= new ppal();
    scene->addItem(p1);
    QImage fondo("../game/Terminadas/Fondo_Universidad.jpg");
    QBrush b1(fondo);
    ui->graphicsView->setBackgroundBrush(b1);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actualizar()
{
    static int contador=0;
    if(contador==10){
        static int gravedad=2;
        static int condicionsuelo=p1->pos().y()+gravedad>=265?p1->pos().y():p1->pos().y()+gravedad;
        p1->setPos(p1->pos().x(),condicionsuelo);
        contador=0;

    }

}

void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::keyPressEvent(QKeyEvent *ev)
{
    switch (ev->key()) {
    case   Qt::Key_A :    {
        p1->setPos(p1->pos().x()-5,p1->pos().y());
        break;

    }
    case Qt::Key_W :

    {
        //actualizar();
        p1->setPos(p1->pos().x(),p1->pos().y()-5);
        break;
    }
    case Qt::Key_S:
    {

        int condicionsuelo=p1->pos().y()+5>=265?p1->pos().y():p1->pos().y()+5;
        p1->setPos(p1->pos().x(),condicionsuelo);
        qDebug() << "la posicion es" << p1->pos().y();
        break;
    }
    case Qt::Key_D:
    {
        p1->setPos(p1->pos().x()+5,p1->pos().y());
        scene->setSceneRect(p1->pos().x()+5, 0, 450, 450);
        qDebug() << "la posicion x es" << p1->pos().x();

        break;
    }
    /*case Qt::Key_Space:
    {

    }
    */

    }
}


void MainWindow::on_pushButton_clicked()
{
    w2->show();
    w3->hide();
}



void MainWindow::on_pushButton_3_clicked()
{
    w3->show();
    w2->hide();
}

