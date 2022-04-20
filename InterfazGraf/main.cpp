#include "menuinicial.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menuinicial * menuinicial = new Menuinicial();
    menuinicial -> show();
    return a.exec();
}
