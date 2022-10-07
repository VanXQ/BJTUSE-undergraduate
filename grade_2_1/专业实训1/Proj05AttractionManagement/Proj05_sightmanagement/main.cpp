//
// Created by Van_XQ on 2021/11/28.
//

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Graph_DG::kruskal();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}
