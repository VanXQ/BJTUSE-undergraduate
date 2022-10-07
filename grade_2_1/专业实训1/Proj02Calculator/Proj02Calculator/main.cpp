//
// Created by Van_XQ on 2021/9/30.
//
#include <iostream>
#include "window.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //加载样式表
    QFile file("../style.css");
    file.open(QIODevice::ReadOnly);
    QString css =file.readAll();
    qApp->setStyleSheet(css);
    file.close();
    Widget win;
    win.show();

    return a.exec();

}
