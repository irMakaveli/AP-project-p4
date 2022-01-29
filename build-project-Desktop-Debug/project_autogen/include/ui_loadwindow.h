/********************************************************************************
** Form generated from reading UI file 'loadwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADWINDOW_H
#define UI_LOADWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loadwindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loadwindow)
    {
        if (loadwindow->objectName().isEmpty())
            loadwindow->setObjectName(QString::fromUtf8("loadwindow"));
        loadwindow->resize(800, 600);
        loadwindow->setStyleSheet(QString::fromUtf8("#loadwindow\n"
"{\n"
"background-color:#fff2b2;\n"
"}"));
        centralwidget = new QWidget(loadwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 341, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(70, 25));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"background-color:#0d3b66;\n"
"border-radius:5%;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setStyleSheet(QString::fromUtf8("#listWidget{\n"
"background-color:#ffb627;\n"
"}"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 6);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(70, 25));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"background-color:#008000;\n"
"border-radius:5%;\n"
"}"));

        gridLayout->addWidget(pushButton, 1, 5, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(70, 25));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"background-color:#d00000;\n"
"border-radius:5%;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        loadwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loadwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        loadwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(loadwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        loadwindow->setStatusBar(statusbar);

        retranslateUi(loadwindow);

        QMetaObject::connectSlotsByName(loadwindow);
    } // setupUi

    void retranslateUi(QMainWindow *loadwindow)
    {
        loadwindow->setWindowTitle(QApplication::translate("loadwindow", "loadwindow", nullptr));
        pushButton_2->setText(QApplication::translate("loadwindow", "\330\256\330\261\331\210\330\254", nullptr));
        pushButton->setText(QApplication::translate("loadwindow", "\330\250\330\247\330\262\333\214", nullptr));
        pushButton_3->setText(QApplication::translate("loadwindow", "\330\255\330\260\331\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loadwindow: public Ui_loadwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADWINDOW_H
