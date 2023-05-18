
#ifndef SECWINDOW_H
#define SECWINDOW_H
#include "ui_secwindow.h"
#include "ui_SixWindow.h"

class SixWindow;
class MainWindow;

#include <QDialog>

namespace Ui {class SecWindow;}

class SecWindow: public QDialog
{
    Q_OBJECT

public:
    explicit SecWindow(QWidget *parent = nullptr);
    ~SecWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButtonPrevious_clicked();
    void on_pushButtonNext_clicked();

    void on_pushButtonPrevious_2_clicked();
    void on_pushButtonNext_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButtonNext_3_clicked();
    void on_pushButtonPrevious_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButtonNext_4_clicked();
    void on_pushButtonPrevious_4_clicked();

     QString readFromFile(const QString& filePath);





private:
    Ui::SecWindow *ui;
     MainWindow *mainwindow;
    SixWindow *sixwindow;
    int clickCountNext=0;
    int clickCountPrevious=0;
    int clickCountNext1=0;
    int clickCountPrevious1=0;
    int clickCountPrevious3=0;
    int clickCountNext3=0;
    int clickCountPrevious4=0;
    int clickCountNext4=0;
     QString imagePath;

};

#endif



