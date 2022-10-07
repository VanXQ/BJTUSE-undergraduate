//
// Created by Van_XQ on 2021/9/30.
//
#include "widget.h"/
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //加载css样式表
    QFile file("../StyleSheet/style.css");
    file.open(QIODevice::ReadOnly);
    QString css =file.readAll();
    qApp->setStyleSheet(css);
    file.close();
    Widget w;
    w.show();

    return a.exec();
}
