/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *ResultLabel;
    QPushButton *Find;
    QLabel *Result;
    QWidget *layoutWidget;
    QHBoxLayout *PathLayOut;
    QHBoxLayout *enterPathLayOut;
    QLabel *pathLabel;
    QLineEdit *pathLine;
    QPushButton *pathOK;
    QWidget *layoutWidget1;
    QHBoxLayout *Start;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSt;
    QPushButton *EnterSt;
    QLabel *pointInfoSt;
    QWidget *layoutWidget2;
    QHBoxLayout *Finish;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pointInfoEnd;
    QPushButton *EnterEnd;
    QLabel *pointInfoEnd_2;
    QLabel *HeaderLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(430, 221);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ResultLabel = new QLabel(centralwidget);
        ResultLabel->setObjectName(QStringLiteral("ResultLabel"));
        ResultLabel->setGeometry(QRect(20, 150, 61, 16));
        Find = new QPushButton(centralwidget);
        Find->setObjectName(QStringLiteral("Find"));
        Find->setGeometry(QRect(280, 100, 75, 23));
        Result = new QLabel(centralwidget);
        Result->setObjectName(QStringLiteral("Result"));
        Result->setGeometry(QRect(90, 150, 61, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 401, 25));
        PathLayOut = new QHBoxLayout(layoutWidget);
        PathLayOut->setObjectName(QStringLiteral("PathLayOut"));
        PathLayOut->setContentsMargins(0, 0, 0, 0);
        enterPathLayOut = new QHBoxLayout();
        enterPathLayOut->setObjectName(QStringLiteral("enterPathLayOut"));
        pathLabel = new QLabel(layoutWidget);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));

        enterPathLayOut->addWidget(pathLabel);

        pathLine = new QLineEdit(layoutWidget);
        pathLine->setObjectName(QStringLiteral("pathLine"));

        enterPathLayOut->addWidget(pathLine);


        PathLayOut->addLayout(enterPathLayOut);

        pathOK = new QPushButton(layoutWidget);
        pathOK->setObjectName(QStringLiteral("pathOK"));
        pathOK->setEnabled(true);

        PathLayOut->addWidget(pathOK);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 221, 27));
        Start = new QHBoxLayout(layoutWidget1);
        Start->setObjectName(QStringLiteral("Start"));
        Start->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelSt = new QLabel(layoutWidget1);
        labelSt->setObjectName(QStringLiteral("labelSt"));

        horizontalLayout_2->addWidget(labelSt);

        EnterSt = new QPushButton(layoutWidget1);
        EnterSt->setObjectName(QStringLiteral("EnterSt"));

        horizontalLayout_2->addWidget(EnterSt);


        Start->addLayout(horizontalLayout_2);

        pointInfoSt = new QLabel(layoutWidget1);
        pointInfoSt->setObjectName(QStringLiteral("pointInfoSt"));

        Start->addWidget(pointInfoSt);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 100, 211, 27));
        Finish = new QHBoxLayout(layoutWidget2);
        Finish->setObjectName(QStringLiteral("Finish"));
        Finish->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pointInfoEnd = new QLabel(layoutWidget2);
        pointInfoEnd->setObjectName(QStringLiteral("pointInfoEnd"));

        horizontalLayout_4->addWidget(pointInfoEnd);

        EnterEnd = new QPushButton(layoutWidget2);
        EnterEnd->setObjectName(QStringLiteral("EnterEnd"));

        horizontalLayout_4->addWidget(EnterEnd);


        Finish->addLayout(horizontalLayout_4);

        pointInfoEnd_2 = new QLabel(layoutWidget2);
        pointInfoEnd_2->setObjectName(QStringLiteral("pointInfoEnd_2"));

        Finish->addWidget(pointInfoEnd_2);

        HeaderLabel = new QLabel(centralwidget);
        HeaderLabel->setObjectName(QStringLiteral("HeaderLabel"));
        HeaderLabel->setGeometry(QRect(10, 40, 47, 13));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 430, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\237\320\276\321\210\321\203\320\272 \320\275\320\260\320\271\320\272\320\276\321\200\320\276\321\202\321\210\320\276\320\263\320\276 \321\210\320\273\321\217\321\205\321\203", nullptr));
        ResultLabel->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        Find->setText(QApplication::translate("MainWindow", "\320\227\320\275\320\260\320\271\321\202\320\270", nullptr));
        Result->setText(QApplication::translate("MainWindow", "...", nullptr));
        pathLabel->setText(QApplication::translate("MainWindow", "\320\250\320\273\321\217\321\205:", nullptr));
        pathOK->setText(QApplication::translate("MainWindow", "\320\236\320\232", nullptr));
        labelSt->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\207\320\260\321\202\320\276\320\272:", nullptr));
        EnterSt->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\320\270", nullptr));
        pointInfoSt->setText(QString());
        pointInfoEnd->setText(QApplication::translate("MainWindow", "\320\232\321\226\320\275\320\265\321\206\321\214:", nullptr));
        EnterEnd->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\320\270", nullptr));
        pointInfoEnd_2->setText(QString());
        HeaderLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
