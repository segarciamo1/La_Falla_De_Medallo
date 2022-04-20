#ifndef MENUINICIAL_H
#define MENUINICIAL_H

#include <QWidget>

#include <QFile>
#include <QMessageBox>

#include "iniciarseccion.h"
#include "instrucciones.h"
#include "mainwindow.h"

namespace Ui {
class Menuinicial;
}

class Menuinicial : public QWidget
{
    Q_OBJECT

public:
    explicit Menuinicial(QWidget *parent = nullptr);
    ~Menuinicial();

private slots:

    void on_Informacion_clicked();

    void on_Posiciones_clicked();

    void on_ComenzarJuegoButton_clicked();

private:
    Ui::Menuinicial *ui;

    Iniciarseccion * iniciarseccion;
    Instrucciones * instrucciones;
};

#endif // MENUINICIAL_H
