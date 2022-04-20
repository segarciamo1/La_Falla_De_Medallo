/********************************************************************************
** Form generated from reading UI file 'registrarse.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRARSE_H
#define UI_REGISTRARSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registrarse
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Usuario;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Contrasea;
    QLabel *NuevoUserFondo;
    QPushButton *RegistrarseButton;
    QPushButton *VolverButton;

    void setupUi(QWidget *Registrarse)
    {
        if (Registrarse->objectName().isEmpty())
            Registrarse->setObjectName(QString::fromUtf8("Registrarse"));
        Registrarse->resize(480, 480);
        Registrarse->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(Registrarse);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 170, 411, 131));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 351, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        lineEdit_Usuario = new QLineEdit(layoutWidget);
        lineEdit_Usuario->setObjectName(QString::fromUtf8("lineEdit_Usuario"));

        horizontalLayout->addWidget(lineEdit_Usuario);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 80, 351, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Contrasea = new QLineEdit(layoutWidget_2);
        lineEdit_Contrasea->setObjectName(QString::fromUtf8("lineEdit_Contrasea"));
        lineEdit_Contrasea->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Contrasea);

        NuevoUserFondo = new QLabel(Registrarse);
        NuevoUserFondo->setObjectName(QString::fromUtf8("NuevoUserFondo"));
        NuevoUserFondo->setGeometry(QRect(0, 0, 480, 480));
        NuevoUserFondo->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/NuevoUsuario.png")));
        RegistrarseButton = new QPushButton(Registrarse);
        RegistrarseButton->setObjectName(QString::fromUtf8("RegistrarseButton"));
        RegistrarseButton->setGeometry(QRect(70, 350, 120, 48));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setStrikeOut(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        RegistrarseButton->setFont(font2);
        RegistrarseButton->setCursor(QCursor(Qt::ArrowCursor));
        RegistrarseButton->setContextMenuPolicy(Qt::NoContextMenu);
        RegistrarseButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        VolverButton = new QPushButton(Registrarse);
        VolverButton->setObjectName(QString::fromUtf8("VolverButton"));
        VolverButton->setGeometry(QRect(270, 350, 120, 48));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(12);
        font3.setBold(true);
        VolverButton->setFont(font3);
        VolverButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));
        NuevoUserFondo->raise();
        groupBox->raise();
        RegistrarseButton->raise();
        VolverButton->raise();

        retranslateUi(Registrarse);

        QMetaObject::connectSlotsByName(Registrarse);
    } // setupUi

    void retranslateUi(QWidget *Registrarse)
    {
        Registrarse->setWindowTitle(QApplication::translate("Registrarse", "Form", nullptr));
        label->setText(QApplication::translate("Registrarse", "Usuario", nullptr));
        label_2->setText(QApplication::translate("Registrarse", "Contrase\303\261a", nullptr));
        NuevoUserFondo->setText(QString());
        RegistrarseButton->setText(QApplication::translate("Registrarse", "Registrarse", nullptr));
        VolverButton->setText(QApplication::translate("Registrarse", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registrarse: public Ui_Registrarse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRARSE_H
