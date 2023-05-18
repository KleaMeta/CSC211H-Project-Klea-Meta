#include "SevWindow.h"
#include "ui_sevwindow.h"
#include "MainWindow.h"
#include <QMessageBox>
#include <QtGui>
#include <QPixmap>
#include <QLabel>

SevWindow::SevWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SevWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &SevWindow::displayBMCCstory);
    imagePath = "/Users/kleameta/Desktop/Women in STEM/bmcc logo.png";
    QPixmap image(imagePath);
    ui->imageLabel->setPixmap(image);
    ui->imageLabel->setScaledContents(true);

}

SevWindow::~SevWindow()
{
    delete ui;
}

void SevWindow::on_pushButton_9_clicked()
{

    mainwindow= new MainWindow (this);
    mainwindow->show();

}

void SevWindow::displayBMCCstory()
{
    QString filePath = "/Users/kleameta/Desktop/Women in STEM/storyinput.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Failed to open the file: " + file.errorString());
        return;
    }

    QTextStream in(&file);
    QString content = in.readAll();
    file.close();
    QString htmlContent = "<pre> <span style='color:blue;'>" + content + "</span></pre>";

    ui->textBrowser->setHtml(htmlContent);
}

