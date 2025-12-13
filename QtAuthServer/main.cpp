#include <QCoreApplication>
#include "QtAuthServer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QtAuthServer authServer(1024);

    return a.exec();
}
