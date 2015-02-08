#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include <string>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <sstream>
#include <iostream>
using namespace std;


namespace Ui {
    class MainWindow;
}

    class MainWindow : public QMainWindow{
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;

        void assignCharToPlayers();
        int doRandom();
        void choosePicture(QPixmap &p);


    private slots:
        void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
