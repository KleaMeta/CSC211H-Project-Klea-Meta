/********************************************************************************
** Form generated from reading UI file 'FivWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIVWINDOW_H
#define UI_FIVWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FivWindow
{
public:
    QLabel *label;
    QPushButton *pushButton_9;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *saveButton;
    QTextEdit *textInput;
    QTextEdit *textInput2;
    QTextEdit *textInput3;
    QTextEdit *textInput4;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *imageLabel;

    void setupUi(QDialog *FivWindow)
    {
        if (FivWindow->objectName().isEmpty())
            FivWindow->setObjectName("FivWindow");
        FivWindow->resize(865, 554);
        label = new QLabel(FivWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 70, 831, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font.setPointSize(17);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_9 = new QPushButton(FivWindow);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(650, 20, 181, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Andale Mono")});
        font1.setPointSize(19);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("border:none"));
        label_3 = new QLabel(FivWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 110, 151, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(18);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        label_4 = new QLabel(FivWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 140, 71, 21));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("border:none"));
        label_5 = new QLabel(FivWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 170, 61, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("border:none"));
        saveButton = new QPushButton(FivWindow);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(330, 510, 211, 41));
        QFont font3;
        font3.setPointSize(21);
        font3.setBold(true);
        saveButton->setFont(font3);
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background-color:#FDFEEB  ;\n"
"}"));
        textInput = new QTextEdit(FivWindow);
        textInput->setObjectName("textInput");
        textInput->setGeometry(QRect(120, 110, 381, 21));
        textInput->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB\n"
""));
        textInput2 = new QTextEdit(FivWindow);
        textInput2->setObjectName("textInput2");
        textInput2->setGeometry(QRect(120, 140, 381, 21));
        textInput2->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB\n"
""));
        textInput3 = new QTextEdit(FivWindow);
        textInput3->setObjectName("textInput3");
        textInput3->setGeometry(QRect(120, 170, 381, 21));
        textInput3->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB\n"
""));
        textInput4 = new QTextEdit(FivWindow);
        textInput4->setObjectName("textInput4");
        textInput4->setGeometry(QRect(30, 260, 811, 241));
        textInput4->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB\n"
""));
        label_2 = new QLabel(FivWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 200, 831, 31));
        label_2->setFont(font);
        label_6 = new QLabel(FivWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 230, 491, 21));
        label_6->setFont(font);
        imageLabel = new QLabel(FivWindow);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(490, 10, 161, 61));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color:none"));

        retranslateUi(FivWindow);

        QMetaObject::connectSlotsByName(FivWindow);
    } // setupUi

    void retranslateUi(QDialog *FivWindow)
    {
        FivWindow->setWindowTitle(QCoreApplication::translate("FivWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FivWindow", "Your story can have an impact at someone's life so feel free to share it with us. ", nullptr));
        pushButton_9->setText(QCoreApplication::translate("FivWindow", "GetEncouraged", nullptr));
        label_3->setText(QCoreApplication::translate("FivWindow", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("FivWindow", "Age:", nullptr));
        label_5->setText(QCoreApplication::translate("FivWindow", "Major: ", nullptr));
        saveButton->setText(QCoreApplication::translate("FivWindow", "Share your story", nullptr));
        label_2->setText(QCoreApplication::translate("FivWindow", "Tell us about your decision to study a STEM major and what impact has BMCC had ", nullptr));
        label_6->setText(QCoreApplication::translate("FivWindow", "on your journey so far:", nullptr));
        imageLabel->setText(QCoreApplication::translate("FivWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FivWindow: public Ui_FivWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIVWINDOW_H
