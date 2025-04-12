#include "mainwindow.h"

#include <QApplication> /// pre-defined library with main application object

/// main function with arguments
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); /// creates an instance of QApplication class using command line arguments
    MainWindow w; /// create instance of main window
    w.show(); /// shows window on screen
    return a.exec(); /// event loop
}
