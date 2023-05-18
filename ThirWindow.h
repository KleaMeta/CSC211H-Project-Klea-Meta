
#ifndef THIRWINDOW_H
#define THIRWINDOW_H
#include "ui_ThirWindow.h"

class MainWindow;

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QtGui>
#include <QLabel>
#include <QPixmap>



namespace Ui {class ThirWindow;}

class ThirWindow: public QDialog
{
    Q_OBJECT

public:
    explicit ThirWindow(QWidget *parent = nullptr);
    ~ThirWindow();

private slots:

    void on_pushButton_6_clicked();
    void displayScience();
    void displayTechnology();
    void displayEngineering();
    void displayMath();
    void displayImage();
    void displayBMCCMentor();





private:
    Ui::ThirWindow *ui;
    MainWindow *mainwindow;

    QString imagePath;


};

#endif

