#ifndef SETPOINTFORM_H
#define SETPOINTFORM_H

#include <QWidget>
#include "stl_info.hpp"

namespace Ui {
class setPointForm;
}

class setPointForm : public QWidget
{
    Q_OBJECT

public:
    explicit setPointForm(stl::stl_info * data, QWidget *parent = 0);
    ~setPointForm();
<<<<<<< HEAD
    stl::point pt;
=======
    
>>>>>>> 5cb094bf603630f4d020933c641dbc6a9b351794
private slots:
    void on_OKButton_clicked();

    void on_Find_clicked();
<<<<<<< HEAD

=======
    
>>>>>>> 5cb094bf603630f4d020933c641dbc6a9b351794
private:
    Ui::setPointForm *ui;
    stl::stl_info * stlfn;
};

#endif // SETPOINTFORM_H
