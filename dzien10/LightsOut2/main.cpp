#include "lightsout.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LightsOut w;
    w.show();
    return a.exec();
}
