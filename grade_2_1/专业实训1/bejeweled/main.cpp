#include "WindowFirst.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowFirst w;
    w.show();
    return a.exec();
}

