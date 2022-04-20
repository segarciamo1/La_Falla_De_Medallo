#include "ganaste.h"
#include "ui_ganaste.h"

#include "menuinicial.h"

Ganaste::Ganaste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ganaste)
{
    ui->setupUi(this);
}

Ganaste::~Ganaste()
{
    delete ui;
}

void Ganaste::on_VolverJugar_clicked()
{
    Menuinicial * menuinicial = new Menuinicial();
    menuinicial->show();
    hide();
}


void Ganaste::on_Salir_clicked()
{
    close();
}
