/********************************************************************************
** Form generated from reading UI file 'ganaste.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GANASTE_H
#define UI_GANASTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ganaste
{
public:
    QLabel *label;
    QPushButton *VolverJugar;
    QPushButton *Salir;
    QPushButton *VolverJugar_2;
    QPushButton *Salir_2;

    void setupUi(QWidget *Ganaste)
    {
        if (Ganaste->objectName().isEmpty())
            Ganaste->setObjectName(QString::fromUtf8("Ganaste"));
        Ganaste->setWindowModality(Qt::NonModal);
        Ganaste->resize(480, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Ganaste->sizePolicy().hasHeightForWidth());
        Ganaste->setSizePolicy(sizePolicy);
        label = new QLabel(Ganaste);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(0, 0, 480, 480));
        label->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/FELICIDADES!.png")));
        label->setScaledContents(true);
        VolverJugar = new QPushButton(Ganaste);
        VolverJugar->setObjectName(QString::fromUtf8("VolverJugar"));
        VolverJugar->setGeometry(QRect(80, 350, 120, 48));
        QFont font;
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
        Salir = new QPushButton(Ganaste);
        Salir->setObjectName(QString::fromUtf8("Salir"));
        Salir->setGeometry(QRect(280, 350, 120, 48));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        Salir->setFont(font1);
        Salir->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));
        VolverJugar_2 = new QPushButton(Ganaste);
        VolverJugar_2->setObjectName(QString::fromUtf8("VolverJugar_2"));
        VolverJugar_2->setGeometry(QRect(290, 410, 120, 48));
        VolverJugar_2->setFont(font);
        VolverJugar_2->setCursor(QCursor(Qt::ArrowCursor));
        VolverJugar_2->setContextMenuPolicy(Qt::NoContextMenu);
        VolverJugar_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        Salir_2 = new QPushButton(Ganaste);
        Salir_2->setObjectName(QString::fromUtf8("Salir_2"));
        Salir_2->setGeometry(QRect(490, 410, 120, 48));
        Salir_2->setFont(font1);
        Salir_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));

        retranslateUi(Ganaste);

        QMetaObject::connectSlotsByName(Ganaste);
    } // setupUi

    void retranslateUi(QWidget *Ganaste)
    {
        Ganaste->setWindowTitle(QApplication::translate("Ganaste", "Form", nullptr));
        label->setText(QString());
        VolverJugar->setText(QApplication::translate("Ganaste", "Volver a Jugar", nullptr));
        Salir->setText(QApplication::translate("Ganaste", "Salir", nullptr));
        VolverJugar_2->setText(QApplication::translate("Ganaste", "Volver a Jugar", nullptr));
        Salir_2->setText(QApplication::translate("Ganaste", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ganaste: public Ui_Ganaste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GANASTE_H
