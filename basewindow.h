#ifndef BASEWINDOW_H
#define BASEWINDOW_H

#include <QWidget>

class BaseWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BaseWindow(QWidget *parent = nullptr);
    virtual ~BaseWindow();

    virtual void openWindow(BaseWindow *window) = 0;

protected:
    void closeOtherWindows();
};

#endif
