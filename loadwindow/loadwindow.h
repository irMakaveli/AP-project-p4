#ifndef LOADWINDOW_H
#define LOADWINDOW_H
#include"../mainwindow/mainw.h"
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui { class loadwindow; }
QT_END_NAMESPACE

class loadwindow : public QMainWindow
{
    Q_OBJECT

public:
    loadwindow(QWidget *parent = nullptr);
    ~loadwindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void rmfile();
private:

    Mainw * l;
    Ui::loadwindow *ui;
};
#endif // LOADWINDOW_H
