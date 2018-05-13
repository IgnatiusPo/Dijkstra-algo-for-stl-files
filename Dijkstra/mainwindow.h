#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "stl_info.hpp"
#include <QMainWindow>
#include "setpointform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pathOK_clicked();

    void on_EnterSt_clicked();

private:
    Ui::MainWindow *ui;
    stl::stl_info * ptr;
    setPointForm * form;
};

#endif // MAINWINDOW_H
