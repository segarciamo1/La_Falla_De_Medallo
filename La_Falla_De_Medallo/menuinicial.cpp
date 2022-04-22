#include "menuinicial.h"
#include "ui_menuinicial.h"

Menuinicial::Menuinicial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menuinicial)
{
    ui->setupUi(this);
    iniciarsesion = new Iniciarsesion();
    instrucciones = new Instrucciones();
}

Menuinicial::~Menuinicial()
{
    delete ui;
}


void Menuinicial::on_Informacion_clicked()
{
    hide();
    instrucciones->show();
}


void Menuinicial::on_Posiciones_clicked()
{
    int espacios =0;
    QString Informacion = "";
    QFile archivo("Posiciones.txt");
    QString Linea;
    QString Palabra;
    if(!archivo.open(QFile::ReadOnly | QFile::Text)){
        return;
    }
    while (! archivo.atEnd() ) {
        Linea = archivo.readLine();
        for (int i=0; i < Linea.size();i++) {
            if(Linea[i] == ' ' or Linea[i] == '\n'){
                if(espacios ==0){
                    espacios +=1;
                    Informacion += Palabra + ' ';
                }
                else if(espacios ==3) {
                    espacios +=1;
                    Informacion += Palabra + '\n';
                }
                espacios +=1;
                Palabra = "";
            }
            else {
                Palabra += Linea[i];
            }
        }
        espacios = 0;
    }
    QMessageBox::about(this, "Bloc de notas",Informacion);
    archivo.flush();
    archivo.close();
    Informacion ="";
    QString txt;
}


void Menuinicial::on_ComenzarJuegoButton_clicked()
{ // Botón para ocultar el UI de menu inicial y mostrar iniciar seccion.
    hide();
    iniciarsesion->show();
}
