#include "perdiste.h"
#include "ui_perdiste.h"

#include "menuinicial.h"

Perdiste::Perdiste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Perdiste)
{
    ui->setupUi(this);
}

Perdiste::~Perdiste()
{
    delete ui;
}

void Perdiste::on_VolverJugar_clicked()
{
    Menuinicial * menuinicial = new Menuinicial();
    menuinicial->show();
    hide();
}


void Perdiste::on_Salir_clicked()
{
    close();
}

