#ifndef INICIARSESION_H
#define INICIARSESION_H

#include <QWidget>

#include "registrarse.h"

namespace Ui {
class Iniciarsesion;
}

class Iniciarsesion : public QWidget
{
    Q_OBJECT

public:
    explicit Iniciarsesion(QWidget *parent = nullptr);
    ~Iniciarsesion();

private slots:
    void on_IniciarSeccionButton_clicked();

    void on_VolverButton_clicked();

    void on_RegistraseButton_clicked();

private:
    Ui::Iniciarsesion *ui;

    Registrarse * registrarse = new Registrarse();

    bool des;
    int PosXJ, PosYJ,PosXP,PosYP, vidas,score,score_maxi;
    short int cont = 0, espacios =0;
};

#endif // INICIARSESION_H
