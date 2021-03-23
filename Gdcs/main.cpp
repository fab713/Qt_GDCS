#include "mainpage.h"
#include <QApplication>
#include "welcomepage.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WelcomePage w;
    w.show();
    return a.exec();
}
