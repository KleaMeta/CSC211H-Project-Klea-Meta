
#include "ui_ThirWindow.h"
#include "ThirWindow.h"
#include "MainWindow.h"
#include "ScienceMentor.h"
#include "MathMentor.h"
#include "TechMentor.h"
#include "EngineeringMentor.h"
#include "BMCCMentor.h"
#include <QMessageBox>
#include <QtGui>
#include <QPixmap>
#include <QLabel>
#include <QLabel>
#include <QPixmap>


ThirWindow::ThirWindow(QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::ThirWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &ThirWindow::displayScience);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &ThirWindow::displayTechnology);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &ThirWindow::displayEngineering);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &ThirWindow::displayMath);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &ThirWindow::displayBMCCMentor);
    imagePath = "/Users/kleameta/Desktop/Women in STEM/bmcc logo.png";
    QPixmap image(imagePath);
    ui->imageLabel->setPixmap(image);
    ui->imageLabel->setScaledContents(true);
}


ThirWindow::~ThirWindow()
{
    delete ui;
}




void ThirWindow::on_pushButton_6_clicked()
{
    mainwindow= new MainWindow (this);
    mainwindow->show();

}




void ThirWindow::displayScience()
{

    QString filePath = "/Users/kleameta/Desktop/Women in STEM/SMentor.txt";
    Mentor scienceMentor(filePath, ui->textBrowser);
    scienceMentor.displayInformation();
}

void ThirWindow::displayTechnology()
{

    QString filePath = "/Users/kleameta/Desktop/Women in STEM/TMentor.txt";
    Mentor techMentor(filePath, ui->textBrowser);
    techMentor.displayInformation();

}


void ThirWindow::displayEngineering()
{

    QString filePath = "/Users/kleameta/Desktop/Women in STEM/EMentor.txt";
    Mentor engineeringMentor(filePath, ui->textBrowser);
    engineeringMentor.displayInformation();
}



void ThirWindow::displayMath()
{

    QString filePath = "/Users/kleameta/Desktop/Women in STEM/MMentor.txt";
    Mentor mathMentor(filePath, ui->textBrowser);
    mathMentor.displayInformation();
}




void ThirWindow::displayBMCCMentor()
{

    QString filePath = "/Users/kleameta/Desktop/Women in STEM/mentorinput.txt";
    Mentor BMCCMentor(filePath, ui->textBrowser);
    BMCCMentor.displayInformation();
}

