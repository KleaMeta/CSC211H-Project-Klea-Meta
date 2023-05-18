
#include "SixWindow.h"
#include "ui_sixwindow.h"
#include "MainWindow.h"
#include <QLabel>
#include <QPixmap>



SixWindow::SixWindow(QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::SixWindow)
{
    ui->setupUi(this);
    imagePath = "/Users/kleameta/Desktop/Women in STEM/bmcc logo.png";
    QPixmap image(imagePath);
    ui->imageLabel->setPixmap(image);
    ui->imageLabel->setScaledContents(true);
}

SixWindow::~SixWindow()
{
    delete ui;
}


void SixWindow::on_pushButton_9_clicked()
{

    mainwindow= new MainWindow (this);
    mainwindow->show();

}

