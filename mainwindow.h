#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/// making sure nothing until endif is included more than once in the same source file
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    ///specific qt object declaration that signifies that this object uses qt features

public:
    MainWindow(QWidget *parent = nullptr); /// constructor
    ~MainWindow(); /// destructor

private slots: // Declare custom slot
    void startApp();

///method that accesses user interface elements
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
