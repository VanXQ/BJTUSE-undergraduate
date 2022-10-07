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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *infomation;
    QPushButton *compress;
    QPushButton *extract;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuVan_RAR;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow) {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("VanRAR"));
        MainWindow->resize(468, 342);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 431, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        infomation = new QTextBrowser(verticalLayoutWidget);
        infomation->setObjectName(QString::fromUtf8("infomation"));

        verticalLayout->addWidget(infomation);

        compress = new QPushButton(verticalLayoutWidget);
        compress->setObjectName(QString::fromUtf8("compress"));

        verticalLayout->addWidget(compress);

        extract = new QPushButton(verticalLayoutWidget);
        extract->setObjectName(QString::fromUtf8("extract"));

        verticalLayout->addWidget(extract);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 468, 21));
        menuVan_RAR = new QMenu(menubar);
        menuVan_RAR->setObjectName(QString::fromUtf8("menuVan_RAR"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuVan_RAR->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow) const {
        MainWindow->setWindowTitle(QCoreApplication::translate("Van——RAR", "MainWindow", nullptr));
        compress->setText(QCoreApplication::translate("Van——RAR", "\345\216\213\347\274\251", nullptr));
        extract->setText(QCoreApplication::translate("Van——RAR", "\350\247\243\345\216\213", nullptr));
        pushButton->setText(QCoreApplication::translate("Van——RAR",
                                                        "\346\211\223\345\274\200\346\272\220\350\267\257\345\276\204",
                                                        nullptr));
        menuVan_RAR->setTitle(QCoreApplication::translate("Van——RAR", "Van_RAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow : public Ui_MainWindow {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
