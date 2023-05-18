#ifndef FIVWINDOW_H
#define FIVWINDOW_H
#include "ui_fivwindow.h"

class MainWindow;

#include <QDialog>

namespace Ui {class FivWindow;}

class FivWindow: public QDialog
{
    Q_OBJECT

public:
    explicit FivWindow(QWidget *parent = nullptr);
    ~FivWindow();

private slots:

    void on_pushButton_9_clicked();
    void on_saveButton_clicked();
    void saveInput();

private:
    Ui::FivWindow *ui;
    MainWindow *mainwindow;
    FivWindow *fivwindow;
    QString imagePath;
};

#endif
