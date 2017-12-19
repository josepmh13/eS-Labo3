#include "audiosystem.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AudioSystem w;
    w.showFullScreen();

    return a.exec();
}
