#include "dialogmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialogMain w;
    w.show();

    return a.exec();
}
