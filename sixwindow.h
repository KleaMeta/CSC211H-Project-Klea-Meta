#ifndef SIXWINDOW_H
#define SIXWINDOW_H
#include "ui_sixwindow.h"


class MainWindow;

#include <QDialog>

namespace Ui {class SixWindow;}

class SixWindow: public QDialog
{
    Q_OBJECT

public:
    explicit SixWindow(QWidget *parent = nullptr);
    ~SixWindow();

private slots:

    void on_pushButton_9_clicked();


private:
    Ui::SixWindow *ui;
    MainWindow *mainwindow;
    QString imagePath;
};

#endif
