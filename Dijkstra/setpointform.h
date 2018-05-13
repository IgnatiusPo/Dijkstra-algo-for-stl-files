#ifndef SETPOINTFORM_H
#define SETPOINTFORM_H

#include <QWidget>

namespace Ui {
class setPointForm;
}

class setPointForm : public QWidget
{
    Q_OBJECT

public:
    explicit setPointForm(stl::stl_info * data, QWidget *parent = 0);
    ~setPointForm();
    
private slots:
    void on_OKButton_clicked();

    void on_Find_clicked();
    
private:
    Ui::setPointForm *ui;
};

#endif // SETPOINTFORM_H
