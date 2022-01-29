
#ifndef MAINW_H
#define MAINW_H
#include"../include/buy.hpp"
#include"../include/money.hpp"
#include"../include/feed.hpp"
#include"../include/animal.hpp"
#include"../include/cow.hpp"
#include"../include/sheep.hpp"
#include"../include/hen.hpp"
#include <QMainWindow>
#include <QString>
#include<QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class Mainw; }
QT_END_NAMESPACE


class Mainw : public QMainWindow
{
    Q_OBJECT

public:
    Mainw(QWidget *parent = nullptr);
    Mainw(QWidget *parent , QString);
    ~Mainw();
    void showlabels();
    void callsellcowproduct(std::string);
    void callsellsheepproduct(std::string);
    void callsellhenproduct(std::string);
private slots:
    void on_pushButton_16_clicked();
    void callbuycow();
    void callbuyhen();
    void callbuysheep();
    void callbuyfeed();
    void callsellcow();
    void callsellcowmilk();
    void callsellcowyogurt();
    void callsellcowcheese();
    void callsellsheep();
    void callsellsheepmilk();
    void callsellhen();
    void callsellhenegg();
    void callcowmilkproduct();
    void callcowyogurtproduct();
    void callcowcheeseproduct();
    void callheneggproduct();
    void callsheepmilkproduct();
    void on_pushButton_clicked();

private:
    Ui::Mainw *ui;
    Money m;
    buy b;
    Cow c;
    Hen h;
    Sheep s;
    feed f;
};
#endif // MAINW_H
