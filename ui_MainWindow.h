/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QLabel *imageLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(844, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:\n"
"qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(239, 223, 244, 255), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.650246 rgba(184, 235, 177, 64), stop:0.721925 rgba(255, 255, 255, 129), stop:0.837438 rgba(255, 190, 236, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0))"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(640, 10, 191, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(20);
        font.setBold(false);
        label_3->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 120, 741, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font1.setPointSize(30);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"\n"
" {\n"
"background-color: none;\n"
"  color: black;\n"
"  padding: 6px;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 230, 331, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(21);
        font2.setBold(false);
        font2.setItalic(false);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(450, 230, 311, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(21);
        pushButton_5->setFont(font3);
        pushButton_5->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(60, 320, 331, 61));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(450, 320, 311, 61));
        pushButton_6->setFont(font3);
        pushButton_6->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(210, 400, 411, 61));
        pushButton_7->setFont(font3);
        pushButton_7->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 30, 100, 32));
        pushButton->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(470, 0, 161, 61));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color:none"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 844, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "GetEncouraged", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CREATED BY WOMEN AND DEDICATED TO WOMEN", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Find my role model", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Share your story", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Find my mentor", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Become a mentor", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Read stories from BMCC students", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "About Us", nullptr));
        imageLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
