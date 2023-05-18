/********************************************************************************
** Form generated from reading UI file 'FourWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURWINDOW_H
#define UI_FOURWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FourWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_8;
    QPushButton *saveButton;
    QPushButton *pushButton_6;
    QTextEdit *textInput;
    QTextEdit *textInput4;
    QTextEdit *textInput3;
    QTextEdit *textInput2;
    QLabel *imageLabel;

    void setupUi(QDialog *FourWindow)
    {
        if (FourWindow->objectName().isEmpty())
            FourWindow->setObjectName("FourWindow");
        FourWindow->resize(821, 454);
        FourWindow->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(FourWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 731, 91));
        QFont font;
        font.setPointSize(21);
        font.setUnderline(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("backgroung-color:none"));
        label_2 = new QLabel(FourWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 110, 291, 21));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_3 = new QLabel(FourWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 621, 21));
        QFont font2;
        font2.setPointSize(17);
        label_3->setFont(font2);
        label_4 = new QLabel(FourWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 180, 621, 21));
        label_4->setFont(font2);
        label_6 = new QLabel(FourWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 220, 621, 21));
        label_6->setFont(font2);
        label_8 = new QLabel(FourWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 270, 621, 21));
        QFont font3;
        font3.setPointSize(18);
        label_8->setFont(font3);
        saveButton = new QPushButton(FourWindow);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(360, 400, 91, 41));
        QFont font4;
        font4.setPointSize(21);
        font4.setBold(true);
        saveButton->setFont(font4);
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background-color:#FDFEEB  ;\n"
"}"));
        pushButton_6 = new QPushButton(FourWindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(620, 10, 181, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Andale Mono")});
        font5.setPointSize(19);
        pushButton_6->setFont(font5);
        pushButton_6->setStyleSheet(QString::fromUtf8("border:none"));
        textInput = new QTextEdit(FourWindow);
        textInput->setObjectName("textInput");
        textInput->setGeometry(QRect(130, 140, 631, 21));
        textInput->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        textInput4 = new QTextEdit(FourWindow);
        textInput4->setObjectName("textInput4");
        textInput4->setGeometry(QRect(40, 310, 721, 81));
        textInput4->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        textInput3 = new QTextEdit(FourWindow);
        textInput3->setObjectName("textInput3");
        textInput3->setGeometry(QRect(130, 220, 631, 21));
        textInput3->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        textInput2 = new QTextEdit(FourWindow);
        textInput2->setObjectName("textInput2");
        textInput2->setGeometry(QRect(130, 180, 631, 21));
        textInput2->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        imageLabel = new QLabel(FourWindow);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(470, 10, 161, 51));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color:none"));

        retranslateUi(FourWindow);

        QMetaObject::connectSlotsByName(FourWindow);
    } // setupUi

    void retranslateUi(QDialog *FourWindow)
    {
        FourWindow->setWindowTitle(QCoreApplication::translate("FourWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FourWindow", "To get involved with GetEncoureged, you can become the newest memeber of us !! ", nullptr));
        label_2->setText(QCoreApplication::translate("FourWindow", "Fill out the form below to apply:", nullptr));
        label_3->setText(QCoreApplication::translate("FourWindow", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("FourWindow", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("FourWindow", "Your Major:", nullptr));
        label_8->setText(QCoreApplication::translate("FourWindow", "What would you like to tell your prospective mentee in a short presentation about yourself?", nullptr));
        saveButton->setText(QCoreApplication::translate("FourWindow", "Apply", nullptr));
        pushButton_6->setText(QCoreApplication::translate("FourWindow", "GetEncouraged", nullptr));
        imageLabel->setText(QCoreApplication::translate("FourWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FourWindow: public Ui_FourWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURWINDOW_H
