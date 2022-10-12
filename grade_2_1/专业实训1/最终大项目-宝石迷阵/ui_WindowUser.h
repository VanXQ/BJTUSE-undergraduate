/********************************************************************************
** Form generated from reading UI file 'WindowUser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWUSER_H
#define UI_WINDOWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowUser
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_name;
    QLabel *label;
    QPushButton *btn_confirm;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowUser)
    {
        if (WindowUser->objectName().isEmpty())
            WindowUser->setObjectName(QString::fromUtf8("WindowUser"));
        WindowUser->resize(632, 204);
        WindowUser->setMinimumSize(QSize(632, 204));
        WindowUser->setMaximumSize(QSize(632, 204));
        centralwidget = new QWidget(WindowUser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 607, 46));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_name = new QLineEdit(layoutWidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_name->sizePolicy().hasHeightForWidth());
        lineEdit_name->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        lineEdit_name->setFont(font);
        lineEdit_name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_name);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 10, 151, 39));
        label->setFont(font);
        btn_confirm = new QPushButton(centralwidget);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setGeometry(QRect(170, 110, 299, 39));
        btn_confirm->setFont(font);
        WindowUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowUser);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 632, 26));
        WindowUser->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowUser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowUser->setStatusBar(statusbar);

        retranslateUi(WindowUser);

        QMetaObject::connectSlotsByName(WindowUser);
    } // setupUi

    void retranslateUi(QMainWindow *WindowUser)
    {
        WindowUser->setWindowTitle(QCoreApplication::translate("WindowUser", "\350\256\276\347\275\256\345\247\223\345\220\215", nullptr));
        lineEdit_name->setText(QString());
        label->setText(QCoreApplication::translate("WindowUser", "Your name\357\274\232", nullptr));
        btn_confirm->setText(QCoreApplication::translate("WindowUser", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowUser: public Ui_WindowUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWUSER_H
