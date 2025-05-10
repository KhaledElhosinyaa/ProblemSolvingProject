/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *Subject1;
    QLineEdit *Subject2;
    QLineEdit *Subject3;
    QLineEdit *Subject4;
    QLineEdit *Subject5;
    QLineEdit *Subject6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *NoSubjects;
    QLabel *label_9;
    QLineEdit *Total;
    QLabel *label_10;
    QLineEdit *Avg;
    QLabel *label_11;
    QLineEdit *Grade;
    QPushButton *Calculate;
    QLabel *label_12;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(521, 608);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 40, 91, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 80, 91, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 120, 91, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 160, 91, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 210, 91, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 250, 91, 31));
        Subject1 = new QLineEdit(centralwidget);
        Subject1->setObjectName("Subject1");
        Subject1->setGeometry(QRect(140, 40, 261, 28));
        Subject2 = new QLineEdit(centralwidget);
        Subject2->setObjectName("Subject2");
        Subject2->setGeometry(QRect(140, 80, 261, 28));
        Subject3 = new QLineEdit(centralwidget);
        Subject3->setObjectName("Subject3");
        Subject3->setGeometry(QRect(140, 120, 261, 28));
        Subject4 = new QLineEdit(centralwidget);
        Subject4->setObjectName("Subject4");
        Subject4->setGeometry(QRect(140, 170, 261, 28));
        Subject5 = new QLineEdit(centralwidget);
        Subject5->setObjectName("Subject5");
        Subject5->setGeometry(QRect(140, 210, 261, 28));
        Subject6 = new QLineEdit(centralwidget);
        Subject6->setObjectName("Subject6");
        Subject6->setGeometry(QRect(140, 250, 261, 28));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 0, 241, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 300, 141, 31));
        NoSubjects = new QLineEdit(centralwidget);
        NoSubjects->setObjectName("NoSubjects");
        NoSubjects->setGeometry(QRect(180, 300, 151, 28));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 350, 71, 31));
        Total = new QLineEdit(centralwidget);
        Total->setObjectName("Total");
        Total->setGeometry(QRect(80, 350, 91, 28));
        Total->setReadOnly(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(180, 350, 71, 31));
        Avg = new QLineEdit(centralwidget);
        Avg->setObjectName("Avg");
        Avg->setGeometry(QRect(250, 350, 91, 28));
        Avg->setReadOnly(true);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(360, 350, 61, 31));
        Grade = new QLineEdit(centralwidget);
        Grade->setObjectName("Grade");
        Grade->setGeometry(QRect(410, 350, 91, 28));
        Grade->setReadOnly(true);
        Calculate = new QPushButton(centralwidget);
        Calculate->setObjectName("Calculate");
        Calculate->setGeometry(QRect(420, 300, 83, 29));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(340, 300, 71, 31));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Subject 1 :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Subject 2 :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Subject 3 :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Subject 4 :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Subject 5 :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Subject 6 :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Up to 6 subjects together", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Number of subjects : ", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Total :", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Average :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Grade :", nullptr));
        Calculate->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Calculate :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
