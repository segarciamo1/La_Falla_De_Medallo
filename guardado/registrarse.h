#ifndef REGISTRARSE_H
#define REGISTRARSE_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

namespace Ui {
class Registrarse;
}

class Registrarse : public QWidget
{
    Q_OBJECT

public:
    explicit Registrarse(QWidget *parent = nullptr);
    ~Registrarse();

private slots:
    void on_RegistrarseButton_clicked();

    void on_VolverButtonReg_clicked();

private:
    Ui::Registrarse *ui;

    bool des;
    short int cont = 0, espacios =0;
};

#endif // REGISTRARSE_H
