#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Welcome to my program");//set title name
    ui->pushButton->setText("شروع بازی");
    ui->pushButton_2->setText("بازی های ذخیره شده");
    ui->pushButton_3->setText("خروج");
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    hide();
    m = new Mainw(this);
    m->show();//show game window
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    l = new loadwindow(this);
    l->show();//show loads window
}
