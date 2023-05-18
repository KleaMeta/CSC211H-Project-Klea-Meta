/********************************************************************************
** Form generated from reading UI file 'ThirWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRWINDOW_H
#define UI_THIRWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ThirWindow
{
public:
    QPushButton *pushButton_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextBrowser *textBrowser;
    QLabel *imageLabel;
    QPushButton *pushButton_7;

    void setupUi(QDialog *ThirWindow)
    {
        if (ThirWindow->objectName().isEmpty())
            ThirWindow->setObjectName("ThirWindow");
        ThirWindow->resize(878, 581);
        pushButton_6 = new QPushButton(ThirWindow);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(680, 10, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Andale Mono")});
        font.setPointSize(22);
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("border:none"));
        label = new QLabel(ThirWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 481, 33));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font1.setPointSize(30);
        label->setFont(font1);
        label_2 = new QLabel(ThirWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 110, 228, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(18);
        font2.setUnderline(true);
        label_2->setFont(font2);
        pushButton = new QPushButton(ThirWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 140, 85, 32));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font3.setPointSize(20);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_2 = new QPushButton(ThirWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 140, 131, 32));
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_3 = new QPushButton(ThirWindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 140, 141, 32));
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("border:none"));
        pushButton_4 = new QPushButton(ThirWindow);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(510, 140, 62, 32));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("border:none"));
        textBrowser = new QTextBrowser(ThirWindow);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 180, 831, 381));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:#FDFEEB"));
        imageLabel = new QLabel(ThirWindow);
        imageLabel->setObjectName("imageLabel");
        imageLabel->setGeometry(QRect(490, 10, 191, 51));
        imageLabel->setStyleSheet(QString::fromUtf8("background-color:none;"));
        pushButton_7 = new QPushButton(ThirWindow);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(590, 140, 271, 32));
        QFont font4;
        font4.setPointSize(20);
        pushButton_7->setFont(font4);
        pushButton_7->setStyleSheet(QString::fromUtf8("border:none"));

        retranslateUi(ThirWindow);

        QMetaObject::connectSlotsByName(ThirWindow);
    } // setupUi

    void retranslateUi(QDialog *ThirWindow)
    {
        ThirWindow->setWindowTitle(QCoreApplication::translate("ThirWindow", "Dialog", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ThirWindow", "GetEncouraged", nullptr));
        label->setText(QCoreApplication::translate("ThirWindow", "Connect with your mentor", nullptr));
        label_2->setText(QCoreApplication::translate("ThirWindow", "Pick your STEM field:", nullptr));
        pushButton->setText(QCoreApplication::translate("ThirWindow", "Science", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ThirWindow", "Technology", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ThirWindow", "Engineering", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ThirWindow", "Math", nullptr));
        imageLabel->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("ThirWindow", "Student-Mentors from BMCC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirWindow: public Ui_ThirWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRWINDOW_H
