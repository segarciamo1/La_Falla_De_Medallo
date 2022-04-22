/********************************************************************************
** Form generated from reading UI file 'instrucciones.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCCIONES_H
#define UI_INSTRUCCIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instrucciones
{
public:
    QLabel *label;
    QPushButton *AboutButton;
    QPushButton *VolverButton;

    void setupUi(QWidget *Instrucciones)
    {
        if (Instrucciones->objectName().isEmpty())
            Instrucciones->setObjectName(QString::fromUtf8("Instrucciones"));
        Instrucciones->resize(480, 480);
        label = new QLabel(Instrucciones);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 480, 480));
        label->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/Instrucciones.png")));
        AboutButton = new QPushButton(Instrucciones);
        AboutButton->setObjectName(QString::fromUtf8("AboutButton"));
        AboutButton->setGeometry(QRect(230, 400, 120, 48));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        AboutButton->setFont(font);
        AboutButton->setCursor(QCursor(Qt::ArrowCursor));
        AboutButton->setContextMenuPolicy(Qt::NoContextMenu);
        AboutButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        VolverButton = new QPushButton(Instrucciones);
        VolverButton->setObjectName(QString::fromUtf8("VolverButton"));
        VolverButton->setGeometry(QRect(350, 400, 120, 48));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        VolverButton->setFont(font1);
        VolverButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));

        retranslateUi(Instrucciones);

        QMetaObject::connectSlotsByName(Instrucciones);
    } // setupUi

    void retranslateUi(QWidget *Instrucciones)
    {
        Instrucciones->setWindowTitle(QApplication::translate("Instrucciones", "Form", nullptr));
        label->setText(QString());
        AboutButton->setText(QApplication::translate("Instrucciones", "Acerca De \n"
"Nosotros", nullptr));
        VolverButton->setText(QApplication::translate("Instrucciones", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instrucciones: public Ui_Instrucciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCCIONES_H
