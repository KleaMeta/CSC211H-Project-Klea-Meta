#include "BaseWindow.h"
#include "MainWindow.h"
#include "SecWindow.h"
#include "ThirWindow.h"
#include "FourWindow.h"
#include "FivWindow.h"
#include "SixWindow.h"
#include "SevWindow.h"

BaseWindow::BaseWindow(QWidget *parent) : QWidget(parent)
{
}

BaseWindow::~BaseWindow()
{
}

void BaseWindow::closeOtherWindows()
{
    QWidgetList windows = QApplication::topLevelWidgets();
    for (QWidget *window : windows)
    {
        if (window != this)
            window->close();
    }
}
