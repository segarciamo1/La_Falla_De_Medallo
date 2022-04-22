/********************************************************************************
** Form generated from reading UI file 'iniciarsesion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIARSESION_H
#define UI_INICIARSESION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Iniciarsesion
{
public:
    QPushButton *IniciarSeccionButton;
    QPushButton *VolverButton;
    QPushButton *RegistraseButton;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Usuario;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Contrasea;
    QLabel *label_3;

    void setupUi(QWidget *Iniciarsesion)
    {
        if (Iniciarsesion->objectName().isEmpty())
            Iniciarsesion->setObjectName(QString::fromUtf8("Iniciarsesion"));
        Iniciarsesion->setWindowModality(Qt::WindowModal);
        Iniciarsesion->setEnabled(true);
        Iniciarsesion->resize(480, 480);
        Iniciarsesion->setAutoFillBackground(false);
        IniciarSeccionButton = new QPushButton(Iniciarsesion);
        IniciarSeccionButton->setObjectName(QString::fromUtf8("IniciarSeccionButton"));
        IniciarSeccionButton->setGeometry(QRect(30, 370, 120, 48));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
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
        VolverButton = new QPushButton(Iniciarsesion);
        VolverButton->setObjectName(QString::fromUtf8("VolverButton"));
        VolverButton->setGeometry(QRect(330, 370, 120, 48));
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
        RegistraseButton = new QPushButton(Iniciarsesion);
        RegistraseButton->setObjectName(QString::fromUtf8("RegistraseButton"));
        RegistraseButton->setGeometry(QRect(180, 370, 120, 48));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setStrikeOut(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        RegistraseButton->setFont(font2);
        RegistraseButton->setCursor(QCursor(Qt::ArrowCursor));
        RegistraseButton->setContextMenuPolicy(Qt::NoContextMenu);
        RegistraseButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        groupBox = new QGroupBox(Iniciarsesion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 190, 411, 131));
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
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        groupBox->setFont(font3);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 351, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        lineEdit_Usuario = new QLineEdit(layoutWidget);
        lineEdit_Usuario->setObjectName(QString::fromUtf8("lineEdit_Usuario"));
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        font5.setKerning(true);
        lineEdit_Usuario->setFont(font5);

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
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Contrasea = new QLineEdit(layoutWidget_2);
        lineEdit_Contrasea->setObjectName(QString::fromUtf8("lineEdit_Contrasea"));
        lineEdit_Contrasea->setFont(font5);
        lineEdit_Contrasea->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Contrasea);

        label_3 = new QLabel(Iniciarsesion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 480, 480));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/IniciarSesion.png")));
        label_3->raise();
        IniciarSeccionButton->raise();
        VolverButton->raise();
        RegistraseButton->raise();
        groupBox->raise();

        retranslateUi(Iniciarsesion);

        QMetaObject::connectSlotsByName(Iniciarsesion);
    } // setupUi

    void retranslateUi(QWidget *Iniciarsesion)
    {
        Iniciarsesion->setWindowTitle(QApplication::translate("Iniciarsesion", "Form", nullptr));
        IniciarSeccionButton->setText(QApplication::translate("Iniciarsesion", "Iniciar Sesi\303\263n", nullptr));
        VolverButton->setText(QApplication::translate("Iniciarsesion", "Volver", nullptr));
        RegistraseButton->setText(QApplication::translate("Iniciarsesion", "Registrarse", nullptr));
        label->setText(QApplication::translate("Iniciarsesion", "Usuario", nullptr));
        label_2->setText(QApplication::translate("Iniciarsesion", "Contrase\303\261a", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Iniciarsesion: public Ui_Iniciarsesion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIARSESION_H
