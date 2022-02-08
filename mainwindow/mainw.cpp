#include "mainw.h"
#include "./ui_mainw.h"
#include<QDebug>
#include <QFile>
#include<QPixmap>
#include<iostream>
#include<QString>
#include <fstream>
#include<QJsonObject>
#include <QJsonDocument>
#include <QMessageBox>
#include<QJsonValue>
#include <stdexcept>
#include <exception>
#include <string>
#include"../project/mainwindow.h"

Mainw::Mainw(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Mainw)
{

    ui->setupUi(this);
    connect(ui->pushButton_5,SIGNAL(clicked()) , this, SLOT(callbuycow()));
    connect(ui->pushButton_3,SIGNAL(clicked()) , this, SLOT(callbuyhen()));
    connect(ui->pushButton_2,SIGNAL(clicked()) , this, SLOT(callbuysheep()));
    connect(ui->pushButton_4,SIGNAL(clicked()) , this, SLOT(callbuyfeed()));
    connect(ui->sellcow , SIGNAL(clicked()) , this , SLOT(callsellcow()));
    connect(ui->sellcowmilk , SIGNAL(clicked()) , this , SLOT(callsellcowmilk()));
    connect(ui->sellcowyogurt , SIGNAL(clicked()) , this , SLOT(callsellcowyogurt()));
    connect(ui->sellcowcheese , SIGNAL(clicked()) , this , SLOT(callsellcowcheese()));
    connect(ui->sellsheep , SIGNAL(clicked()) , this , SLOT(callsellsheep()));
    connect(ui->sellsheepmilk , SIGNAL(clicked()) , this , SLOT(callsellsheepmilk()));
    connect(ui->sellhen , SIGNAL(clicked()) , this , SLOT(callsellhen()));
    connect(ui->sellhenegg , SIGNAL(clicked()) , this , SLOT(callsellhenegg()));
    connect(ui->milkp, SIGNAL(clicked()) , this , SLOT(callcowmilkproduct()));
    connect(ui->yogurtp, SIGNAL(clicked()) , this , SLOT(callcowyogurtproduct()));
    connect(ui->cheesep, SIGNAL(clicked()) , this , SLOT(callcowcheeseproduct()));
    connect(ui->eggp, SIGNAL(clicked()) , this , SLOT(callheneggproduct()));
    connect(ui->smilkp, SIGNAL(clicked()) , this , SLOT(callsheepmilkproduct()));
    this->setWindowTitle("New game");//set title name
    ui->money->setText("200");
    ui->feed->setText("20");
    showlabels();
}
void Mainw::showlabels()
{//show pictures in labels
    QPixmap pix("sheep.png");
    ui->label_3->setPixmap(pix.scaled(150,150 , Qt::KeepAspectRatio));
    int w =45;// ui->label_5->width();
    int h = 45;//ui->label_5->height();
    QPixmap money("money.png");
    ui->label_2->setPixmap(money.scaled(w,h , Qt::KeepAspectRatio));
    QPixmap feed("feed.png");
    ui->label_4->setPixmap(feed.scaled(w,h , Qt::KeepAspectRatio));
    QPixmap hen("hen.png");
    ui->label_5->setPixmap(hen.scaled(w,h , Qt::KeepAspectRatio));
    QPixmap egg("eggs.png");
    ui->label_12->setPixmap(egg.scaled(w,h , Qt::KeepAspectRatio));
    QPixmap sheep("sheep.png");
    ui->label_6->setPixmap(sheep.scaled(w,h , Qt::KeepAspectRatio));
    QPixmap milk("milk.png");
    ui->label_17->setPixmap(milk.scaled(w,h , Qt::KeepAspectRatio));
    ui->label_16->setPixmap(sheep.scaled(w,h , Qt::KeepAspectRatio));
    QPixmap cow("cow.png");
    ui->label_7->setPixmap(cow.scaled(w,h , Qt::KeepAspectRatio));
    ui->label_18->setPixmap(cow.scaled(w,h , Qt::KeepAspectRatio));
    ui->label_8->setPixmap(milk.scaled(w,h , Qt::KeepAspectRatio));
    QPixmap yogurt("yogurt.png");
    QPixmap cheese("cheese.png");
    ui->label_19->setPixmap(yogurt.scaled(w,h , Qt::KeepAspectRatio));
    ui->label_9->setPixmap(cheese.scaled(w,h , Qt::KeepAspectRatio));


}
Mainw::Mainw(QWidget *parent ,QString st)//open game window with file name
    : QMainWindow(parent)
    , ui(new Ui::Mainw)
{
    ui->setupUi(this);
    this->setWindowTitle(st);
    showlabels();
    connect(ui->pushButton_5,SIGNAL(clicked()) , this, SLOT(callbuycow()));
    connect(ui->pushButton_3,SIGNAL(clicked()) , this, SLOT(callbuyhen()));
    connect(ui->pushButton_2,SIGNAL(clicked()) , this, SLOT(callbuysheep()));
    connect(ui->pushButton_4,SIGNAL(clicked()) , this, SLOT(callbuyfeed()));
    connect(ui->sellcow , SIGNAL(clicked()) , this , SLOT(callsellcow()));
    connect(ui->sellcowmilk , SIGNAL(clicked()) , this , SLOT(callsellcowmilk()));
    connect(ui->sellcowyogurt , SIGNAL(clicked()) , this , SLOT(callsellcowyogurt()));
    connect(ui->sellcowcheese , SIGNAL(clicked()) , this , SLOT(callsellcowcheese()));
    connect(ui->sellsheep , SIGNAL(clicked()) , this , SLOT(callsellsheep()));
    connect(ui->sellsheepmilk , SIGNAL(clicked()) , this , SLOT(callsellsheepmilk()));
    connect(ui->sellhen , SIGNAL(clicked()) , this , SLOT(callsellhen()));
    connect(ui->sellhenegg , SIGNAL(clicked()) , this , SLOT(callsellhenegg()));
    connect(ui->milkp, SIGNAL(clicked()) , this , SLOT(callcowmilkproduct()));
    connect(ui->yogurtp, SIGNAL(clicked()) , this , SLOT(callcowyogurtproduct()));
    connect(ui->cheesep, SIGNAL(clicked()) , this , SLOT(callcowcheeseproduct()));
    connect(ui->eggp, SIGNAL(clicked()) , this , SLOT(callheneggproduct()));
    connect(ui->smilkp, SIGNAL(clicked()) , this , SLOT(callsheepmilkproduct()));

    QFile file(st + ".json");
    file.open(QIODevice::ReadOnly);
    QString str = file.readAll();
    file.close();//opne json file and read info from it
    QJsonDocument jdoc= QJsonDocument::fromJson(str.toUtf8());
    QJsonObject jobj = jdoc.object();
    QString c = jobj["money"].toString();
    m+ c.toInt();//assign money value
    ui->money->setText(c);
    try{
    c = jobj["feed"].toString();
    f.setFeed(c.toInt());//assign feed value
    ui->feed->setText(QString::number(f.getFeed()));
    }
    catch(...)
    {
        ui->feed->setText("0");
    }
    c = jobj["hen"].toString();
    ui->hen->setText(c);//assign hen value
    this->h + c.toInt();

    c = jobj["henegg"].toString();
    ui->henegg->setText(c);//assign egg value
    this->h.addegg(c.toInt());

    c = jobj["sheep"].toString();
    s + c.toInt();//assign sheep value
    ui->sheep->setText(c);

    c = jobj["sheepmilk"].toString();
    ui->sheepmilk->setText(c);//assign sheep milk value
    s.addmilk(c.toInt());

    c = jobj["cow"].toString();
    ui->cow->setText(c);//assign cow value
    this->c + c.toInt();

    c = jobj["cowmilk"].toString();
    ui->cowmilk->setText(c);//assign cow milk value
    this->c.addmilk(c.toInt());

    c = jobj["cowy"].toString();
    ui->cowy->setText(c);//assign yogurt value
    this->c.addyogurt(c.toInt());

    c = jobj["cheese"].toString();
    ui->cheese->setText(c);//assign cheese value
    this->c.addcheese(c.toInt());
}
Mainw::~Mainw()
{
    delete ui;
}
void Mainw::callbuycow()//slot to buy cow
{

    QPixmap cow("cow.png");
    ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));//show cow picture in label
    try
    {
         b.buy_cow(m);//buy cow
         c+1;//add one cow to cow count
    }
    catch (std::invalid_argument & i)
    {
        std::cout<<i.what()<<std::endl;
    }
    std::string str = std::to_string(c.getcow());
    ui->cow->setText(QString::fromStdString(str));
    str = std::to_string(m.getmoney());
    ui->money->setText(QString::fromStdString(str));//show new values
}
void Mainw::callbuyhen()
{
    QPixmap hen("hen.png");
    ui->label_3->setPixmap(hen.scaled(150,150 , Qt::KeepAspectRatio));
    try
    {
        b.buy_hen(m);
        h+1;
    } catch (std::invalid_argument &i)
    {
        std::cout<<i.what()<<std::endl;
    }
    std::string str = std::to_string(h.getHen());
    ui->hen->setText(QString::fromStdString(str));
    str = std::to_string(m.getmoney());
    ui->money->setText(QString::fromStdString(str));
}
void Mainw::callbuysheep()
{
    QPixmap sheep("sheep.png");
    ui->label_3->setPixmap(sheep.scaled(150,150 , Qt::KeepAspectRatio));
    try
    {
       b.buy_sheep(m);
       s+1;
    } catch (std::invalid_argument & i)
    {
        std::cout<<i.what()<<std::endl;
    }
    std::string str = std::to_string(s.getSheep());
    ui->sheep->setText(QString::fromStdString(str));
    str = std::to_string(m.getmoney());
    ui->money->setText(QString::fromStdString(str));
}
void Mainw::callbuyfeed()
{
    QPixmap feed("feed.png");
    ui->label_3->setPixmap(feed.scaled(150,150 , Qt::KeepAspectRatio));
    try {
       m.setmoney(f.buyFeed(m.getmoney()));

    } catch (std::invalid_argument & i)
    {
        std::cout<<i.what()<<std::endl;
    }
    std::string str = std::to_string(f.getFeed());
    ui->feed->setText(QString::fromStdString(str));
    str = std::to_string(m.getmoney());
    ui->money->setText(QString::fromStdString(str));
}
void Mainw::on_pushButton_16_clicked()
{
    hide();
    MainWindow * w;
    w = new MainWindow(this);
    w->show();//back to mainwindow
}
void Mainw::on_pushButton_clicked()//save game
{
    QString s,d= ui->lineEdit->text();
    s=d+".json";
    std::ifstream cfile(s.toStdString());
    if(cfile.is_open())//if file exist
    {
        auto choose = QMessageBox::question(this, "saving" ,"این بازی موجود است.آیا می خواهید دوباره ذخیره شود؟",QMessageBox::Yes | QMessageBox::No);
        if(choose==QMessageBox::Yes)
        {
            QFile file(s);
            file.open(QIODevice::WriteOnly);
            QJsonObject rootObj;
            rootObj["hen"]=ui->hen->text();
            rootObj["money"]= ui->money->text();
            rootObj["feed"]= ui->feed->text();
            rootObj["henegg"]= ui->henegg->text();
            rootObj["cow"]= ui->cow->text();
            rootObj["cowmilk"]= ui->cowmilk->text();
            rootObj["cowy"]= ui->cowy->text();
            rootObj["cheese"]= ui->cheese->text();
            rootObj["sheep"]= ui->sheep->text();
            rootObj["sheepmilk"]= ui->sheepmilk->text();
            QJsonDocument doc(rootObj);
            file.write(doc.toJson());
            file.close();
        }
        else {
            return;
        }
    }
    else {//if file not exist
        std::fstream out;
        out.open("savedfilenames.txt" , std::ios::app);//open existing file and add file name
        out<<" "<<d.toStdString();
        out.close();
        QFile file(s);
        file.open(QIODevice::WriteOnly);//open new json file and write in file
        QJsonObject rootObj;
        rootObj.insert("hen",ui->hen->text());
        rootObj.insert("money",ui->money->text());
        rootObj.insert("feed",ui->feed->text());
        rootObj.insert("henegg",ui->henegg->text());
        rootObj.insert("cow",ui->cow->text());
        rootObj.insert("sheep",ui->sheep->text());
        rootObj.insert("sheepmilk",ui->sheepmilk->text());
        rootObj.insert("cowmilk",ui->cowmilk->text());
        rootObj.insert("cowy",ui->cowy->text());
        rootObj.insert("cheese",ui->cheese->text());
        QJsonDocument doc(rootObj);
        file.write(doc.toJson());
        file.close();
    }
    QMessageBox::information(this,"saving","بازی ذخیره شد",QMessageBox::Ok);
}
void Mainw::callsellcowproduct(std::string s)//sell cow product like milk yogurt cheese and cow
{
    try
    {
        m.addmoney(c.sellcowproduct(s));
    }
    catch (std::invalid_argument & i)
    {
        std::cout<<i.what()<<std::endl;
    }
    std::string st = std::to_string(m.getmoney());
    ui->money->setText(QString::fromStdString(st));
        if(s=="cow")
        {
            try
            {
                ui->cow->setText(QString::fromStdString(std::to_string(c.getcow())));//show new cow value
            }
            catch(std::invalid_argument & i)//if cow =0
            {
                ui->cow->setText("0");
            }
        }
        if(s=="cheese")
        {
            try
            {
                ui->cheese->setText(QString::fromStdString(std::to_string(c.getcheese())));//show new cheese value
            }
            catch (std::invalid_argument & i)//if cheese =0
            {
                ui->cheese->setText("0");
            }
        }
        if(s=="yogurt")
        {
            try
            {
                ui->cowy->setText(QString::fromStdString(std::to_string(c.getyogurt())));//show new yogurt value
            }
            catch (std::invalid_argument &i)//if yogurt = 0
            {
                ui->cowy->setText("0");//show 0
            }
        }
        if(s == "milk")
        {
            try
            {
                ui->cowmilk->setText(QString::fromStdString(std::to_string(c.getcowMilk())));//show new cheese value
            }
            catch (std::invalid_argument &i )//if milk = 0
            {
                ui->cowmilk->setText("0");//show 0
            }
        }
}
void Mainw::callsellsheepproduct(std::string p)
{

    try
    {
        m.addmoney(s.sellsheepproduct(p));
    }
    catch (std::invalid_argument & i)
    {
        std::cout<<i.what()<<std::endl;
    }
    std::string st = std::to_string(m.getmoney());
    ui->money->setText(QString::fromStdString(st));
    if(p=="sheep")
    {
        try
        {
            ui->sheep->setText(QString::fromStdString(std::to_string(s.getSheep())));
        }
        catch (std::invalid_argument & i)
        {
            ui->sheep->setText("0");
        }
    }

    if(p == "milk")
    {
        try
        {
            ui->sheepmilk->setText(QString::fromStdString(std::to_string(s.getsheepMilk())));
        }
        catch (std::invalid_argument & i)
        {
            ui->sheepmilk->setText("0");
        }
    }
}
void Mainw::callsellhenproduct(std::string s)
{
    try
    {
        m.addmoney(h.sellhenproduct(s));
        std::cout<<h.getHen()<<std::endl;

    }
    catch (std::invalid_argument & i)
    {
        std::cout<<i.what()<<std::endl;
    }
    std::string st = std::to_string(m.getmoney());
    ui->money->setText(QString::fromStdString(st));
        if(s=="hen")
        {
            try
            {
                ui->hen->setText(QString::fromStdString(std::to_string(h.getHen())));
            }
            catch(std::invalid_argument & )
            {
                ui->hen->setText("0");
            }
        }

        if(s == "egg")
        {
            try
            {
                ui->henegg->setText(QString::fromStdString(std::to_string(h.getEgg())));
            }
            catch (std::invalid_argument & i)
            {
                ui->henegg->setText("0");
            }
        }
}
void Mainw::callsellcow()
{
    QPixmap cow("cow.png");
    ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));
    callsellcowproduct("cow");
}
void Mainw::callsellcowmilk()
{
    QPixmap milk("milk.png");
    ui->label_3->setPixmap(milk.scaled(150,150 , Qt::KeepAspectRatio));
    callsellcowproduct("milk");
}
void Mainw::callsellcowyogurt()
{
     QPixmap cow("yogurt.png");
     ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));
     callsellcowproduct("yogurt");
}
void Mainw::callsellcowcheese()
{
     QPixmap cow("cheese.png");
     ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));
     callsellcowproduct("cheese");
}
void Mainw::callsellsheep()
{
    QPixmap cow("sheep.png");
    ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));
    callsellsheepproduct("sheep");
}
void Mainw::callsellsheepmilk()
{
    QPixmap cow("milk.png");
    ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));
    callsellsheepproduct("milk");
}
void Mainw::callsellhen()
{
    QPixmap cow("hen.png");
    ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));
    callsellhenproduct("hen");
}
void Mainw::callsellhenegg()
{
    QPixmap cow("eggs.png");
    ui->label_3->setPixmap(cow.scaled(150,150 , Qt::KeepAspectRatio));
     callsellhenproduct("egg");
}
void Mainw::callcowmilkproduct()//product cow milk
{
    try
    {
        f.setFeed(c.setcowMilk(f.getFeed()));

    }
    catch (std::invalid_argument & i)//if feed =0
    {
        std::cout<<i.what()<<std::endl;
    }
    try
    {
        ui->feed->setText(QString::fromStdString(std::to_string(f.getFeed())));
    }
    catch (...)
    {
        ui->feed->setText("0");
    }
    try
    {
       ui->cowmilk->setText(QString::fromStdString(std::to_string(c.getcowMilk())));
    }
    catch (...)
    {
        ui->cowmilk->setText("0");
    }
}
void Mainw::callcowyogurtproduct()//product yogurt
{

    try
    {
        c.setyogurt();

    }
    catch (std::invalid_argument & i)//if milk = 0
    {
        std::cout<<i.what()<<std::endl;
    }
    try
    {
        ui->cowy->setText(QString::fromStdString(std::to_string(c.getyogurt())));//show yogurt value
    } catch (...)
    {//if yogurt = 0
         ui->cowy->setText("0");//show 0
    }
    try {
        ui->cowmilk->setText(QString::fromStdString(std::to_string(c.getcowMilk())));//show milk value

    } catch (...)//if milk = 0
    {
        ui->cowmilk->setText("0");//show 0

    }
}
void Mainw::callcowcheeseproduct()
{

    try
    {
        c.setcheese();//product chese

    }
    catch (std::invalid_argument & i)//if milk = 0
    {
        std::cout<<i.what()<<std::endl;
    }
    try//show new values
    {
        ui->cheese->setText(QString::fromStdString(std::to_string(c.getcheese())));
    } catch (...)
    {//if cheese = 0 show 0
         ui->cowy->setText("0");
    }
    try {
        ui->cowmilk->setText(QString::fromStdString(std::to_string(c.getcowMilk())));

    } catch (...)//if milk = 0 show 0
    {
        ui->cowmilk->setText("0");

    }
}
void Mainw::callsheepmilkproduct()//product sheep milk
{
    try
    {
        f.setFeed(s.setsheepMilk(f.getFeed()));
    }
    catch (std::invalid_argument & i)//if feed = 0 dont product milk
    {
        std::cout<<i.what()<<std::endl;
    }
    try
    {
        ui->feed->setText(QString::fromStdString(std::to_string(f.getFeed())));
    }
    catch (...)//if feed = 0
    {
        ui->feed->setText("0");//show 0
    }
    try
    {
       ui->sheepmilk->setText(QString::fromStdString(std::to_string(s.getsheepMilk())));
    }
    catch (...)//if milk = 0
    {
        ui->sheepmilk->setText("0");//show 0
    }
}

void Mainw::callheneggproduct()//product egg
{
    try
    {
        f.setFeed(h.setEgg(f.getFeed()));
    }
    catch (std::invalid_argument & i)//if feed = 0
    {
        std::cout<<i.what()<<std::endl;
    }
    try
    {
        ui->feed->setText(QString::fromStdString(std::to_string(f.getFeed())));//show feed
    }
    catch (...)//if feed = 0
    {
        ui->feed->setText("0");
    }
    try
    {
       ui->henegg->setText(QString::fromStdString(std::to_string(h.getEgg())));//show egg
    }
    catch (...)//if hgg = 0
    {
        ui->henegg->setText("0");
    }
}
