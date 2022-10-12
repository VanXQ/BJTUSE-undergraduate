/********************************************************************************
** Form generated from reading UI file 'WindowGame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWGAME_H
#define UI_WINDOWGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowGame
{
public:
    QAction *actionRestart;
    QAction *actionAbout;
    QAction *actionHelp;
    QAction *actionzhuti;
    QAction *actionMusic;
    QWidget *centralwidget;
    QProgressBar *progressBar_time;
    QPushButton *btn_gameToMain;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_continue;
    QPushButton *pushButton_restart;
    QPushButton *pushButton_hint;
    QPushButton *pushButton_cross;
    QPushButton *pushButton_boom;
    QPushButton *pushButton_color;
    QLabel *label_cross;
    QLabel *label_color;
    QLabel *label_boom;
    QPushButton *pushButton_Rank;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowGame)
    {
        if (WindowGame->objectName().isEmpty())
            WindowGame->setObjectName(QString::fromUtf8("WindowGame"));
        WindowGame->setEnabled(true);
        WindowGame->resize(642, 484);
        WindowGame->setMinimumSize(QSize(642, 484));
        WindowGame->setMaximumSize(QSize(642, 484));
        WindowGame->setStyleSheet(QString::fromUtf8("#WindowGame{\n"
"border-image: url(:/new/picture/background.bmp);}"));
        actionRestart = new QAction(WindowGame);
        actionRestart->setObjectName(QString::fromUtf8("actionRestart"));
        actionAbout = new QAction(WindowGame);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionHelp = new QAction(WindowGame);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionzhuti = new QAction(WindowGame);
        actionzhuti->setObjectName(QString::fromUtf8("actionzhuti"));
        actionMusic = new QAction(WindowGame);
        actionMusic->setObjectName(QString::fromUtf8("actionMusic"));
        centralwidget = new QWidget(WindowGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progressBar_time = new QProgressBar(centralwidget);
        progressBar_time->setObjectName(QString::fromUtf8("progressBar_time"));
        progressBar_time->setGeometry(QRect(10, 0, 601, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        progressBar_time->setFont(font);
        progressBar_time->setStyleSheet(QString::fromUtf8("font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        progressBar_time->setMaximum(60);
        progressBar_time->setValue(60);
        progressBar_time->setAlignment(Qt::AlignCenter);
        progressBar_time->setTextVisible(true);
        btn_gameToMain = new QPushButton(centralwidget);
        btn_gameToMain->setObjectName(QString::fromUtf8("btn_gameToMain"));
        btn_gameToMain->setGeometry(QRect(420, 220, 93, 41));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        btn_gameToMain->setFont(font1);
        btn_gameToMain->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(520, 220, 93, 41));
        pushButton_stop->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_continue = new QPushButton(centralwidget);
        pushButton_continue->setObjectName(QString::fromUtf8("pushButton_continue"));
        pushButton_continue->setGeometry(QRect(520, 220, 93, 41));
        pushButton_continue->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_continue->setCheckable(false);
        pushButton_continue->setAutoDefault(false);
        pushButton_restart = new QPushButton(centralwidget);
        pushButton_restart->setObjectName(QString::fromUtf8("pushButton_restart"));
        pushButton_restart->setGeometry(QRect(420, 280, 191, 41));
        pushButton_restart->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_hint = new QPushButton(centralwidget);
        pushButton_hint->setObjectName(QString::fromUtf8("pushButton_hint"));
        pushButton_hint->setGeometry(QRect(470, 170, 91, 41));
        pushButton_hint->setFont(font1);
        pushButton_hint->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pushButton_cross = new QPushButton(centralwidget);
        pushButton_cross->setObjectName(QString::fromUtf8("pushButton_cross"));
        pushButton_cross->setGeometry(QRect(430, 330, 41, 41));
        pushButton_cross->setStyleSheet(QString::fromUtf8("image: url(:/new/picture/cross.png);"));
        pushButton_cross->setFlat(true);
        pushButton_boom = new QPushButton(centralwidget);
        pushButton_boom->setObjectName(QString::fromUtf8("pushButton_boom"));
        pushButton_boom->setGeometry(QRect(530, 350, 61, 51));
        pushButton_boom->setStyleSheet(QString::fromUtf8("image: url(:/new/picture/boom.png);"));
        pushButton_boom->setFlat(true);
        pushButton_color = new QPushButton(centralwidget);
        pushButton_color->setObjectName(QString::fromUtf8("pushButton_color"));
        pushButton_color->setGeometry(QRect(420, 390, 61, 41));
        pushButton_color->setStyleSheet(QString::fromUtf8("image: url(:/new/picture/color.png);"));
        pushButton_color->setFlat(true);
        label_cross = new QLabel(centralwidget);
        label_cross->setObjectName(QString::fromUtf8("label_cross"));
        label_cross->setGeometry(QRect(480, 330, 41, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(false);
        font2.setItalic(false);
        label_cross->setFont(font2);
        label_cross->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";"));
        label_color = new QLabel(centralwidget);
        label_color->setObjectName(QString::fromUtf8("label_color"));
        label_color->setGeometry(QRect(480, 390, 41, 41));
        label_color->setFont(font2);
        label_color->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";"));
        label_boom = new QLabel(centralwidget);
        label_boom->setObjectName(QString::fromUtf8("label_boom"));
        label_boom->setGeometry(QRect(590, 350, 41, 41));
        label_boom->setFont(font2);
        label_boom->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\271\274\345\234\206\";"));
        pushButton_Rank = new QPushButton(centralwidget);
        pushButton_Rank->setObjectName(QString::fromUtf8("pushButton_Rank"));
        pushButton_Rank->setGeometry(QRect(470, 110, 93, 29));
        pushButton_Rank->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        WindowGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 642, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        WindowGame->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowGame->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionRestart);
        menu->addAction(actionAbout);
        menu->addAction(actionHelp);
        menu_2->addAction(actionzhuti);
        menu_2->addAction(actionMusic);

        retranslateUi(WindowGame);

        pushButton_continue->setDefault(false);


        QMetaObject::connectSlotsByName(WindowGame);
    } // setupUi

    void retranslateUi(QMainWindow *WindowGame)
    {
        WindowGame->setWindowTitle(QCoreApplication::translate("WindowGame", "\345\256\235\347\237\263\350\277\267\351\230\265", nullptr));
        actionRestart->setText(QCoreApplication::translate("WindowGame", "Restart", nullptr));
        actionAbout->setText(QCoreApplication::translate("WindowGame", "About", nullptr));
        actionHelp->setText(QCoreApplication::translate("WindowGame", "Help", nullptr));
        actionzhuti->setText(QCoreApplication::translate("WindowGame", "Theme", nullptr));
        actionMusic->setText(QCoreApplication::translate("WindowGame", "Music", nullptr));
        progressBar_time->setFormat(QCoreApplication::translate("WindowGame", " %v\347\247\222", nullptr));
        btn_gameToMain->setText(QCoreApplication::translate("WindowGame", "\350\277\224\345\233\236\346\240\207\351\242\230", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("WindowGame", "\346\232\202\345\201\234\346\270\270\346\210\217", nullptr));
        pushButton_continue->setText(QCoreApplication::translate("WindowGame", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
        pushButton_restart->setText(QCoreApplication::translate("WindowGame", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        pushButton_hint->setText(QCoreApplication::translate("WindowGame", "\346\217\220\347\244\272", nullptr));
        pushButton_cross->setText(QString());
        pushButton_boom->setText(QString());
        pushButton_color->setText(QString());
        label_cross->setText(QCoreApplication::translate("WindowGame", "<html><head/><body><p><span style=\" color:#ff0000;\">0</span></p></body></html>", nullptr));
        label_color->setText(QCoreApplication::translate("WindowGame", "<html><head/><body><p><span style=\" color:#ff0000;\">0</span></p></body></html>", nullptr));
        label_boom->setText(QCoreApplication::translate("WindowGame", "<html><head/><body><p><span style=\" color:#ff0000;\">0</span></p></body></html>", nullptr));
        pushButton_Rank->setText(QCoreApplication::translate("WindowGame", "Rank", nullptr));
        menu->setTitle(QCoreApplication::translate("WindowGame", "\351\200\211\351\241\271", nullptr));
        menu_2->setTitle(QCoreApplication::translate("WindowGame", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowGame: public Ui_WindowGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWGAME_H
