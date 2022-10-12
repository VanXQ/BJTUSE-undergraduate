/********************************************************************************
** Form generated from reading UI file 'WindowTheme.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWTHEME_H
#define UI_WINDOWTHEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowTheme
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QRadioButton *radioButton_Theme_default;
    QRadioButton *radioButton_Theme_custom;
    QLabel *label;
    QLineEdit *lineEdit_path_backgroundimags;
    QLabel *label_2;
    QToolButton *toolButton_selsect_backgroundiamgs;
    QComboBox *comboBox_gemtype;
    QPushButton *btn_themeToSet;
    QPushButton *btn_theme_confirm;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowTheme)
    {
        if (WindowTheme->objectName().isEmpty())
            WindowTheme->setObjectName(QString::fromUtf8("WindowTheme"));
        WindowTheme->resize(611, 358);
        WindowTheme->setMinimumSize(QSize(611, 358));
        WindowTheme->setMaximumSize(QSize(611, 358));
        centralwidget = new QWidget(WindowTheme);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 20, 491, 191));
        groupBox->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton_Theme_default = new QRadioButton(groupBox);
        radioButton_Theme_default->setObjectName(QString::fromUtf8("radioButton_Theme_default"));
        radioButton_Theme_default->setGeometry(QRect(140, 30, 81, 19));
        radioButton_Theme_default->setChecked(true);
        radioButton_Theme_default->setAutoRepeat(false);
        radioButton_Theme_custom = new QRadioButton(groupBox);
        radioButton_Theme_custom->setObjectName(QString::fromUtf8("radioButton_Theme_custom"));
        radioButton_Theme_custom->setGeometry(QRect(280, 30, 81, 19));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 72, 31));
        lineEdit_path_backgroundimags = new QLineEdit(groupBox);
        lineEdit_path_backgroundimags->setObjectName(QString::fromUtf8("lineEdit_path_backgroundimags"));
        lineEdit_path_backgroundimags->setGeometry(QRect(92, 70, 311, 31));
        lineEdit_path_backgroundimags->setReadOnly(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 130, 72, 31));
        toolButton_selsect_backgroundiamgs = new QToolButton(groupBox);
        toolButton_selsect_backgroundiamgs->setObjectName(QString::fromUtf8("toolButton_selsect_backgroundiamgs"));
        toolButton_selsect_backgroundiamgs->setGeometry(QRect(420, 70, 47, 31));
        toolButton_selsect_backgroundiamgs->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);"));
        comboBox_gemtype = new QComboBox(groupBox);
        comboBox_gemtype->setObjectName(QString::fromUtf8("comboBox_gemtype"));
        comboBox_gemtype->setGeometry(QRect(90, 130, 311, 31));
        btn_themeToSet = new QPushButton(centralwidget);
        btn_themeToSet->setObjectName(QString::fromUtf8("btn_themeToSet"));
        btn_themeToSet->setGeometry(QRect(370, 240, 141, 51));
        btn_themeToSet->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        btn_theme_confirm = new QPushButton(centralwidget);
        btn_theme_confirm->setObjectName(QString::fromUtf8("btn_theme_confirm"));
        btn_theme_confirm->setGeometry(QRect(90, 240, 141, 51));
        btn_theme_confirm->setStyleSheet(QString::fromUtf8("border-image: url(:/new/picture/pushbotton_background.png);\n"
"font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        WindowTheme->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowTheme);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 611, 26));
        WindowTheme->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowTheme);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowTheme->setStatusBar(statusbar);

        retranslateUi(WindowTheme);

        QMetaObject::connectSlotsByName(WindowTheme);
    } // setupUi

    void retranslateUi(QMainWindow *WindowTheme)
    {
        WindowTheme->setWindowTitle(QCoreApplication::translate("WindowTheme", "\344\270\273\351\242\230\350\256\276\347\275\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WindowTheme", "\350\256\276\347\275\256\344\270\273\351\242\230", nullptr));
        radioButton_Theme_default->setText(QCoreApplication::translate("WindowTheme", "\351\273\230\350\256\244", nullptr));
        radioButton_Theme_custom->setText(QCoreApplication::translate("WindowTheme", "\350\207\252\345\256\232\344\271\211", nullptr));
        label->setText(QCoreApplication::translate("WindowTheme", "\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        lineEdit_path_backgroundimags->setText(QString());
        label_2->setText(QCoreApplication::translate("WindowTheme", "\345\256\235\347\237\263\345\233\276\347\211\207", nullptr));
        toolButton_selsect_backgroundiamgs->setText(QCoreApplication::translate("WindowTheme", "...", nullptr));
        btn_themeToSet->setText(QCoreApplication::translate("WindowTheme", "\350\277\224\345\233\236\350\256\276\347\275\256", nullptr));
        btn_theme_confirm->setText(QCoreApplication::translate("WindowTheme", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowTheme: public Ui_WindowTheme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWTHEME_H
