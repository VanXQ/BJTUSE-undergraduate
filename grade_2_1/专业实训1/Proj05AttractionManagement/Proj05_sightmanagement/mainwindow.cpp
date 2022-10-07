//
// Created by Van_XQ on 2021/11/28.
//

#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    graph=new Graph_DG(6,18);
    graph->createGraph();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sevennineeightPark_clicked(bool checked)
{
    ui->inform->setText(QString::fromStdString(graph->place[0].information));
}

void MainWindow::on_OlympicsPark_clicked(bool checked)
{
    ui->inform->setText(QString::fromStdString(graph->place[1].information));
}

void MainWindow::on_YuanMingPark_clicked(bool checked)
{
    ui->inform->setText(QString::fromStdString(graph->place[2].information));
}

void MainWindow::on_SummerPalace_clicked(bool checked)
{
    ui->inform->setText(QString::fromStdString(graph->place[3].information));
}

void MainWindow::on_TianTanPark_clicked(bool checked)
{
    ui->inform->setText(QString::fromStdString(graph->place[4].information));
}

void MainWindow::on_ChaoYangPark_clicked(bool checked)
{
    ui->inform->setText(QString::fromStdString(graph->place[5].information));
}

void MainWindow::on_start_clicked(bool checked)
{
    std::string fromPlace=ui->from->toPlainText().toStdString();
    std::string endPlace=ui->destination->toPlainText().toStdString();
    std::string mediumPlace=ui->medium->toPlainText().toStdString();
    int f=graph->find_ID(fromPlace);
    int e=graph->find_ID(endPlace);
    int leng[3];
    if(mediumPlace=="")
    {
        graph->Dijkstra(f);
        std::string wayOfPath=graph->print_path(f,e,leng[0]);
        ui->way->setText(QString::fromStdString(wayOfPath+ "  总长为： "+std::to_string(leng[0]) +"米"));
    }else
    {
        int m=graph->find_ID(mediumPlace);
        graph->Dijkstra(f);
        std::string wayOfPathF2E=graph->print_path(f,e,leng[0]);
        graph->Dijkstra(m);
        std::string wayOfPathF2M=graph->print_path(m,f,leng[1]);
        std::string wayOfPathM2E=graph->print_path(m,e,leng[2]);
        graph->Dijkstra(e);
        std::string wayOfPathE2F=graph->print_path(e,f,leng[0]);
        std::string wayOfPathE2M=graph->print_path(e,m,leng[2]);
        if(leng[0]>=leng[1]&&leng[0]>=leng[2])
        {
            ui->way->setText(QString::fromStdString(wayOfPathF2M+wayOfPathM2E+ "  总长为： "+std::to_string(leng[1]+leng[2]) +"米"));
        }else if(leng[1]>=leng[0]&&leng[1]>=leng[2])
        {
            ui->way->setText(QString::fromStdString(wayOfPathF2E+wayOfPathE2M+ "  总长为： "+std::to_string(leng[0]+leng[2]) +"米"));
        }else
        {
            ui->way->setText(QString::fromStdString(wayOfPathE2F+wayOfPathF2M+ "  总长为： "+std::to_string(leng[0]+leng[1]) +"米"));
        }
    }
}

void MainWindow::on_pushButton_clicked(bool checked)
{
    std::string fromPlace=ui->froming->toPlainText().toStdString();
    int f=graph->find_ID(fromPlace);
    graph->DFS(f-1);
    ui->way->setText(QString::fromStdString("推荐路径是： "+graph->pat));
}


