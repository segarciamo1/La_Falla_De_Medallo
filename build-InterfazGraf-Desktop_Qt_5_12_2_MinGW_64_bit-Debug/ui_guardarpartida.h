/********************************************************************************
** Form generated from reading UI file 'guardarpartida.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARDARPARTIDA_H
#define UI_GUARDARPARTIDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuardarPartida
{
public:
    QPushButton *guardarPartidaButton;
    QPushButton *VolverButton;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Usuario;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Contrasea;

    void setupUi(QWidget *GuardarPartida)
    {
        if (GuardarPartida->objectName().isEmpty())
            GuardarPartida->setObjectName(QString::fromUtf8("GuardarPartida"));
        GuardarPartida->resize(480, 480);
        guardarPartidaButton = new QPushButton(GuardarPartida);
        guardarPartidaButton->setObjectName(QString::fromUtf8("guardarPartidaButton"));
        guardarPartidaButton->setGeometry(QRect(50, 290, 120, 48));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        guardarPartidaButton->setFont(font);
        guardarPartidaButton->setCursor(QCursor(Qt::ArrowCursor));
        guardarPartidaButton->setContextMenuPolicy(Qt::NoContextMenu);
        guardarPartidaButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        VolverButton = new QPushButton(GuardarPartida);
        VolverButton->setObjectName(QString::fromUtf8("VolverButton"));
        VolverButton->setGeometry(QRect(310, 290, 120, 48));
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
        groupBox = new QGroupBox(GuardarPartida);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 110, 411, 131));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(208, 208, 208, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(164, 166, 168, 96));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        groupBox->setPalette(palette);
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 351, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        lineEdit_Usuario = new QLineEdit(layoutWidget);
        lineEdit_Usuario->setObjectName(QString::fromUtf8("lineEdit_Usuario"));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        lineEdit_Usuario->setFont(font4);

        horizontalLayout->addWidget(lineEdit_Usuario);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 80, 351, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Contrasea = new QLineEdit(layoutWidget_2);
        lineEdit_Contrasea->setObjectName(QString::fromUtf8("lineEdit_Contrasea"));
        lineEdit_Contrasea->setFont(font4);
        lineEdit_Contrasea->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Contrasea);


        retranslateUi(GuardarPartida);

        QMetaObject::connectSlotsByName(GuardarPartida);
    } // setupUi

    void retranslateUi(QWidget *GuardarPartida)
    {
        GuardarPartida->setWindowTitle(QApplication::translate("GuardarPartida", "Form", nullptr));
        guardarPartidaButton->setText(QApplication::translate("GuardarPartida", "Guardar Partida", nullptr));
        VolverButton->setText(QApplication::translate("GuardarPartida", "Volver", nullptr));
        label->setText(QApplication::translate("GuardarPartida", "Usuario", nullptr));
        label_2->setText(QApplication::translate("GuardarPartida", "Contrase\303\261a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuardarPartida: public Ui_GuardarPartida {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARDARPARTIDA_H
