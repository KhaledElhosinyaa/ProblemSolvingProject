#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




int sub1, sub2, sub3, sub4, sub5, sub6, tot, avg, subjno;
char grade;

void MainWindow::on_Calculate_clicked()
{
    sub1 = ui->Subject1->text().toInt();
    sub2 = ui->Subject2->text().toInt();
    sub3 = ui->Subject3->text().toInt();
    sub4 = ui->Subject4->text().toInt();
    sub5 = ui->Subject5->text().toInt();
    sub6 = ui->Subject6->text().toInt();
    subjno = ui->NoSubjects->text().toInt();
    tot = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
    avg = (sub1+sub2+sub3+sub4+sub5+sub6) / subjno;
    if(avg>=90){
        grade = 'A';
    }
    else if(avg<90 && avg>=80){
        grade = 'B';
    }
    else if(avg < 80 && avg >=70){
        grade = 'C';
    }
    else if(avg < 70 && avg >=60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
    ui->Total->setText(QString::number(tot));
    ui->Avg->setText(QString::number(avg));
    ui->Grade->setText(QString(grade));

}

