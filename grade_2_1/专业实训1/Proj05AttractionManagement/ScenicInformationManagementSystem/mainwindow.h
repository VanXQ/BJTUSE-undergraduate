#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rungraph.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PeoplePark_stateChanged(int arg1);

    void on_TianFuSquare_stateChanged(int arg1);

    void on_ChunXiRoad_stateChanged(int arg1);

    void on_JinLi_stateChanged(int arg1);

    void on_PandaBase_stateChanged(int arg1);

    void on_DuFuCaoTang_stateChanged(int arg1);

    void on_ShortestRoad_clicked();

    void on_DFS_clicked();

    void on_Suggestions_clicked();

private:
    Ui::MainWindow *ui;
    RunGraph op;

    int checkNum = 0;

    void Check();
    QString LocationStr(int i);
};
#endif // MAINWINDOW_H
