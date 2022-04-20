#ifndef INICIARSECCION_H
#define INICIARSECCION_H

#include <QWidget>

#include "registrarse.h"

namespace Ui {
class Iniciarseccion;
}

class Iniciarseccion : public QWidget
{
    Q_OBJECT

public:
    explicit Iniciarseccion(QWidget *parent = nullptr);
    ~Iniciarseccion();

private slots:
    void on_IniciarSeccionButton_clicked();

    void on_VolverButton_clicked();

    void on_RegistraseButton_clicked();

private:
    Ui::Iniciarseccion *ui;

    Registrarse * registrarse = new Registrarse();

    bool des;
    int PosXJ, PosYJ,PosXP,PosYP, vidas,score,score_maxi;
    short int cont = 0, espacios =0;
};

#endif // INICIARSECCION_H
