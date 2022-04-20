#include "about.h"
#include "ui_about.h"

#include "instrucciones.h"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
}

About::~About()
{
    delete ui;
}

void About::on_VolverButtonAbout_clicked()
{
    Instrucciones * instrucciones = new Instrucciones();
    instrucciones->show();
    hide();
}

