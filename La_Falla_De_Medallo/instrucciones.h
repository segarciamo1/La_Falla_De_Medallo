#ifndef INSTRUCCIONES_H
#define INSTRUCCIONES_H

#include <QWidget>

#include "about.h"

namespace Ui {
class Instrucciones;
}

class Instrucciones : public QWidget
{
    Q_OBJECT

public:
    explicit Instrucciones(QWidget *parent = nullptr);
    ~Instrucciones();

private slots:
    void on_VolverButton_clicked();

    void on_AboutButton_clicked();

private:
    Ui::Instrucciones *ui;
    About * about = new About();
};

#endif // INSTRUCCIONES_H
