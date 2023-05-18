/********************************************************************************
** Form generated from reading UI file 'SevWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEVWINDOW_H
#define UI_SEVWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SevWindow
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton;
    QLabel *imageLabel;

    void setupUi(QDialog *SevWindow)
    {
        if (SevWindow->objectName().isEmpty())
            SevWindow->setObjectName("SevWindow");
        SevWindow->resize(950, 533);
        textBrowser = new QTextBrowser(SevWindow);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 170, 561, 341));
        textBrowser->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        label = new QLabel(SevWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 80, 731, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font1.setPointSize(30);
        label->setFont(font1);
        textBrowser_2 = new QTextBrowser(SevWindow);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(590, 220, 321, 201));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(17);
        textBrowser_2->setFont(font2);
        textBrowser_2->setStyleSheet(QString::fromUtf8("background:none"));
        pushButton_9 = new QPushButton(SevWindow);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(670, 10, 211, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Andale Mono")});
        font3.setPointSize(25);
        pushButton_9->setFont(font3);
        pushButton_9->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton = new QPushButton(SevWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 130, 381, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font4.setPointSize(18);
        pushButton->setFont(font4);
        imageLabel = new QLabel(SevWindow);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(510, 0, 161, 51));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color:none"));

        retranslateUi(SevWindow);

        QMetaObject::connectSlotsByName(SevWindow);
    } // setupUi

    void retranslateUi(QDialog *SevWindow)
    {
        SevWindow->setWindowTitle(QCoreApplication::translate("SevWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SevWindow", "GetEncouraged by BMCC students.", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("SevWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans Mono'; font-size:17pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:18pt;\">BMCC is one of the most diverse campuses in New York City, so if you are looking for a little bit of inspiration, you are on the right place.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUI"
                        "Font'; font-size:18pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.AppleSystemUIFont'; font-size:18pt;\">Read about the experience of women in STEM at &quot;Borough of Manhattan Commmunity College&quot;.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont'; font-size:18pt;\"><br /></p></body></html>", nullptr));
        pushButton_9->setText(QCoreApplication::translate("SevWindow", "GetEncouraged", nullptr));
        pushButton->setText(QCoreApplication::translate("SevWindow", "Read stories from BMCC students", nullptr));
        imageLabel->setText(QCoreApplication::translate("SevWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SevWindow: public Ui_SevWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEVWINDOW_H
