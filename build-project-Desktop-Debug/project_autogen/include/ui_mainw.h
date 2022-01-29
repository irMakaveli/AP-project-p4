/********************************************************************************
** Form generated from reading UI file 'mainw.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINW_H
#define UI_MAINW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Mainw
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_16;
    QLabel *label_24;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_3;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QPushButton *sellcowmilk;
    QSpacerItem *verticalSpacer;
    QPushButton *sellsheep;
    QPushButton *sellcow;
    QPushButton *sellsheepmilk;
    QPushButton *sellhenegg;
    QPushButton *sellcowcheese;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_11;
    QPushButton *sellhen;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QPushButton *sellcowyogurt;
    QSpacerItem *verticalSpacer_12;
    QWidget *tab_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_2;
    QPushButton *smilkp;
    QPushButton *cheesep;
    QSpacerItem *verticalSpacer_5;
    QPushButton *milkp;
    QPushButton *yogurtp;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *eggp;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *money;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *feed;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *hen;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *henegg;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *sheep;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *sheepmilk;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_17;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *cow;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *cowmilk;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_8;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_11;
    QLabel *cowy;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_12;
    QLabel *cheese;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Mainw)
    {
        if (Mainw->objectName().isEmpty())
            Mainw->setObjectName(QString::fromUtf8("Mainw"));
        Mainw->resize(884, 490);
        Mainw->setMinimumSize(QSize(884, 490));
        Mainw->setMaximumSize(QSize(884, 490));
        Mainw->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:#ff7d00;\n"
"	width :75px;\n"
"height:30px;\n"
"border-radius:15px;\n"
"border : 1px solid #e36414;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color:#ffb600;\n"
"	\n"
"}\n"
"#Mainw\n"
"{\n"
"background-color:#fffbb2;\n"
"}"));
        centralwidget = new QWidget(Mainw);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(780, 400, 81, 31));
        pushButton_16->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_16->setStyleSheet(QString::fromUtf8("#pushButton_16\n"
"{\n"
"background-color:#d00000;\n"
"}"));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(290, 10, 67, 51));
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 70, 521, 393));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(horizontalLayoutWidget_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setStyleSheet(QString::fromUtf8("#tabWidget\n"
"{\n"
"background-color:#ffd500;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, -1, 165, -1);
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 0));

        gridLayout_3->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 2, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_9, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4\n"
"{\n"
"width:30px;\n"
"}"));

        gridLayout_3->addWidget(pushButton_4, 6, 0, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_10, 5, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 4, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        sellcowmilk = new QPushButton(tab_3);
        sellcowmilk->setObjectName(QString::fromUtf8("sellcowmilk"));

        gridLayout_5->addWidget(sellcowmilk, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 8, 0, 1, 1);

        sellsheep = new QPushButton(tab_3);
        sellsheep->setObjectName(QString::fromUtf8("sellsheep"));

        gridLayout_5->addWidget(sellsheep, 0, 1, 1, 1);

        sellcow = new QPushButton(tab_3);
        sellcow->setObjectName(QString::fromUtf8("sellcow"));

        gridLayout_5->addWidget(sellcow, 0, 0, 1, 1);

        sellsheepmilk = new QPushButton(tab_3);
        sellsheepmilk->setObjectName(QString::fromUtf8("sellsheepmilk"));

        gridLayout_5->addWidget(sellsheepmilk, 7, 0, 1, 1);

        sellhenegg = new QPushButton(tab_3);
        sellhenegg->setObjectName(QString::fromUtf8("sellhenegg"));

        gridLayout_5->addWidget(sellhenegg, 11, 0, 1, 1);

        sellcowcheese = new QPushButton(tab_3);
        sellcowcheese->setObjectName(QString::fromUtf8("sellcowcheese"));

        gridLayout_5->addWidget(sellcowcheese, 9, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 6, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_11, 10, 0, 1, 1);

        sellhen = new QPushButton(tab_3);
        sellhen->setObjectName(QString::fromUtf8("sellhen"));

        gridLayout_5->addWidget(sellhen, 13, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_7, 12, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);

        sellcowyogurt = new QPushButton(tab_3);
        sellcowyogurt->setObjectName(QString::fromUtf8("sellcowyogurt"));

        gridLayout_5->addWidget(sellcowyogurt, 5, 0, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_12, 3, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_7 = new QGridLayout(tab_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        smilkp = new QPushButton(tab_2);
        smilkp->setObjectName(QString::fromUtf8("smilkp"));

        gridLayout_2->addWidget(smilkp, 6, 0, 1, 1);

        cheesep = new QPushButton(tab_2);
        cheesep->setObjectName(QString::fromUtf8("cheesep"));

        gridLayout_2->addWidget(cheesep, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 1, 0, 1, 1);

        milkp = new QPushButton(tab_2);
        milkp->setObjectName(QString::fromUtf8("milkp"));

        gridLayout_2->addWidget(milkp, 0, 0, 1, 1);

        yogurtp = new QPushButton(tab_2);
        yogurtp->setObjectName(QString::fromUtf8("yogurtp"));
        yogurtp->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(yogurtp, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 3, 0, 1, 1);

        eggp = new QPushButton(tab_2);
        eggp->setObjectName(QString::fromUtf8("eggp"));
        eggp->setMinimumSize(QSize(0, 0));
        eggp->setToolTipDuration(8);
        eggp->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(eggp, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 27, 9, 160);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(150, 150));
        label_3->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(550, 70, 152, 361));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        money = new QLabel(verticalLayoutWidget_2);
        money->setObjectName(QString::fromUtf8("money"));
        money->setMinimumSize(QSize(30, 0));

        horizontalLayout->addWidget(money);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(40, 40));

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        feed = new QLabel(verticalLayoutWidget_2);
        feed->setObjectName(QString::fromUtf8("feed"));
        feed->setMinimumSize(QSize(30, 0));

        horizontalLayout_3->addWidget(feed);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        hen = new QLabel(verticalLayoutWidget_2);
        hen->setObjectName(QString::fromUtf8("hen"));
        hen->setMinimumSize(QSize(30, 0));

        horizontalLayout_5->addWidget(hen);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(40, 40));

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        henegg = new QLabel(verticalLayoutWidget_2);
        henegg->setObjectName(QString::fromUtf8("henegg"));
        henegg->setMinimumSize(QSize(30, 0));

        horizontalLayout_6->addWidget(henegg);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(label_12);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        sheep = new QLabel(verticalLayoutWidget_2);
        sheep->setObjectName(QString::fromUtf8("sheep"));
        sheep->setMinimumSize(QSize(30, 0));

        horizontalLayout_7->addWidget(sheep);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(40, 40));

        horizontalLayout_7->addWidget(label_6);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        sheepmilk = new QLabel(verticalLayoutWidget_2);
        sheepmilk->setObjectName(QString::fromUtf8("sheepmilk"));
        sheepmilk->setMinimumSize(QSize(30, 0));

        horizontalLayout_8->addWidget(sheepmilk);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(40, 40));

        horizontalLayout_8->addWidget(label_17);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(40, 40));

        horizontalLayout_8->addWidget(label_16);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        cow = new QLabel(verticalLayoutWidget_2);
        cow->setObjectName(QString::fromUtf8("cow"));
        cow->setMinimumSize(QSize(30, 0));

        horizontalLayout_9->addWidget(cow);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(40, 40));

        horizontalLayout_9->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(720, 70, 160, 150));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        cowmilk = new QLabel(verticalLayoutWidget);
        cowmilk->setObjectName(QString::fromUtf8("cowmilk"));
        cowmilk->setMinimumSize(QSize(30, 0));

        horizontalLayout_10->addWidget(cowmilk);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(40, 40));

        horizontalLayout_10->addWidget(label_8);

        label_18 = new QLabel(verticalLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(40, 40));

        horizontalLayout_10->addWidget(label_18);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        cowy = new QLabel(verticalLayoutWidget);
        cowy->setObjectName(QString::fromUtf8("cowy"));
        cowy->setMinimumSize(QSize(30, 0));

        horizontalLayout_11->addWidget(cowy);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_9);

        label_19 = new QLabel(verticalLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(40, 40));

        horizontalLayout_11->addWidget(label_19);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        cheese = new QLabel(verticalLayoutWidget);
        cheese->setObjectName(QString::fromUtf8("cheese"));
        cheese->setMinimumSize(QSize(30, 0));

        horizontalLayout_12->addWidget(cheese);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(40, 40));

        horizontalLayout_12->addWidget(label_9);


        verticalLayout_5->addLayout(horizontalLayout_12);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 20, 203, 32));
        lineEdit->setMinimumSize(QSize(0, 30));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 20, 61, 31));
        pushButton->setMinimumSize(QSize(60, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"width:40px;\n"
"background-color:#0353a4;\n"
"border-top-left-radius: 5%;\n"
"border-bottom-left-radius: 5%;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"}"));
        Mainw->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Mainw);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Mainw->setStatusBar(statusbar);

        retranslateUi(Mainw);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Mainw);
    } // setupUi

    void retranslateUi(QMainWindow *Mainw)
    {
        Mainw->setWindowTitle(QApplication::translate("Mainw", "Mainw", nullptr));
        pushButton_16->setText(QApplication::translate("Mainw", "\330\256\330\261\331\210\330\254", nullptr));
        label_24->setText(QApplication::translate("Mainw", "  \331\206\330\247\331\205 \330\250\330\247\330\262\333\214", nullptr));
        pushButton_5->setText(QApplication::translate("Mainw", "\332\257\330\247\331\210", nullptr));
        pushButton_2->setText(QApplication::translate("Mainw", "\332\257\331\210\330\263\331\201\331\206\330\257", nullptr));
        pushButton_4->setText(QApplication::translate("Mainw", "\330\271\331\204\331\210\331\201\331\207", nullptr));
        pushButton_3->setText(QApplication::translate("Mainw", "\331\205\330\261\330\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Mainw", "\330\256\330\261\333\214\330\257", nullptr));
        sellcowmilk->setText(QApplication::translate("Mainw", "\330\264\333\214\330\261 \332\257\330\247\331\210", nullptr));
        sellsheep->setText(QApplication::translate("Mainw", "\332\257\331\210\330\263\331\201\331\206\330\257", nullptr));
        sellcow->setText(QApplication::translate("Mainw", "\332\257\330\247\331\210", nullptr));
        sellsheepmilk->setText(QApplication::translate("Mainw", "\330\264\333\214\330\261 \332\257\331\210\330\263\331\201\331\206\330\257", nullptr));
        sellhenegg->setText(QApplication::translate("Mainw", "\330\252\330\256\331\205 \331\205\330\261\330\272", nullptr));
        sellcowcheese->setText(QApplication::translate("Mainw", "\331\276\331\206\333\214\330\261", nullptr));
        sellhen->setText(QApplication::translate("Mainw", "\331\205\330\261\330\272", nullptr));
        sellcowyogurt->setText(QApplication::translate("Mainw", "\331\205\330\247\330\263\330\252", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Mainw", "\331\201\330\261\331\210\330\264", nullptr));
        smilkp->setText(QApplication::translate("Mainw", "\330\264\333\214\330\261 \332\257\331\210\330\263\331\201\331\206\330\257", nullptr));
        cheesep->setText(QApplication::translate("Mainw", "\331\276\331\206\333\214\330\261", nullptr));
        milkp->setText(QApplication::translate("Mainw", "\330\264\333\214\330\261", nullptr));
        yogurtp->setText(QApplication::translate("Mainw", "\331\205\330\247\330\263\330\252", nullptr));
        eggp->setText(QApplication::translate("Mainw", "\330\252\330\256\331\205 \331\205\330\261\330\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Mainw", "\330\252\331\210\331\204\333\214\330\257", nullptr));
        label_3->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        money->setText(QApplication::translate("Mainw", "0", nullptr));
        label_2->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        feed->setText(QApplication::translate("Mainw", "0", nullptr));
        label_4->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        hen->setText(QApplication::translate("Mainw", "0", nullptr));
        label_5->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        henegg->setText(QApplication::translate("Mainw", "0", nullptr));
        label_12->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        sheep->setText(QApplication::translate("Mainw", "0", nullptr));
        label_6->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        sheepmilk->setText(QApplication::translate("Mainw", "0", nullptr));
        label_17->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        label_16->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        cow->setText(QApplication::translate("Mainw", "0", nullptr));
        label_7->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        cowmilk->setText(QApplication::translate("Mainw", "0", nullptr));
        label_8->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        label_18->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        cowy->setText(QApplication::translate("Mainw", "0", nullptr));
        label_19->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        cheese->setText(QApplication::translate("Mainw", "0", nullptr));
        label_9->setText(QApplication::translate("Mainw", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Mainw", "\330\260\330\256\333\214\330\261\331\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Mainw: public Ui_Mainw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINW_H
