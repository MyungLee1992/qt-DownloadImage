#include "downloadimage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DownloadImage w;
    w.show();
    return a.exec();
}
