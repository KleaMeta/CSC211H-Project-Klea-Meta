
#ifndef FOURWINDOW_H
#define FOURWINDOW_H
#include "ui_fourwindow.h"

class MainWindow;

#include <QDialog>

namespace Ui {class FourWindow;}

class FourWindow: public QDialog
{
    Q_OBJECT

public:
    explicit FourWindow(QWidget *parent = nullptr);
    ~FourWindow();

private slots:
    void on_pushButton_6_clicked();
    void on_saveButton_clicked();
    void saveInput();

private:
    Ui::FourWindow *ui;
    MainWindow *mainwindow;
    QString imagePath;
};

#endif
