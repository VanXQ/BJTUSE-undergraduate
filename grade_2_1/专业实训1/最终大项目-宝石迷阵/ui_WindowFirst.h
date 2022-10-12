/********************************************************************************
** Form generated from reading UI file 'WindowFirst.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWFIRST_H
#define UI_WINDOWFIRST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowFirst
{
public:
    QWidget *centralwidget;
    QPushButton *btn_mainToGame;
    QPushButton *btn_mainToRank;
    QLabel *label_welcome;
    QPushButton *btn_name;
    QPushButton *btn_help;
    QPushButton *btn_about;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowFirst)
    {
        if (WindowFirst->objectName().isEmpty())
            WindowFirst->setObjectName(QString::fromUtf8("WindowFirst"));
        WindowFirst->resize(800, 539);
        WindowFirst->setMinimumSize(QSize(800, 539));
        WindowFirst->setMaximumSize(QSize(800, 539));
        WindowFirst->setStyleSheet(QString::fromUtf8("#WindowFirst{\n"
"border-image: url(:/new/picture/background_2.png);}"));
        centralwidget = new QWidget(WindowFirst);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_mainToGame = new QPushButton(centralwidget);
        btn_mainToGame->setObjectName(QString::fromUtf8("btn_mainToGame"));
        btn_mainToGame->setGeometry(QRect(190, 240, 131, 51));
        btn_mainToGame->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        btn_mainToRank = new QPushButton(centralwidget);
        btn_mainToRank->setObjectName(QString::fromUtf8("btn_mainToRank"));
        btn_mainToRank->setGeometry(QRect(480, 240, 131, 51));
        btn_mainToRank->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_welcome = new QLabel(centralwidget);
        label_welcome->setObjectName(QString::fromUtf8("label_welcome"));
        label_welcome->setGeometry(QRect(180, 110, 461, 101));
        QFont font;
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        label_welcome->setFont(font);
        btn_name = new QPushButton(centralwidget);
        btn_name->setObjectName(QString::fromUtf8("btn_name"));
        btn_name->setGeometry(QRect(330, 310, 131, 51));
        btn_name->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        btn_help = new QPushButton(centralwidget);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));
        btn_help->setGeometry(QRect(480, 380, 131, 51));
        btn_help->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        btn_about = new QPushButton(centralwidget);
        btn_about->setObjectName(QString::fromUtf8("btn_about"));
        btn_about->setGeometry(QRect(190, 380, 131, 51));
        btn_about->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 341, 91));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/picture/title.png);"));
        WindowFirst->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowFirst);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        WindowFirst->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowFirst);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowFirst->setStatusBar(statusbar);

        retranslateUi(WindowFirst);

        QMetaObject::connectSlotsByName(WindowFirst);
    } // setupUi

    void retranslateUi(QMainWindow *WindowFirst)
    {
        WindowFirst->setWindowTitle(QCoreApplication::translate("WindowFirst", "\345\256\235\347\237\263\350\277\267\351\230\265", nullptr));
        btn_mainToGame->setText(QCoreApplication::translate("WindowFirst", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        btn_mainToRank->setText(QCoreApplication::translate("WindowFirst", "\346\216\222\350\241\214\346\246\234", nullptr));
        label_welcome->setText(QCoreApplication::translate("WindowFirst", "           welcome", nullptr));
        btn_name->setText(QCoreApplication::translate("WindowFirst", "\350\256\276\347\275\256\345\247\223\345\220\215", nullptr));
        btn_help->setText(QCoreApplication::translate("WindowFirst", "\345\270\256\345\212\251", nullptr));
        btn_about->setText(QCoreApplication::translate("WindowFirst", "\345\205\263\344\272\216", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowFirst: public Ui_WindowFirst {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWFIRST_H
