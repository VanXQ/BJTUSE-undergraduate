/********************************************************************************
** Form generated from reading UI file 'WindowMusic.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWMUSIC_H
#define UI_WINDOWMUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowMusic
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QTextEdit *textEdit;
    QLabel *label;
    QToolButton *btn_path;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *Button_exit;
    QPushButton *Button_sure;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowMusic)
    {
        if (WindowMusic->objectName().isEmpty())
            WindowMusic->setObjectName(QString::fromUtf8("WindowMusic"));
        WindowMusic->resize(610, 368);
        WindowMusic->setMinimumSize(QSize(610, 368));
        WindowMusic->setMaximumSize(QSize(610, 368));
        centralwidget = new QWidget(WindowMusic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 551, 121));
        groupBox->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(120, 30, 101, 19));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(370, 30, 110, 19));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(70, 60, 391, 41));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 65, 51, 21));
        btn_path = new QToolButton(groupBox);
        btn_path->setObjectName(QString::fromUtf8("btn_path"));
        btn_path->setGeometry(QRect(480, 60, 61, 41));
        btn_path->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 170, 551, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(120, 30, 110, 19));
        radioButton_3->setChecked(true);
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(370, 30, 110, 19));
        Button_exit = new QPushButton(centralwidget);
        Button_exit->setObjectName(QString::fromUtf8("Button_exit"));
        Button_exit->setGeometry(QRect(360, 240, 141, 71));
        Button_exit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        Button_sure = new QPushButton(centralwidget);
        Button_sure->setObjectName(QString::fromUtf8("Button_sure"));
        Button_sure->setGeometry(QRect(90, 240, 131, 71));
        Button_sure->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        WindowMusic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowMusic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 610, 26));
        WindowMusic->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowMusic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowMusic->setStatusBar(statusbar);

        retranslateUi(WindowMusic);

        QMetaObject::connectSlotsByName(WindowMusic);
    } // setupUi

    void retranslateUi(QMainWindow *WindowMusic)
    {
        WindowMusic->setWindowTitle(QCoreApplication::translate("WindowMusic", "\351\237\263\346\225\210\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WindowMusic", "\350\203\214\346\231\257\351\237\263\344\271\220", nullptr));
        radioButton->setText(QCoreApplication::translate("WindowMusic", "\345\274\200\345\220\257", nullptr));
        radioButton_2->setText(QCoreApplication::translate("WindowMusic", "\345\205\263\351\227\255", nullptr));
        label->setText(QCoreApplication::translate("WindowMusic", "\350\267\257\345\276\204", nullptr));
        btn_path->setText(QCoreApplication::translate("WindowMusic", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("WindowMusic", "\351\237\263\346\225\210", nullptr));
        radioButton_3->setText(QCoreApplication::translate("WindowMusic", "\345\274\200\345\220\257", nullptr));
        radioButton_4->setText(QCoreApplication::translate("WindowMusic", "\345\205\263\351\227\255", nullptr));
        Button_exit->setText(QCoreApplication::translate("WindowMusic", "\350\277\224\345\233\236", nullptr));
        Button_sure->setText(QCoreApplication::translate("WindowMusic", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowMusic: public Ui_WindowMusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWMUSIC_H
