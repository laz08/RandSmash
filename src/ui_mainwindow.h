/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *quantsJug;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radBut_1;
    QRadioButton *radBut_2;
    QRadioButton *radBut_3;
    QRadioButton *radBut_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Player1;
    QLabel *Player2;
    QLabel *Player3;
    QLabel *Player4;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Res1;
    QLabel *Res2;
    QLabel *Res3;
    QLabel *Res4;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(452, 334);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        quantsJug = new QLabel(centralWidget);
        quantsJug->setObjectName(QStringLiteral("quantsJug"));
        quantsJug->setGeometry(QRect(170, 20, 116, 17));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 90, 80, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 416, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radBut_1 = new QRadioButton(layoutWidget);
        radBut_1->setObjectName(QStringLiteral("radBut_1"));

        horizontalLayout->addWidget(radBut_1);

        radBut_2 = new QRadioButton(layoutWidget);
        radBut_2->setObjectName(QStringLiteral("radBut_2"));

        horizontalLayout->addWidget(radBut_2);

        radBut_3 = new QRadioButton(layoutWidget);
        radBut_3->setObjectName(QStringLiteral("radBut_3"));

        horizontalLayout->addWidget(radBut_3);

        radBut_4 = new QRadioButton(layoutWidget);
        radBut_4->setObjectName(QStringLiteral("radBut_4"));

        horizontalLayout->addWidget(radBut_4);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 160, 411, 20));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Player1 = new QLabel(layoutWidget1);
        Player1->setObjectName(QStringLiteral("Player1"));

        horizontalLayout_2->addWidget(Player1);

        Player2 = new QLabel(layoutWidget1);
        Player2->setObjectName(QStringLiteral("Player2"));

        horizontalLayout_2->addWidget(Player2);

        Player3 = new QLabel(layoutWidget1);
        Player3->setObjectName(QStringLiteral("Player3"));

        horizontalLayout_2->addWidget(Player3);

        Player4 = new QLabel(layoutWidget1);
        Player4->setObjectName(QStringLiteral("Player4"));

        horizontalLayout_2->addWidget(Player4);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 210, 411, 91));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Res1 = new QLabel(layoutWidget2);
        Res1->setObjectName(QStringLiteral("Res1"));

        horizontalLayout_3->addWidget(Res1);

        Res2 = new QLabel(layoutWidget2);
        Res2->setObjectName(QStringLiteral("Res2"));

        horizontalLayout_3->addWidget(Res2);

        Res3 = new QLabel(layoutWidget2);
        Res3->setObjectName(QStringLiteral("Res3"));

        horizontalLayout_3->addWidget(Res3);

        Res4 = new QLabel(layoutWidget2);
        Res4->setObjectName(QStringLiteral("Res4"));

        horizontalLayout_3->addWidget(Res4);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        quantsJug->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Quants jugadors?</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "OK", 0));
        radBut_1->setText(QApplication::translate("MainWindow", "1 jugador", 0));
        radBut_2->setText(QApplication::translate("MainWindow", "2 jugadors", 0));
        radBut_3->setText(QApplication::translate("MainWindow", "3 jugadors", 0));
        radBut_4->setText(QApplication::translate("MainWindow", "4 jugadors", 0));
        Player1->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Jugador 1</p></body></html>", 0));
        Player2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Jugador 2</p></body></html>", 0));
        Player3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Jugador 3</p></body></html>", 0));
        Player4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Jugador 4</p></body></html>", 0));
        Res1->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
        Res2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
        Res3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
        Res4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
