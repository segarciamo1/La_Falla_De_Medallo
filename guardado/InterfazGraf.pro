QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    bonus.cpp \
    capucho.cpp \
    enemigo.cpp \
    ganaste.cpp \
    guardarpartida.cpp \
    iniciarsesion.cpp \
    instrucciones.cpp \
    main.cpp \
    mainwindow.cpp \
    menuinicial.cpp \
    perdiste.cpp \
    platform.cpp \
    ppal.cpp \
    proyectil.cpp \
    registrarse.cpp \
    score.cpp

HEADERS += \
    about.h \
    bonus.h \
    capucho.h \
    enemigo.h \
    ganaste.h \
    guardarpartida.h \
    iniciarsesion.h \
    instrucciones.h \
    mainwindow.h \
    menuinicial.h \
    perdiste.h \
    platform.h \
    ppal.h \
    proyectil.h \
    registrarse.h \
    score.h

FORMS += \
    about.ui \
    ganaste.ui \
    guardarpartida.ui \
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

DISTFILES +=

RESOURCES += \
    Imagenes.qrc
