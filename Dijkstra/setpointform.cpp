#include "setpointform.h"
#include "ui_setpointform.h"

setPointForm::setPointForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setPointForm)
{
    ui->setupUi(this);
}

setPointForm::~setPointForm()
{
    delete ui;
}

void setPointForm::on_OKButton_clicked()
{
    ui->listWidget->cur
}
