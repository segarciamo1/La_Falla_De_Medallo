/********************************************************************************
** Form generated from reading UI file 'perdiste.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERDISTE_H
#define UI_PERDISTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Perdiste
{
public:
    QLabel *label;
    QPushButton *VolverJugar;
    QPushButton *Salir;

    void setupUi(QWidget *Perdiste)
    {
        if (Perdiste->objectName().isEmpty())
            Perdiste->setObjectName(QString::fromUtf8("Perdiste"));
        Perdiste->resize(480, 480);
        label = new QLabel(Perdiste);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 480, 480));
        label->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/Fallaste.png")));
        VolverJugar = new QPushButton(Perdiste);
        VolverJugar->setObjectName(QString::fromUtf8("VolverJugar"));
        VolverJugar->setGeometry(QRect(80, 350, 120, 48));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        VolverJugar->setFont(font);
        VolverJugar->setCursor(QCursor(Qt::ArrowCursor));
        VolverJugar->setContextMenuPolicy(Qt::NoContextMenu);
        VolverJugar->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        Salir = new QPushButton(Perdiste);
        Salir->setObjectName(QString::fromUtf8("Salir"));
        Salir->setGeometry(QRect(280, 350, 120, 48));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(true);
        Salir->setFont(font1);
        Salir->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));

        retranslateUi(Perdiste);

        QMetaObject::connectSlotsByName(Perdiste);
    } // setupUi

    void retranslateUi(QWidget *Perdiste)
    {
        Perdiste->setWindowTitle(QCoreApplication::translate("Perdiste", "Form", nullptr));
        label->setText(QString());
        VolverJugar->setText(QCoreApplication::translate("Perdiste", "Volver a Jugar", nullptr));
        Salir->setText(QCoreApplication::translate("Perdiste", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Perdiste: public Ui_Perdiste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERDISTE_H
