/********************************************************************************
** Form generated from reading UI file 'WindowIntro.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWINTRO_H
#define UI_WINDOWINTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowIntro
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowIntro)
    {
        if (WindowIntro->objectName().isEmpty())
            WindowIntro->setObjectName(QString::fromUtf8("WindowIntro"));
        WindowIntro->resize(413, 537);
        WindowIntro->setMinimumSize(QSize(413, 537));
        WindowIntro->setMaximumSize(QSize(413, 537));
        WindowIntro->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(WindowIntro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(3, 6, 411, 511));
        WindowIntro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowIntro);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 413, 26));
        WindowIntro->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowIntro);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowIntro->setStatusBar(statusbar);

        retranslateUi(WindowIntro);

        QMetaObject::connectSlotsByName(WindowIntro);
    } // setupUi

    void retranslateUi(QMainWindow *WindowIntro)
    {
        WindowIntro->setWindowTitle(QCoreApplication::translate("WindowIntro", "\345\270\256\345\212\251", nullptr));
        textEdit->setHtml(QCoreApplication::translate("WindowIntro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:18pt; font-weight:600; color:#00007f;\">\346\270\270\346\210\217\350\247\204\345\210\231\357\274\232</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt; font-weight:600; color:#00007f;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><"
                        "span style=\" font-family:'SimSun'; font-size:14pt; font-weight:600; color:#00007f;\">1\343\200\201\344\272\244\346\215\242</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt; font-weight:600; color:#00007f;\">\347\216\251\345\256\266\351\200\211\344\270\255\347\233\270\351\202\273\357\274\210\346\250\252\343\200\201\347\253\226\357\274\211\347\232\204\344\270\244\344\270\252\345\256\235\347\237\263\344\275\215\347\275\256\345\217\221\347\224\237\344\272\222\346\215\242\357\274\214\345\246\202\346\236\234\344\272\222\346\215\242\346\210\220\345\212\237\345\210\231\346\266\210\345\216\273\345\256\235\347\237\263\357\274\214\345\220\246\345\210\231\345\217\226\346\266\210\344\275\215\347\275\256\344\272\222\346\215\242\343\200\202</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-weight:600; color:#00007f;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; font-weight:600; color:#00007f;\">2\343\200\201\347\233\270\346\266\210</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt; font-weight:600; color:#00007f;\">\347\216\251\345\256\266\351\200\211\346\213\251\344\270\244\344\270\252\345\256\235\347\237\263\350\277\233\350\241\214\344\275\215\347\275\256\344\272\222\346\215\242\357\274\214\344\272\222\346\215\242\345\220\216\345\246\202\346\236\234\346\250\252\346\216\222\346\210\226\347\253\226\346\216\222\347\232\204\346\234\2113\344\270\252\346\210\2263\344\270\252\344\273\245\344\270\212\347\232\204\347\233\270\345\220\214\345"
                        "\256\235\347\237\263 \357\274\214\345\210\231\346\266\210\345\216\273\350\277\231\344\270\252\347\233\270\345\220\214\345\256\235\347\237\263\357\274\214\345\246\202\346\236\234\344\272\222\346\215\242\345\220\216\346\262\241\346\234\211\345\217\257\344\273\245\346\266\210\345\216\273\347\232\204\345\256\235\347\237\263\357\274\214\345\210\231\351\200\211\344\270\255\347\232\204\344\270\244\344\270\252\345\256\235\347\237\263\346\215\242\345\233\236\345\216\237\346\235\245\347\232\204\344\275\215\347\275\256\343\200\202\346\266\210\345\216\273\345\220\216\347\232\204\347\251\272\344\275\215\347\224\261\344\270\212\351\235\242\347\232\204\345\256\235\347\237\263\346\216\211\344\270\213\346\235\245\350\241\245\351\275\220\343\200\202</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-weight:600; color:#00007f;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-b"
                        "ottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; font-weight:600; color:#00007f;\">3\343\200\201\350\277\236\347\273\255</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:11pt; font-weight:600; color:#00007f;\">\347\216\251\345\256\266\346\266\210\345\216\273\345\256\235\347\237\263\345\220\216\357\274\214\344\270\212\351\235\242\347\232\204\345\256\235\347\237\263\346\216\211\344\270\213\346\235\245\350\241\245\351\275\220\347\251\272\344\275\215\343\200\202\345\246\202\346\236\234\350\277\231\346\227\266\346\270\270\346\210\217\346\261\240\344\270\255\346\234\211\350\277\236\347\273\255\346\221\206\346\224\276\357\274\210\346\250\252\343\200\201\347\253\226\357\274\211\347\232\2043\344\270\252\346\210\2263\344\270\252\344\273\245\344\270\212\347\233\270\345\220\214\345\256\235"
                        "\347\237\263\357\274\214\345\210\231\345\217\257\344\273\245\346\266\210\345\216\273\350\277\231\344\272\233\345\256\235\347\237\263\357\274\214\350\277\231\345\260\261\346\230\257\344\270\200\346\254\241\350\277\236\351\224\201\343\200\202\347\251\272\344\275\215\350\242\253\346\226\260\347\232\204\345\256\235\347\237\263\345\241\253\345\205\205\357\274\214\345\217\210\345\217\257\344\273\245\350\277\233\350\241\214\344\270\213\344\270\200\346\254\241\350\277\236\351\224\201\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; font-weight:600; color:#00007f;\">4\343\200\201</span><span style=\" font-family:'SimSun'; font-size:14pt; font-weight:600; color:#ff0000;\">\351\201\223\345\205\267</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fami"
                        "ly:'SimSun'; font-size:11pt; font-weight:600; color:#00007f;\">\347\216\251\345\256\266\345\234\250\346\266\210\345\216\273\345\256\235\347\237\263\347\232\204\350\277\207\347\250\213\344\270\255\344\274\232\350\216\267\345\276\227\351\201\223\345\205\267\357\274\214\347\202\271\345\207\273\351\201\223\345\205\267\345\233\276\346\240\207\345\220\216\357\274\214\347\202\271\345\207\273\345\256\235\347\237\263\351\230\265\344\273\273\344\270\200\345\244\204\357\274\214\345\215\263\345\217\257\350\247\246\345\217\221\351\201\223\345\205\267\346\225\210\346\236\234\357\274\214\345\205\267\344\275\223\346\225\210\346\236\234\357\274\232\345\215\201\345\255\227\351\201\223\345\205\267\345\217\257\344\273\245\346\266\210\345\216\273\347\202\271\345\207\273\345\244\204\345\220\214\344\270\200\350\241\214\345\222\214\345\220\214\344\270\200\345\210\227\347\232\204\347\211\251\345\223\201\357\274\214\347\202\270\345\274\271\351\201\223\345\205\267\345\217\257\344\273\245\346\266\210\345\216\273\344\273\245\347\202\271\345"
                        "\207\273\345\244\204\344\270\272\344\270\255\345\277\2033*3\347\232\204\346\226\271\351\230\265\347\211\251\345\223\201\357\274\214\351\255\224\346\263\225\346\243\222\351\201\223\345\205\267\350\257\276\344\273\245\346\266\210\345\216\273\345\256\235\347\237\263\351\230\265\344\270\255\344\270\216\347\202\271\345\207\273\347\232\204\347\211\251\345\223\201\347\232\204\347\247\215\347\261\273\347\233\270\345\220\214\347\232\204\346\211\200\346\234\211\347\211\251\345\223\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowIntro: public Ui_WindowIntro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWINTRO_H
