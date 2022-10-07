/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *DFS;
    QPushButton *ShortestRoad;
    QPushButton *Suggestions;
    QCheckBox *TianFuSquare;
    QCheckBox *PeoplePark;
    QCheckBox *JinLi;
    QCheckBox *ChunXiRoad;
    QCheckBox *DuFuCaoTang;
    QCheckBox *PandaBase;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 540);
        MainWindow->setMinimumSize(QSize(800, 540));
        MainWindow->setMaximumSize(QSize(800, 540));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 400, 781, 101));
        textBrowser->setMinimumSize(QSize(0, 0));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 360, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft JhengHei")});
        font.setPointSize(14);
        label->setFont(font);
        DFS = new QPushButton(centralwidget);
        DFS->setObjectName(QString::fromUtf8("DFS"));
        DFS->setGeometry(QRect(530, 360, 81, 31));
        DFS->setCheckable(false);
        ShortestRoad = new QPushButton(centralwidget);
        ShortestRoad->setObjectName(QString::fromUtf8("ShortestRoad"));
        ShortestRoad->setGeometry(QRect(620, 360, 81, 31));
        Suggestions = new QPushButton(centralwidget);
        Suggestions->setObjectName(QString::fromUtf8("Suggestions"));
        Suggestions->setGeometry(QRect(710, 360, 81, 31));
        TianFuSquare = new QCheckBox(centralwidget);
        TianFuSquare->setObjectName(QString::fromUtf8("TianFuSquare"));
        TianFuSquare->setGeometry(QRect(380, 150, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font1.setPointSize(14);
        TianFuSquare->setFont(font1);
        PeoplePark = new QCheckBox(centralwidget);
        PeoplePark->setObjectName(QString::fromUtf8("PeoplePark"));
        PeoplePark->setGeometry(QRect(260, 70, 101, 31));
        PeoplePark->setFont(font1);
        JinLi = new QCheckBox(centralwidget);
        JinLi->setObjectName(QString::fromUtf8("JinLi"));
        JinLi->setGeometry(QRect(210, 240, 71, 31));
        JinLi->setFont(font1);
        ChunXiRoad = new QCheckBox(centralwidget);
        ChunXiRoad->setObjectName(QString::fromUtf8("ChunXiRoad"));
        ChunXiRoad->setGeometry(QRect(530, 230, 101, 31));
        ChunXiRoad->setFont(font1);
        DuFuCaoTang = new QCheckBox(centralwidget);
        DuFuCaoTang->setObjectName(QString::fromUtf8("DuFuCaoTang"));
        DuFuCaoTang->setGeometry(QRect(60, 130, 101, 31));
        DuFuCaoTang->setFont(font1);
        PandaBase = new QCheckBox(centralwidget);
        PandaBase->setObjectName(QString::fromUtf8("PandaBase"));
        PandaBase->setGeometry(QRect(660, 20, 131, 31));
        PandaBase->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 150, 251, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(420, 50, 311, 101));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 180, 161, 61));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 240, 251, 20));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 160, 91, 81));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(130, 80, 121, 51));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(310, 90, 91, 71));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(440, 170, 91, 81));
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(600, 40, 181, 201));
        label_12->setFont(font2);
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(360, 10, 281, 91));
        label_13->setFont(font2);
        label_13->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 801, 361));
        MainWindow->setCentralWidget(centralwidget);
        label_3->raise();
        textBrowser->raise();
        label->raise();
        DFS->raise();
        ShortestRoad->raise();
        Suggestions->raise();
        TianFuSquare->raise();
        PeoplePark->raise();
        JinLi->raise();
        ChunXiRoad->raise();
        DuFuCaoTang->raise();
        PandaBase->raise();
        label_2->raise();
        label_4->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\210\220\351\203\275\346\231\257\347\202\271\345\234\260\345\233\276", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "INFOMATION", nullptr));
        DFS->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        ShortestRoad->setText(QCoreApplication::translate("MainWindow", "\346\234\200\347\237\255\350\267\257\345\276\204", nullptr));
        Suggestions->setText(QCoreApplication::translate("MainWindow", "\344\277\256\350\267\257\345\273\272\350\256\256", nullptr));
        TianFuSquare->setText(QCoreApplication::translate("MainWindow", "\345\244\251\345\272\234\345\271\277\345\234\272", nullptr));
        PeoplePark->setText(QCoreApplication::translate("MainWindow", "\344\272\272\346\260\221\345\205\254\345\233\255", nullptr));
        JinLi->setText(QCoreApplication::translate("MainWindow", "\351\224\246\351\207\214", nullptr));
        ChunXiRoad->setText(QCoreApplication::translate("MainWindow", "\346\230\245\347\206\231\350\267\257", nullptr));
        DuFuCaoTang->setText(QCoreApplication::translate("MainWindow", "\346\235\234\347\224\253\350\215\211\345\240\202", nullptr));
        PandaBase->setText(QCoreApplication::translate("MainWindow", "\345\244\247\347\206\212\347\214\253\345\237\272\345\234\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "4800M", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "16000M", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "4100M", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "4900M", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "4700M", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "4750M", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "1900M", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "2100M", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "16500M", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "17000M", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
