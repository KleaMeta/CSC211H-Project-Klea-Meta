#ifndef SEVWINDOW_H
#define SEVWINDOW_H
#include "ui_sevwindow.h"

#include <QDialog>
class MainWindow;

namespace Ui {
class SevWindow;
}

class SevWindow: public QDialog
{
    Q_OBJECT

public:
    explicit SevWindow(QWidget *parent = nullptr);
    ~SevWindow();

private slots:

    void on_pushButton_9_clicked();
    void displayBMCCstory();
private:
    Ui::SevWindow *ui;
    MainWindow *mainwindow;
    QString imagePath;
};

#endif
