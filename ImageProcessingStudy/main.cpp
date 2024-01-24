#include "ImageProcessingStudy.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageProcessingStudy w;
    w.show();
    return a.exec();
}
