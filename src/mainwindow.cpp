#include "mainwindow.h"
#include "Operacions.h"


/* --- AUXILIARY --- */

int MainWindow::doRandom(){
    return Operacions::ferRandom();
}

void MainWindow::choosePicture(QPixmap &p){
    int charac = doRandom();
    //TODO: Is there a better way and improve this?
    string path = ":/chars/";
    stringstream ss;
    ss << charac;
    path.append(ss.str());
    p.load(path.c_str());
}

/* --- MAIN --- */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->size());
    ui->Res1->setAlignment(Qt::AlignCenter);
    ui->Res2->setAlignment(Qt::AlignCenter);
    ui->Res3->setAlignment(Qt::AlignCenter);
    ui->Res4->setAlignment(Qt::AlignCenter);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::assignCharToPlayers(){
    if(ui->radBut_1->isChecked()){
        QPixmap p;
        choosePicture(p);
        ui->Res1->setPixmap(p);
        ui->Res2->clear();
        ui->Res3->clear();
        ui->Res4->clear();
    }
    else if(ui->radBut_2->isChecked()){
        QPixmap p;
        choosePicture(p);
        ui->Res1->setPixmap(p);
        sleep(0.01); //to avoid having the same character
        choosePicture(p);
        ui->Res2->setPixmap(p);
        ui->Res3->clear();
        ui->Res4->clear();
    }
    else if (ui->radBut_3->isChecked()){
        QPixmap p;
        choosePicture(p);
        ui->Res1->setPixmap(p);
        sleep(0.01);
        choosePicture(p);
        ui->Res2->setPixmap(p);
        sleep(0.01);
        choosePicture(p);
        ui->Res3->setPixmap(p);
        ui->Res4->clear();
    }
    else if(ui->radBut_4->isChecked()){
        QPixmap p;
        choosePicture(p);
        ui->Res1->setPixmap(p);
        sleep(0.01);
        choosePicture(p);
        ui->Res2->setPixmap(p);
        sleep(0.01);
        choosePicture(p);
        ui->Res3->setPixmap(p);
        sleep(0.01);
        choosePicture(p);
        ui->Res4->setPixmap(p);
    }
}

void MainWindow::on_pushButton_clicked()
{
    assignCharToPlayers();
}
