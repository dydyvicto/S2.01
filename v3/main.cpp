#include "mainwindow.h"
#include "lecteur.h"
#include "image.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Lecteur L;
    Image I;
    MainWindow w;
    w.show();
    return a.exec();
}
