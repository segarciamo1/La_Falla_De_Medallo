#ifndef GUARDARPARTIDA_H
#define GUARDARPARTIDA_H

#include <QWidget>

#include <QFile>
#include <QMessageBox>
#include <QGraphicsTextItem>
#include <QTextStream>

namespace Ui {
class GuardarPartida;
}

class GuardarPartida : public QWidget
{
    Q_OBJECT

public:
    explicit GuardarPartida(QWidget *parent = nullptr);
    ~GuardarPartida();

private slots:
    void guardarpartida();

    void on_VolverButton_clicked();

    void on_guardarPartidaButton_clicked();

private:
    Ui::GuardarPartida *ui;
    bool des;
    int PosXJ, PosYJ,PosXP,PosYP, vidas,score,score_maxi;
    short int cont = 0, espacios =0;
};

#endif // GUARDARPARTIDA_H
