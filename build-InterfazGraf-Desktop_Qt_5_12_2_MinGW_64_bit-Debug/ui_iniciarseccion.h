/********************************************************************************
** Form generated from reading UI file 'iniciarseccion.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIARSECCION_H
#define UI_INICIARSECCION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Iniciarseccion
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
    QPushButton *IniciarSeccionButton;
    QPushButton *VolverButton;
    QLabel *NuevoUserFondo;
    QPushButton *RegistraseButton;

    void setupUi(QWidget *Iniciarseccion)
    {
        if (Iniciarseccion->objectName().isEmpty())
            Iniciarseccion->setObjectName(QString::fromUtf8("Iniciarseccion"));
        Iniciarseccion->resize(480, 480);
        groupBox = new QGroupBox(Iniciarseccion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 190, 411, 131));
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
        layoutWidget->setGeometry(QRect(20, 30, 351, 30));
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
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(208, 208, 208, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(127, 127, 128, 255));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lineEdit_Usuario->setPalette(palette);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Black"));
        lineEdit_Usuario->setFont(font2);
        lineEdit_Usuario->setFrame(false);

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

        IniciarSeccionButton = new QPushButton(Iniciarseccion);
        IniciarSeccionButton->setObjectName(QString::fromUtf8("IniciarSeccionButton"));
        IniciarSeccionButton->setGeometry(QRect(40, 370, 120, 48));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setStrikeOut(false);
        font3.setStyleStrategy(QFont::PreferDefault);
        IniciarSeccionButton->setFont(font3);
        IniciarSeccionButton->setCursor(QCursor(Qt::ArrowCursor));
        IniciarSeccionButton->setContextMenuPolicy(Qt::NoContextMenu);
        IniciarSeccionButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        VolverButton = new QPushButton(Iniciarseccion);
        VolverButton->setObjectName(QString::fromUtf8("VolverButton"));
        VolverButton->setGeometry(QRect(330, 370, 120, 48));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        VolverButton->setFont(font4);
        VolverButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}\n"
""));
        NuevoUserFondo = new QLabel(Iniciarseccion);
        NuevoUserFondo->setObjectName(QString::fromUtf8("NuevoUserFondo"));
        NuevoUserFondo->setGeometry(QRect(0, 0, 480, 480));
        NuevoUserFondo->setPixmap(QPixmap(QString::fromUtf8(":/fondos/Imagenes/IniciarSeccion.png")));
        RegistraseButton = new QPushButton(Iniciarseccion);
        RegistraseButton->setObjectName(QString::fromUtf8("RegistraseButton"));
        RegistraseButton->setGeometry(QRect(190, 370, 120, 48));
        RegistraseButton->setFont(font3);
        RegistraseButton->setCursor(QCursor(Qt::ArrowCursor));
        RegistraseButton->setContextMenuPolicy(Qt::NoContextMenu);
        RegistraseButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"color:black;\n"
"border-image: url(:/fondos/Imagenes/Boton1.png);\n"
"}"));
        NuevoUserFondo->raise();
        groupBox->raise();
        IniciarSeccionButton->raise();
        VolverButton->raise();
        RegistraseButton->raise();

        retranslateUi(Iniciarseccion);

        QMetaObject::connectSlotsByName(Iniciarseccion);
    } // setupUi

    void retranslateUi(QWidget *Iniciarseccion)
    {
        Iniciarseccion->setWindowTitle(QApplication::translate("Iniciarseccion", "Form", nullptr));
        label->setText(QApplication::translate("Iniciarseccion", "Usuario", nullptr));
        lineEdit_Usuario->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("Iniciarseccion", "Contrase\303\261a", nullptr));
        IniciarSeccionButton->setText(QApplication::translate("Iniciarseccion", "Iniciar Secci\303\263n", nullptr));
        VolverButton->setText(QApplication::translate("Iniciarseccion", "Volver", nullptr));
        NuevoUserFondo->setText(QString());
        RegistraseButton->setText(QApplication::translate("Iniciarseccion", "Registrarse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Iniciarseccion: public Ui_Iniciarseccion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIARSECCION_H