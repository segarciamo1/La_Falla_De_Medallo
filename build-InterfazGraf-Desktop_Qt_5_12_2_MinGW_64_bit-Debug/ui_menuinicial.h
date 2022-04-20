/********************************************************************************
** Form generated from reading UI file 'menuinicial.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUINICIAL_H
#define UI_MENUINICIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menuinicial
{
public:
    QLabel *label;
    QPushButton *IniciarSeccionButton;
    QPushButton *Informacion;
    QPushButton *Posiciones;

    void setupUi(QWidget *Menuinicial)
    {
        if (Menuinicial->objectName().isEmpty())
            Menuinicial->setObjectName(QString::fromUtf8("Menuinicial"));
        Menuinicial->resize(480, 480);
        label = new QLabel(Menuinicial);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(0, 0, 480, 480));
        label->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/inicial.png")));
        label->setScaledContents(true);
        IniciarSeccionButton = new QPushButton(Menuinicial);
        IniciarSeccionButton->setObjectName(QString::fromUtf8("IniciarSeccionButton"));
        IniciarSeccionButton->setGeometry(QRect(20, 310, 120, 48));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        IniciarSeccionButton->setFont(font);
        IniciarSeccionButton->setCursor(QCursor(Qt::ArrowCursor));
        IniciarSeccionButton->setContextMenuPolicy(Qt::NoContextMenu);
        IniciarSeccionButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        Informacion = new QPushButton(Menuinicial);
        Informacion->setObjectName(QString::fromUtf8("Informacion"));
        Informacion->setGeometry(QRect(180, 310, 120, 48));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        font1.setBold(true);
        Informacion->setFont(font1);
        Informacion->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));
        Posiciones = new QPushButton(Menuinicial);
        Posiciones->setObjectName(QString::fromUtf8("Posiciones"));
        Posiciones->setGeometry(QRect(330, 310, 120, 48));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        Posiciones->setFont(font2);
        Posiciones->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));

        retranslateUi(Menuinicial);

        QMetaObject::connectSlotsByName(Menuinicial);
    } // setupUi

    void retranslateUi(QWidget *Menuinicial)
    {
        Menuinicial->setWindowTitle(QApplication::translate("Menuinicial", "Form", nullptr));
        label->setText(QString());
        IniciarSeccionButton->setText(QApplication::translate("Menuinicial", "Iniciar Secci\303\263n", nullptr));
        Informacion->setText(QApplication::translate("Menuinicial", "Informaci\303\263n", nullptr));
        Posiciones->setText(QApplication::translate("Menuinicial", "Posiciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menuinicial: public Ui_Menuinicial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUINICIAL_H
