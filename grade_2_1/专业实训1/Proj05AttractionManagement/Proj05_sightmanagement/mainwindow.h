//
// Created by Van_XQ on 2021/11/28.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"algorithms.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Graph_DG* graph;

private slots:
    void on_sevennineeightPark_clicked(bool checked);

    void on_OlympicsPark_clicked(bool checked);

    void on_YuanMingPark_clicked(bool checked);

    void on_SummerPalace_clicked(bool checked);

    void on_TianTanPark_clicked(bool checked);

    void on_ChaoYangPark_clicked(bool checked);

    void on_start_clicked(bool checked);

    void on_pushButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
