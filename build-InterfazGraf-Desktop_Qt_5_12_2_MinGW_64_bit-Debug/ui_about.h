/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPushButton *VolverButtonAbout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(480, 480);
        VolverButtonAbout = new QPushButton(About);
        VolverButtonAbout->setObjectName(QString::fromUtf8("VolverButtonAbout"));
        VolverButtonAbout->setGeometry(QRect(310, 390, 120, 48));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        VolverButtonAbout->setFont(font);
        VolverButtonAbout->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 480, 480));
        label->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/About.png")));
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 230, 121, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(15);
        font1.setBold(true);
        label_2->setFont(font1);
        label->raise();
        VolverButtonAbout->raise();
        label_2->raise();

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Form", nullptr));
        VolverButtonAbout->setText(QApplication::translate("About", "Volver", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\"><a href=\"https://github.com/segarciamo1/La_Falla_De_Medallo/blob/main/informe_La_Falla_De_Medallo/references.bib\"><span style=\" text-decoration: underline; color:#007af4;\">Links usados</span></a></p><p align=\"center\"><a href=\"https://github.com/segarciamo1/La_Falla_De_Medallo/\"><span style=\" text-decoration: underline; color:#007af4;\">GitHub</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
