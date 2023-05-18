#include "ui_FivWindow.h"
#include "FivWindow.h"
#include "MainWindow.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>,
#include <QString>
#include <QLabel>
#include <QPixmap>




FivWindow::FivWindow(QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::FivWindow)
{
    ui->setupUi(this);
     connect(ui->saveButton, &QPushButton::clicked, this, &FivWindow::saveInput);

    imagePath = "/Users/kleameta/Desktop/Women in STEM/bmcc logo.png";
    QPixmap image(imagePath);
    ui->imageLabel->setPixmap(image);
    ui->imageLabel->setScaledContents(true);
}

FivWindow::~FivWindow()
{
    delete ui;
}


void FivWindow::on_pushButton_9_clicked()
{

    mainwindow= new MainWindow (this);
    mainwindow->show();


}

void FivWindow::on_saveButton_clicked()
{
    mainwindow= new MainWindow (this);
    mainwindow->show();
}


void FivWindow::saveInput()
{
    QString userInput = ui->textInput->toPlainText();
    QString userInput2 = ui->textInput2->toPlainText();
    QString userInput3 = ui->textInput3->toPlainText();
    QString userInput4 = ui->textInput4->toPlainText();

    QString filename = "/Users/kleameta/Desktop/Women in STEM/storyinput.txt";

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
