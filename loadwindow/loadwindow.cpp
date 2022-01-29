#include "loadwindow.h"
#include "./ui_loadwindow.h"
#include"../mainwindow/mainw.h"
#include<QWidget>
#include <fstream>
#include <iostream>
#include <QString>
#include <QFile>
#include"../project/mainwindow.h"
loadwindow::loadwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loadwindow)
{

    ui->setupUi(this);
    connect(ui->pushButton_3,SIGNAL(clicked()) , this , SLOT(rmfile()));//signal for remove file
    this->setWindowTitle("Loads");//set title name
    std::ifstream file;
    file.open("savedfilenames.txt",std::ios::in);//open exist file for reaing
    std::string filename;
    while(file.good())
    {
        file>>filename;//read from file
        ui->listWidget->addItem(QString::fromUtf8( filename.data(), filename.size() ));//show in list Widget
    }
}
loadwindow::~loadwindow()
{
    delete ui;
}
void loadwindow::on_pushButton_clicked()
{

    hide();//open game window
    l = new Mainw(this,ui->listWidget->currentItem()->text());
    l->show();
}
void loadwindow::rmfile()
{
    std::ifstream file1;
    file1.open("savedfilenames.txt", std::ios::in);//open exist file to read
    std::ofstream file2;
    file2.open("backup.txt" , std::ios::out);//open new file to write
    QString qstr = ui->listWidget->currentItem()->text();
    std::string filename ,str = qstr.toStdString();
    while(file1.good())
    {
        file1>>filename;//read from first file
        if(filename != str)//if str is not equal to selected item
        {

            file2<<" "<<filename;//write in file
        }
    }
    file1.close();
    file2.close();
    remove("savedfilenames.txt");//remove first file
    std::rename("backup.txt" , "savedfilenames.txt");//rename to savedfilenames
    QFile::remove(qstr+".json");//remove json file
    QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete it;//delete item from list widget
}
void loadwindow::on_pushButton_2_clicked()
{

    hide();
    MainWindow * a;
    a= new MainWindow(this);
    a->show();//back to main window
}
