#include "setpointform.h"
#include "ui_setpointform.h"
#include <QStringList>

setPointForm::setPointForm(stl::stl_info * data,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::setPointForm)
{
    stlfn = data;
    ui->setupUi(this);
}

setPointForm::~setPointForm()
{
    delete ui;
}

void setPointForm::on_OKButton_clicked()
{
    auto outBack = ui->listWidget->currentItem();

    auto qlist = outBack->text().split(' ');
    pt._x = qlist[0].toFloat();
    pt._y = qlist[1].toFloat();
    pt._z = qlist[3].toFloat();
}

void setPointForm::on_Find_clicked()
{
    auto vc = stlfn->get_points(ui->X->text().toFloat(),ui->Y->text().toFloat(),ui->Z->text().toFloat(), ui->Range->text().toFloat());
    for(int i = 0; i < vc.size(); ++i)
        ui->listWidget->addItem(vc[i]->get_info());
}
