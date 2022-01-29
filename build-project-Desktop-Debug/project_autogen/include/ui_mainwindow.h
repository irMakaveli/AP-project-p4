/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(647, 369);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow\n"
"{\n"
"\n"
"background-color:#fffbb2;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(100, -1, 100, -1);
        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"		width:180px;\n"
"		padding:10px 0;\n"
"		border-radius:18%;\n"
"color:#fff;\n"
"background-color:#008000;\n"
"}\n"
"#pushButton:hover\n"
"{\n"
"		background-color:#38b000;\n"
"	\n"
"}"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"		width:180px;\n"
"		padding:10px 0;\n"
"		border-radius:18%;\n"
"color:#fff;\n"
"background-color:#008000;\n"
"}\n"
"#pushButton_2:hover\n"
"{\n"
"		background-color:#38b000;\n"
"	\n"
"}"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"		width:180px;\n"
"		padding:10px 0;\n"
"		border-radius:18%;\n"
"color:#fff;\n"
"background-color:#dd1c1a;\n"
"}\n"
"#pushButton_3:hover\n"
"{\n"
"		background-color:#ff002b;\n"
"		\n"
"}"));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_3, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
