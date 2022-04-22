#include "guardarpartida.h"
#include "ui_guardarpartida.h"
#include "mainwindow.h"

GuardarPartida::GuardarPartida(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GuardarPartida)
{
    ui->setupUi(this);
    score1= new score();
}

GuardarPartida::~GuardarPartida()
{
    delete ui;
}

void GuardarPartida::guardarpartida()
{
    QFile archivo("Posiciones.txt");
    QString Linea = "", Palbra = "";
    QString usuario = ui->lineEdit_Usuario->text();
    QString contrasea = ui->lineEdit_Contrasea->text();

    if(!archivo.open(QIODevice::ReadWrite | QIODevice::Text)){
        return;
    }
    while (!archivo.atEnd() ) {
        Linea = archivo.readLine();
        for (int i=0; i < Linea.size();i++) {
            if(Linea[i] == ' ' or Linea[i] == '\n'){
                if(espacios ==0){
                    if(usuario == Palbra){cont++;des=true;}
                }
                else if (espacios==1) {
                    if(contrasea == Palbra){cont++;des =false;}
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
    QString s = QString::number(score1->getScore());
    qDebug() <<"el valor de puntaje es"<<score1->getScore();

    if(cont ==2){
        QTextStream out(&archivo);
        out << usuario + ' ' + contrasea + ' ' + s +' '+"0"+' '+'0'+' '+'0'+' '+'0' + '\n';
        QMessageBox::information(this,"Iniciar sesion","Usuario creado correctamente");
        close();
        qDebug() << "el puntaje es" << s;
    }
    else if (cont ==1){
        if(des){QMessageBox::warning(this,"Iniciar sesion","Contraseña Incorrecto");}
        else{QMessageBox::warning(this,"Iniciar sesion","Usuario Incorrecta");}
    }
    else{QMessageBox::warning(this,"Iniciar sesion","Usuario y Contraseña Incorrectas");}
    cont =0;
    archivo.close();
}

void GuardarPartida::on_VolverButton_clicked()
{
    MainWindow * mainwindow = new MainWindow();
    mainwindow->show();
    hide();
}

void GuardarPartida::on_guardarPartidaButton_clicked()
{
    guardarpartida();

}

