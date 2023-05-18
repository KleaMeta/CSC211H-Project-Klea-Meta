
#include "MainWindow.h"
#include "SecWindow.h"
#include "ThirWindow.h"
#include "FourWindow.h"
#include "FivWindow.h"
#include "ui_mainwindow.h"
#include "SixWindow.h"
#include "SevWindow.h"
#include <QFile>
#include <QLabel>
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    imagePath = "/Users/kleameta/Desktop/Women in STEM/bmcc logo.png";
    QPixmap image(imagePath);
    ui->imageLabel->setPixmap(image);
    ui->imageLabel->setScaledContents(true);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{

    secwindow = new SecWindow (this);
    secwindow-> show();

}


void MainWindow::on_pushButton_4_clicked()
{
    thirwindow = new ThirWindow (this);
    thirwindow->show();

}

void MainWindow::on_pushButton_6_clicked()
{
    fourwindow = new FourWindow (this);
    fourwindow->show();

}

void MainWindow::on_pushButton_5_clicked()
{
    fivwindow = new FivWindow (this);
    fivwindow->show();
}


void MainWindow::on_pushButton_7_clicked()
{
    sevwindow = new SevWindow (this);
    sevwindow->show();
}


void MainWindow::on_pushButton_clicked()
{
    sixwindow = new SixWindow (this);
    sixwindow->show();

}

