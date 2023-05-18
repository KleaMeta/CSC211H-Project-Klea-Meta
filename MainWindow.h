
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class SecWindow;
class ThirWindow;
class FourWindow;
class FivWindow;
class SixWindow;
class SevWindow;
#include "ui_MainWindow.h"
#include "ui_SecWindow.h"
#include "ui_ThirWindow.h"
#include "ui_FourWindow.h"
#include "ui_FivWindow.h"
#include "ui_SixWindow.h"
#include "ui_SevWindow.h"
#include "ui_mainwindow.h"
#include <QFile>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent= nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    SecWindow *secwindow;
    ThirWindow *thirwindow;
    FourWindow *fourwindow;
    FivWindow *fivwindow;
    SixWindow *sixwindow;
    SevWindow *sevwindow;
    QString imagePath;



};

#endif

