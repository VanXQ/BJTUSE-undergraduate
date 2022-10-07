/********************************************************************************
** Form generated from reading UI file 'WindowAbout.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWABOUT_H
#define UI_WINDOWABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAbout
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowAbout)
    {
        if (WindowAbout->objectName().isEmpty())
            WindowAbout->setObjectName(QString::fromUtf8("WindowAbout"));
        WindowAbout->resize(432, 364);
        WindowAbout->setMinimumSize(QSize(432, 364));
        WindowAbout->setMaximumSize(QSize(432, 364));
        WindowAbout->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(WindowAbout);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 220, 381, 81));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 10, 221, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 110, 261, 81));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"Microsoft YaHei UI\";"));
        WindowAbout->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowAbout);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 432, 26));
        WindowAbout->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowAbout);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowAbout->setStatusBar(statusbar);

        retranslateUi(WindowAbout);

        QMetaObject::connectSlotsByName(WindowAbout);
    } // setupUi

    void retranslateUi(QMainWindow *WindowAbout)
    {
        WindowAbout->setWindowTitle(QCoreApplication::translate("WindowAbout", "\345\205\263\344\272\216", nullptr));
        label->setText(QCoreApplication::translate("WindowAbout", "\346\210\220\345\221\230\357\274\232\347\233\233\346\226\207\347\232\223\357\274\214\345\274\240\345\273\272\345\205\264\357\274\214\351\203\255\347\220\246\357\274\214\344\270\207\345\205\264\345\205\250", nullptr));
        label_2->setText(QCoreApplication::translate("WindowAbout", "\345\256\235\347\237\263\350\277\267\351\230\265", nullptr));
        label_3->setText(QCoreApplication::translate("WindowAbout", "\346\214\207\345\257\274\350\200\201\345\270\210\357\274\232\350\265\265\345\256\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowAbout: public Ui_WindowAbout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWABOUT_H
