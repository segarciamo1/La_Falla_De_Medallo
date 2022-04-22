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


    int getPuntuacion() const;
    void setPuntuacion(int newPuntuacion);
public slots:
    void puntuacionTotal();

private:
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
    platform *plataforma;
    bonus * bonu;
    int puntuacion=0;
    ppal *jugador;



};
#endif // MAINWINDOW_H
