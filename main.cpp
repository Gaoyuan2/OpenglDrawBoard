#include "opengl.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opengl w;
    w.show();
    return a.exec();
}
