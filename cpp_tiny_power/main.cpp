#include "tinypower.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tinypower w;
    w.show();

    return a.exec();
}
