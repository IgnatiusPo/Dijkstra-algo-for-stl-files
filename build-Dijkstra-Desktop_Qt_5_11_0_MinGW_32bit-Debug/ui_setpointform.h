/********************************************************************************
** Form generated from reading UI file 'setpointform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPOINTFORM_H
#define UI_SETPOINTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setPointForm
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *SetPoint;
    QLabel *Xlabel;
    QLineEdit *X;
    QLabel *Ylabel;
    QLineEdit *Y;
    QLabel *Zlabel;
    QLineEdit *Z;
    QWidget *layoutWidget1;
    QHBoxLayout *RangeLayOut;
    QHBoxLayout *horizontalLayout_2;
    QLabel *RangeLabel;
    QLineEdit *Range;
    QPushButton *Find;
    QSpacerItem *horizontalSpacer;
    QPushButton *OKButton;
    QListWidget *listWidget;

    void setupUi(QWidget *setPointForm)
    {
        if (setPointForm->objectName().isEmpty())
            setPointForm->setObjectName(QStringLiteral("setPointForm"));
        setPointForm->resize(479, 382);
        layoutWidget = new QWidget(setPointForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 461, 22));
        SetPoint = new QHBoxLayout(layoutWidget);
        SetPoint->setObjectName(QStringLiteral("SetPoint"));
        SetPoint->setContentsMargins(0, 0, 0, 0);
        Xlabel = new QLabel(layoutWidget);
        Xlabel->setObjectName(QStringLiteral("Xlabel"));

        SetPoint->addWidget(Xlabel);

        X = new QLineEdit(layoutWidget);
        X->setObjectName(QStringLiteral("X"));

        SetPoint->addWidget(X);

        Ylabel = new QLabel(layoutWidget);
        Ylabel->setObjectName(QStringLiteral("Ylabel"));

        SetPoint->addWidget(Ylabel);

        Y = new QLineEdit(layoutWidget);
        Y->setObjectName(QStringLiteral("Y"));

        SetPoint->addWidget(Y);

        Zlabel = new QLabel(layoutWidget);
        Zlabel->setObjectName(QStringLiteral("Zlabel"));

        SetPoint->addWidget(Zlabel);

        Z = new QLineEdit(layoutWidget);
        Z->setObjectName(QStringLiteral("Z"));

        SetPoint->addWidget(Z);

        layoutWidget1 = new QWidget(setPointForm);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 40, 457, 25));
        RangeLayOut = new QHBoxLayout(layoutWidget1);
        RangeLayOut->setObjectName(QStringLiteral("RangeLayOut"));
        RangeLayOut->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        RangeLabel = new QLabel(layoutWidget1);
        RangeLabel->setObjectName(QStringLiteral("RangeLabel"));

        horizontalLayout_2->addWidget(RangeLabel);

        Range = new QLineEdit(layoutWidget1);
        Range->setObjectName(QStringLiteral("Range"));

        horizontalLayout_2->addWidget(Range);


        RangeLayOut->addLayout(horizontalLayout_2);

        Find = new QPushButton(layoutWidget1);
        Find->setObjectName(QStringLiteral("Find"));

        RangeLayOut->addWidget(Find);

        horizontalSpacer = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        RangeLayOut->addItem(horizontalSpacer);

        OKButton = new QPushButton(setPointForm);
        OKButton->setObjectName(QStringLiteral("OKButton"));
        OKButton->setGeometry(QRect(400, 350, 75, 23));
        listWidget = new QListWidget(setPointForm);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 70, 461, 271));

        retranslateUi(setPointForm);

        QMetaObject::connectSlotsByName(setPointForm);
    } // setupUi

    void retranslateUi(QWidget *setPointForm)
    {
        setPointForm->setWindowTitle(QApplication::translate("setPointForm", "Form", nullptr));
        Xlabel->setText(QApplication::translate("setPointForm", "X:", nullptr));
        Ylabel->setText(QApplication::translate("setPointForm", "Y:", nullptr));
        Zlabel->setText(QApplication::translate("setPointForm", "Z:", nullptr));
        RangeLabel->setText(QApplication::translate("setPointForm", "\320\224\321\226\320\260\320\277\320\260\320\267\320\276\320\275:", nullptr));
        Find->setText(QApplication::translate("setPointForm", "\320\227\320\275\320\260\320\271\321\202\320\270", nullptr));
        OKButton->setText(QApplication::translate("setPointForm", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setPointForm: public Ui_setPointForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPOINTFORM_H
