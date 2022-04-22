#ifndef PERDISTE_H
#define PERDISTE_H

#include <QWidget>

namespace Ui {
class Perdiste;
}

class Perdiste : public QWidget
{
    Q_OBJECT

public:
    explicit Perdiste(QWidget *parent = nullptr);
    ~Perdiste();

private slots:
    void on_VolverJugar_clicked();

    void on_Salir_clicked();

private:
    Ui::Perdiste *ui;
};

#endif // PERDISTE_H
