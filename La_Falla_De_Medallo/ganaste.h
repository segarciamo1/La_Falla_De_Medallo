#ifndef GANASTE_H
#define GANASTE_H

#include <QWidget>

namespace Ui {
class Ganaste;
}

class Ganaste : public QWidget
{
    Q_OBJECT

public:
    explicit Ganaste(QWidget *parent = nullptr);
    ~Ganaste();

private slots:
    void on_VolverJugar_clicked();

    void on_Salir_clicked();

private:
    Ui::Ganaste *ui;
};

#endif // GANASTE_H
