QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    ganaste.cpp \
    iniciarsesion.cpp \
    instrucciones.cpp \
    main.cpp \
    mainwindow.cpp \
    menuinicial.cpp \
    perdiste.cpp \
    registrarse.cpp

HEADERS += \
    about.h \
    ganaste.h \
    iniciarsesion.h \
    instrucciones.h \
    mainwindow.h \
    menuinicial.h \
    perdiste.h \
    registrarse.h

FORMS += \
    about.ui \
    ganaste.ui \
    iniciarsesion.ui \
    instrucciones.ui \
    mainwindow.ui \
    menuinicial.ui \
    perdiste.ui \
    registrarse.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Imagenes/Carro.png \
    Imagenes/Fondo_Ciudad.jpg \
    Imagenes/Fondo_Universidad.jpg \
    Imagenes/Huevo.png \
    Imagenes/Ladron.png \
    Imagenes/Libro.png \
    Imagenes/Mochila.png \
    Imagenes/PersonajePrincipal.png \
    Imagenes/Pizza.png \
    Imagenes/Vaca.png \
    Imagenes/ValaLadron.png \
    Imagenes/VidaExtra.png \
    Imagenes/Water.png

RESOURCES += \
    Imagenes.qrc
