/********************************************************************************
** Form generated from reading UI file 'SixWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIXWINDOW_H
#define UI_SIXWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SixWindow
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_9;
    QLabel *imageLabel;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *SixWindow)
    {
        if (SixWindow->objectName().isEmpty())
            SixWindow->setObjectName("SixWindow");
        SixWindow->resize(855, 485);
        label = new QLabel(SixWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 381, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(24);
        label->setFont(font);
        textBrowser = new QTextBrowser(SixWindow);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 100, 811, 271));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        pushButton_9 = new QPushButton(SixWindow);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(630, 20, 181, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Andale Mono")});
        font1.setPointSize(19);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("border:none"));
        imageLabel = new QLabel(SixWindow);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(480, 10, 161, 51));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color:none"));
        label_2 = new QLabel(SixWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(560, 380, 91, 21));
        QFont font2;
        font2.setPointSize(18);
        font2.setItalic(true);
        font2.setUnderline(true);
        label_2->setFont(font2);
        label_3 = new QLabel(SixWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, 410, 58, 16));
        label_4 = new QLabel(SixWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(560, 430, 91, 16));
        label_5 = new QLabel(SixWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(560, 450, 58, 16));
        label_6 = new QLabel(SixWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(670, 410, 181, 16));
        label_7 = new QLabel(SixWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(670, 430, 111, 16));
        label_8 = new QLabel(SixWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(670, 450, 81, 16));

        retranslateUi(SixWindow);

        QMetaObject::connectSlotsByName(SixWindow);
    } // setupUi

    void retranslateUi(QDialog *SixWindow)
    {
        SixWindow->setWindowTitle(QCoreApplication::translate("SixWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SixWindow", "About GetEncouraged", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("SixWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#428a5e;\">GetEncourageed started as a project for my honours CSC211 class when I was at Borough of Manhattan Community College. I had the option to choose between some topics, where we as BMCC students needed to use our knowledge from 211H to solve them.Remembering my first day of that class when I saw 3 women in total being part of the class, I immedia"
                        "tely though that &quot;Diversity in STEM&quot; is the problem I want to solve, or at least contribute as much as I can in solving it. I chose to narrow it down to &quot;Women in STEM&quot; becasue I feel more impacted by that topic. GetEncouraged is created to be a safe place for every women struggling with their STEM major where they can meet and get inspired by people that have already gone through that path. Not only that, but this app gives you the opportunity to help in this issue by sharing your story that may inspire other people and by giving you a chance to become a mentor if you really think that you are a perfect fit for that role. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; color:#428a5e;\">GET ENCOURAGED whenever you want to!</span></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("SixWindow", "GetEncouraged", nullptr));
        imageLabel->setText(QCoreApplication::translate("SixWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SixWindow", "Contact Us ", nullptr));
        label_3->setText(QCoreApplication::translate("SixWindow", "email", nullptr));
        label_4->setText(QCoreApplication::translate("SixWindow", "phone number", nullptr));
        label_5->setText(QCoreApplication::translate("SixWindow", "location", nullptr));
        label_6->setText(QCoreApplication::translate("SixWindow", "getEncouraged12@cuny.edu", nullptr));
        label_7->setText(QCoreApplication::translate("SixWindow", "+ 1 8005467332", nullptr));
        label_8->setText(QCoreApplication::translate("SixWindow", "Room 43H", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SixWindow: public Ui_SixWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIXWINDOW_H
