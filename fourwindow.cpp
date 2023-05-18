#include "ui_FourWindow.h"
#include "FourWindow.h"
#include "MainWindow.h"
#include <QFile>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QLabel>
#include <QPixmap>



FourWindow::FourWindow(QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::FourWindow)
{
    ui->setupUi(this);
    connect(ui->saveButton, &QPushButton::clicked, this, &FourWindow::saveInput);
    imagePath = "/Users/kleameta/Desktop/Women in STEM/bmcc logo.png";
    QPixmap image(imagePath);
    ui->imageLabel->setPixmap(image);
    ui->imageLabel->setScaledContents(true);

}

FourWindow::~FourWindow()
{
    delete ui;
}

void FourWindow::on_pushButton_6_clicked()
{

        mainwindow= new MainWindow (this);
        mainwindow->show();

}



void FourWindow::on_saveButton_clicked()
{
        mainwindow= new MainWindow (this);
        mainwindow->show();
}

void FourWindow::saveInput()
{
        QString userInput = ui->textInput->toPlainText();
        QString userInput2 = ui->textInput2->toPlainText();
        QString userInput3 = ui->textInput3->toPlainText();
        QString userInput4 = ui->textInput4->toPlainText();

        QString filename = "/Users/kleameta/Desktop/Women in STEM/mentorinput.txt";

        QFile file(filename);
        try {
            if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
                QTextStream stream(&file);

                stream << userInput << "              ";
                stream << userInput2 << "              ";
                stream << userInput3 << "              " << "\n";
                stream << userInput4 << "              " << "\n\n\n\n";

                file.close();
            } else {
                qDebug() << "Failed to open the file for writing.";
            }
        } catch (const std::exception& e) {
            qDebug() << "An exception occurred: " << e.what();
        }
}
