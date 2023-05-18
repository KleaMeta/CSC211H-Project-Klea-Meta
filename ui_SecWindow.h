/********************************************************************************
** Form generated from reading UI file 'SecWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECWINDOW_H
#define UI_SECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SecWindow
{
public:
    QLabel *label;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButtonNext;
    QPushButton *pushButtonNext_2;
    QPushButton *pushButtonPrevious;
    QPushButton *pushButtonPrevious_2;
    QPushButton *pushButtonPrevious_3;
    QPushButton *pushButtonNext_3;
    QPushButton *pushButtonPrevious_4;
    QPushButton *pushButtonNext_4;
    QTextBrowser *textBrowser;
    QLabel *imageLabel;

    void setupUi(QDialog *SecWindow)
    {
        if (SecWindow->objectName().isEmpty())
            SecWindow->setObjectName("SecWindow");
        SecWindow->resize(865, 561);
        SecWindow->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setPointSize(15);
        SecWindow->setFont(font);
        SecWindow->setStyleSheet(QString::fromUtf8("QDialog {color: black; background-color: #FDFEEB  ; border: none; }"));
        label = new QLabel(SecWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 731, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font1.setPointSize(31);
        font1.setItalic(true);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_4 = new QPushButton(SecWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 220, 181, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(25);
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_5 = new QPushButton(SecWindow);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(40, 430, 171, 35));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(26);
        pushButton_5->setFont(font3);
        pushButton_5->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_6 = new QPushButton(SecWindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(30, 360, 181, 35));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_7 = new QPushButton(SecWindow);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(30, 290, 181, 35));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font4.setPointSize(27);
        pushButton_7->setFont(font4);
        pushButton_7->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_9 = new QPushButton(SecWindow);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(660, 10, 181, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Andale Mono")});
        font5.setPointSize(21);
        pushButton_9->setFont(font5);
        pushButton_9->setStyleSheet(QString::fromUtf8("border:none"));
        pushButtonNext = new QPushButton(SecWindow);
        pushButtonNext->setObjectName("pushButtonNext");
        pushButtonNext->setGeometry(QRect(790, 290, 31, 31));
        pushButtonNext->setStyleSheet(QString::fromUtf8(""));
        pushButtonNext_2 = new QPushButton(SecWindow);
        pushButtonNext_2->setObjectName("pushButtonNext_2");
        pushButtonNext_2->setGeometry(QRect(790, 290, 31, 31));
        pushButtonNext_2->setStyleSheet(QString::fromUtf8(""));
        pushButtonPrevious = new QPushButton(SecWindow);
        pushButtonPrevious->setObjectName("pushButtonPrevious");
        pushButtonPrevious->setGeometry(QRect(250, 290, 31, 31));
        pushButtonPrevious->setStyleSheet(QString::fromUtf8(""));
        pushButtonPrevious_2 = new QPushButton(SecWindow);
        pushButtonPrevious_2->setObjectName("pushButtonPrevious_2");
        pushButtonPrevious_2->setGeometry(QRect(250, 290, 31, 31));
        pushButtonPrevious_2->setStyleSheet(QString::fromUtf8(""));
        pushButtonPrevious_3 = new QPushButton(SecWindow);
        pushButtonPrevious_3->setObjectName("pushButtonPrevious_3");
        pushButtonPrevious_3->setGeometry(QRect(250, 290, 31, 31));
        pushButtonPrevious_3->setStyleSheet(QString::fromUtf8(""));
        pushButtonNext_3 = new QPushButton(SecWindow);
        pushButtonNext_3->setObjectName("pushButtonNext_3");
        pushButtonNext_3->setGeometry(QRect(790, 290, 31, 31));
        pushButtonNext_3->setStyleSheet(QString::fromUtf8(""));
        pushButtonPrevious_4 = new QPushButton(SecWindow);
        pushButtonPrevious_4->setObjectName("pushButtonPrevious_4");
        pushButtonPrevious_4->setGeometry(QRect(250, 290, 31, 31));
        pushButtonPrevious_4->setStyleSheet(QString::fromUtf8(""));
        pushButtonNext_4 = new QPushButton(SecWindow);
        pushButtonNext_4->setObjectName("pushButtonNext_4");
        pushButtonNext_4->setGeometry(QRect(790, 290, 31, 31));
        pushButtonNext_4->setStyleSheet(QString::fromUtf8(""));
        textBrowser = new QTextBrowser(SecWindow);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(280, 120, 511, 421));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        imageLabel = new QLabel(SecWindow);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(490, 0, 161, 61));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color:none"));

        retranslateUi(SecWindow);

        QMetaObject::connectSlotsByName(SecWindow);
    } // setupUi

    void retranslateUi(QDialog *SecWindow)
    {
        SecWindow->setWindowTitle(QCoreApplication::translate("SecWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecWindow", "<html><head/><body><p><span style=\" color:#151a0a;\">Choose your preferred STEM field:</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SecWindow", "Science", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SecWindow", "Math", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SecWindow", "Engineering", nullptr));
        pushButton_7->setText(QCoreApplication::translate("SecWindow", "Technology", nullptr));
        pushButton_9->setText(QCoreApplication::translate("SecWindow", "GetEncouraged", nullptr));
        pushButtonNext->setText(QCoreApplication::translate("SecWindow", "->", nullptr));
        pushButtonNext_2->setText(QCoreApplication::translate("SecWindow", "->", nullptr));
        pushButtonPrevious->setText(QCoreApplication::translate("SecWindow", "<-", nullptr));
        pushButtonPrevious_2->setText(QCoreApplication::translate("SecWindow", "<-", nullptr));
        pushButtonPrevious_3->setText(QCoreApplication::translate("SecWindow", "<-", nullptr));
        pushButtonNext_3->setText(QCoreApplication::translate("SecWindow", "->", nullptr));
        pushButtonPrevious_4->setText(QCoreApplication::translate("SecWindow", "<-", nullptr));
        pushButtonNext_4->setText(QCoreApplication::translate("SecWindow", "->", nullptr));
        imageLabel->setText(QCoreApplication::translate("SecWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecWindow: public Ui_SecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECWINDOW_H
