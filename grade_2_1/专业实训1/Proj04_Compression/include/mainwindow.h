//
// Created by Van_XQ on 2021/11/18.
//

#ifndef PROJ04_COMPRESSION_MAINWINDOW_H
#define PROJ04_COMPRESSION_MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow {
Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);

    ~mainwindow() override;

private slots:

    [[maybe_unused]] void on_compress_clicked();

    [[maybe_unused]] void on_extract_clicked();

private:
    Ui::MainWindow *ui;

};


#endif //PROJ04_COMPRESSION_MAINWINDOW_H
