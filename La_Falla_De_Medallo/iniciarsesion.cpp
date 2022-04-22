#include "iniciarsesion.h"
#include "ui_iniciarsesion.h"

#include "menuinicial.h"
#include "mainwindow.h"

Iniciarsesion::Iniciarsesion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Iniciarsesion)
{
    ui->setupUi(this);
}

Iniciarsesion::~Iniciarsesion()
{
    delete ui;
}

void Iniciarsesion::on_IniciarSeccionButton_clicked()
{
    QFile archivo("Posiciones.txt");

    QString Linea = "", Palbra = "";
    QString usuario = ui->lineEdit_Usuario->text();
    QString contrasea = ui->lineEdit_Contrasea->text();
    int aux = 0;

    if(!archivo.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    while (!archivo.atEnd() ) {
        Linea = archivo.readLine();
        for (int i=0; i < Linea.size();i++) {
            if(Linea[i] == ' ' or Linea[i] == '\n'){
                if(espacios ==0){
                    if(usuario == Palbra){
                        cont++;
                        des=true;
                    }
                }
                else if (espacios==1) {
                    if(contrasea == Palbra){
                        cont++;
                        des =false;
                    }
                }
                if(cont == 2 and aux==0 ){
                    if (espacios==2) {
                        PosXJ =Palbra.toInt();
                    }
                    else if (espacios==3) {
                        PosYJ =Palbra.toInt();
                    }
                    else if (espacios==4) {
                        PosXP =Palbra.toInt();
                    }
                    else if (espacios==5) {
                        PosYP =Palbra.toInt();
                    }
                    else if(espacios ==6){
                        score_maxi = Palbra.toInt();
                        aux=1;
                    }
                }
                espacios += 1;
                Palbra= "";
            }
            else {
                Palbra += Linea[i];
            }
        }
        espacios = 0;
    }
    if(cont ==2){
//        juego = new Juego(PosXJ,PosYJ,PosXP,PosXP,score_maxi,usuario,contrasea);
//        juego->show();
        MainWindow * mainwindow = new MainWindow();
        mainwindow->show();
        hide();
    }
    else if (cont ==1){
        if(des){QMessageBox::warning(this,"Iniciar sesion","Contraseña Incorrecto");}
        else{QMessageBox::warning(this,"Iniciar sesion","Usuario Incorrecta");}
    }
    else{QMessageBox::warning(this,"Iniciar sesion","Usuario y Contraseña Incorrectas");}
    cont =0;
    archivo.close();
}


void Iniciarsesion::on_VolverButton_clicked()
{
    Menuinicial * menuinicial = new Menuinicial();
    menuinicial->show();
    hide();
}


void Iniciarsesion::on_RegistraseButton_clicked()
{
    hide();
    registrarse->show();
}

