#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pathOK_clicked()
{
    QString buff = ui->pathLine->text();
    ptr->stl_parse(buff.toStdString());
    ui->HeaderLabel->setText(ptr->_header);
}

void MainWindow::on_EnterSt_clicked()
{
    form->show();
}
