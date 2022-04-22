#include "instrucciones.h"
#include "ui_instrucciones.h"

#include "menuinicial.h"

Instrucciones::Instrucciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Instrucciones)
{
    ui->setupUi(this);
}

Instrucciones::~Instrucciones()
{
    delete ui;
}

void Instrucciones::on_VolverButton_clicked()
{
    Menuinicial * menuinicial = new Menuinicial();
    menuinicial->show();
    hide();
}


void Instrucciones::on_AboutButton_clicked()
{
    about->show();
    hide();
}

