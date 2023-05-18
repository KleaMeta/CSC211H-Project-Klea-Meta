#include "MainWindow.h"
#include "ui_secwindow.h"
#include "SecWindow.h"
#include "SixWindow.h"
#include <QPixmap>

#include <QPushButton>
#include<QVBoxLayout>

SecWindow::SecWindow(QWidget *parent)
    : QDialog(parent)
    ,ui(new Ui::SecWindow)
{
 ui->setupUi(this);
    imagePath = "/Users/kleameta/Desktop/Women in STEM/bmcc logo.png";
    QPixmap image(imagePath);
    ui->imageLabel->setPixmap(image);
    ui->imageLabel->setScaledContents(true);
}


SecWindow::~SecWindow()
{
    delete ui;
}


QString SecWindow::readFromFile(const QString& filePath) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        QString content = stream.readAll();
        file.close();
        return content;
    } else {
        qDebug() << "Failed to open file:" << file.errorString();
        return QString();
    }
}


void SecWindow::on_pushButton_3_clicked()
{
   sixwindow = new SixWindow (this);
    sixwindow->show();
}


void SecWindow::on_pushButton_9_clicked()
{
    mainwindow= new MainWindow (this);
    mainwindow->show();

}





void SecWindow::on_pushButton_4_clicked()
{
    QString htmlContent = "<html><body style='text-align: center;'>"
                          "<h1 style='font-size: 60px;'><b>ROLE MODELS IN SCIENCE</b></h1>"
                          "<br>"
                          "<img src='file:////Users/kleameta/Desktop/Women in STEM/science.jpeg' width='450' height='300'>"
                          "</body></html>";

    ui->textBrowser->setHtml(htmlContent);

    ui->textBrowser->show();
    ui->pushButtonNext_2->hide();
    ui->pushButtonPrevious_2->hide();

    ui->pushButtonNext_3->hide();
    ui->pushButtonPrevious_3->hide();
    ui->pushButtonNext_4->hide();
    ui->pushButtonPrevious_4->hide();

    ui->pushButtonNext->show();
    ui->pushButtonPrevious->show();



}


void SecWindow::on_pushButtonNext_clicked()
{
    if (clickCountNext % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/science1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/science1img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else if (clickCountNext % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/science2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/science2img.jpg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/science3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/science3img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);    }

    clickCountNext++;
}




void SecWindow::on_pushButtonPrevious_clicked()
{
//on_pushButton_4_clicked();
    if (clickCountPrevious % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/science1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/science1img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    }else if (clickCountPrevious % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/science2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/science2img.jpg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/science3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/science3img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);    }

    clickCountPrevious++;
}

void SecWindow::on_pushButton_7_clicked()
{
    QString htmlContent = "<html><body style='text-align: center;'>"
                          "<h1 style='font-size: 60px;'><b>ROLE MODELS IN TECHNOLOGY</b></h1>"
                          "<br>"
                          "<img src='file:////Users/kleameta/Desktop/Women in STEM/tech.jpeg' width='450' height='300'>"
                          "</body></html>";

    ui->textBrowser->setHtml(htmlContent);

    ui->textBrowser->show();
    ui->pushButtonNext->hide();
    ui->pushButtonPrevious->hide();
    ui->pushButtonNext_3->hide();
    ui->pushButtonPrevious_3->hide();
    ui->pushButtonNext_4->hide();
    ui->pushButtonPrevious_4->hide();

    ui->pushButtonNext_2->show();
    ui->pushButtonPrevious_2->show();

}


void SecWindow::on_pushButtonNext_2_clicked()
{

    if (clickCountNext1 % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/tech1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/tech1img.jpg' width='300' height='300'></div><br>" + content + "</body></html>";


        ui->textBrowser->setHtml(content);

    } else if (clickCountNext1 % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/tech2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/tech2img.jpeg' width='300' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);

    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/tech3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/tech3img.jpeg' width='300' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    }
    clickCountNext1++;}

void SecWindow::on_pushButtonPrevious_2_clicked()
{

    if (clickCountPrevious1 % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/tech1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/tech1img.jpg' width='300' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);

    } else if (clickCountPrevious1 % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/tech2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/tech2img.jpeg' width='300' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);

    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/tech3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/tech3img.jpeg' width='300' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    }

    clickCountPrevious1++;
}



void SecWindow::on_pushButton_6_clicked()
{
    QString htmlContent = "<html><body style='text-align: center;'>"
                          "<h1 style='font-size: 60px;'><b>ROLE MODELS IN ENGINEERING</b></h1>"
                          "<br>"
                          "<img src='file:////Users/kleameta/Desktop/Women in STEM/eng.jpeg' width='450' height='300'>"
                          "</body></html>";

    ui->textBrowser->setHtml(htmlContent);
    ui->textBrowser->show();
    ui->pushButtonNext->hide();
    ui->pushButtonPrevious->hide();
    ui->pushButtonNext_4->hide();
    ui->pushButtonPrevious_4->hide();
    ui->pushButtonNext_2->hide();
    ui->pushButtonPrevious_2->hide();

    ui->pushButtonNext_3->show();
    ui->pushButtonPrevious_3->show();

}





void SecWindow::on_pushButtonNext_3_clicked()
{

    if (clickCountNext3 % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/eng1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/eng1img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else if (clickCountNext3 % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/eng2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/eng2img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/eng3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/eng3img.jpg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    }
    clickCountNext3++;
}

void SecWindow::on_pushButtonPrevious_3_clicked()
{

    if (clickCountPrevious3 % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/eng1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/eng1img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else if (clickCountPrevious3 % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/eng2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/eng2img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/eng3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/eng3img.jpg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    }

    clickCountPrevious3++;
}


void SecWindow::on_pushButton_5_clicked()
{
    QString htmlContent = "<html><body style='text-align: center;'>"
                          "<h1 style='font-size: 60px;'><b>ROLE MODELS IN MATHEMATICS</b></h1>"
                          "<br>"
                          "<img src='file:////Users/kleameta/Desktop/Women in STEM/math.png' width='450' height='300'>"
                          "</body></html>";

    ui->textBrowser->setHtml(htmlContent);
    ui->textBrowser->show();
    ui->pushButtonNext->hide();
    ui->pushButtonPrevious->hide();
    ui->pushButtonNext_3->hide();
    ui->pushButtonPrevious_3->hide();
    ui->pushButtonNext_2->hide();
    ui->pushButtonPrevious_2->hide();


    ui->pushButtonNext_4->show();
    ui->pushButtonPrevious_4->show();

}





void SecWindow::on_pushButtonNext_4_clicked()
{


    if (clickCountNext4 % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/math1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/math1img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else if (clickCountNext4 % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/math2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/math2img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/math3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/math3img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    }
    clickCountNext4++;
}

void SecWindow::on_pushButtonPrevious_4_clicked()
{

    if ( clickCountPrevious4 % 3 == 1) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/math1.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/math1img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);
    } else if ( clickCountPrevious4 % 3 == 2) {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/math2.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/math2img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);    } else {
        QString filePath = "/Users/kleameta/Desktop/Women in STEM/math3.txt";
        QString content = readFromFile(filePath);
        content.replace("\n", "<br>");
        content = "<html><body style='color: #110182; font-size: 18px;'><div style='text-align: center;'><img src='/Users/kleameta/Desktop/Women in STEM/math3img.jpeg' width='350' height='300'></div><br>" + content + "</body></html>";
        ui->textBrowser->setHtml(content);    }


    clickCountPrevious4++;
}




