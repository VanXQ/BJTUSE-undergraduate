#ifndef WindowGame_H
#define WindowGame_H

#include <QMainWindow>
#include "GameLogic.h"
#include "RankLogic.h"
#include "WindowTheme.h"
#include "MusicControl.h"
#include <string.h>
#include <QDebug>
#include <QTimer>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>
#include <QCloseEvent>
#include "WindowAbout.h"
#include "WindowIntro.h"
#include "WindowTheme.h"
#include "WindowMusic.h"
namespace Ui {
class WindowGame;
}

class WindowGame : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowGame(QWidget *parent = nullptr);
    ~WindowGame();

    void Music();
    void Game_over(bool saveRank = true); //时间耗尽时游戏结束
    WindowAbout* about;
    WindowIntro* help;
    WindowRank* rank;
signals:
    void gameToMain();
    void gameToTheme();
    void gameToMusic();
private slots:
    void on_btn_gameToMain_clicked();
    void doMainToGame();
    void doThemeToGame();
    void doMusicToGame();
    void do_theme_gem_change(QString);
    void do_theme_background_change(QString);
    void do_music_background_change(QString);
    void on_pushButton_stop_clicked();
    void update_timebar(); //每隔一秒timebar就更新一次的槽函数
    void Game_start();
    void on_pushButton_continue_clicked();
    void on_pushButton_restart_clicked();
    void do_btn_hint();//点击提示
    void paintEvent(QPaintEvent *event);
    void closeEvent(QCloseEvent *event);
    void on_pushButton_2_clicked();
    void on_pushButton_cross_clicked();
    void on_pushButton_color_clicked();
    void on_pushButton_boom_clicked();

    void on_actionRestart_triggered();

    void on_actionAbout_triggered();

    void on_pushButton_Rank_clicked();

    void on_actionHelp_triggered();

    void on_actionzhuti_triggered();

    void on_actionMusic_triggered();
    void on_pushButton_clicked();
private:
    Ui::WindowGame *ui;
    QTimer *timer;
    QImage *image_stop = new QImage(":/new/picture/stop.png"); //游戏暂停的图片
    QImage *image_gameover = new QImage(":/new/picture/gameover.png"); //游戏结束的图片
    QLabel *label_image=new QLabel(this); //存放暂停图片的容器
    WindowTheme *theme = new WindowTheme();
    GameLogic *gamelogic = new GameLogic();
    QPoint point;//鼠标位置
    QPoint point1;
    QPoint point2;
    QPixmap pixmap[8];//存宝石图片
    QPixmap pixmap_di;//储存被选中框
    QPixmap number[10];//分数图片
    QPixmap disappear1;
    QPixmap disappear2;
    QPixmap disappear3;//消除泡泡的过程
    QPixmap circle;//圆圈
    QPixmap addscore;//加分
    int mouseflag;
    int focus;
    int focus_x;
    int focus_y;
    int eliminateNumber = 0;
    int isSelected[8][8];//是否选中（0/1）
    int midSituation[8][8];//消除中间过程（1，2，3，对应三张图片）
    string string_grade;//分数转成string类型
    int addScoreSituation=-1;//加分情况的状态（0-9）
    int totaltime=60; //时间
    QString gemtype; //宝石类型，其值为"gem","fish","childhood",默认值为"gem"
    int music = 1;
    int eli_music=0;
    MusicControl *mus = new MusicControl;
    MusicControl *mus1 = new MusicControl;
    RankLogic * ranklogic = new RankLogic();
    bool props=false,boom=false,cross=false,color=false; //判断是否选择道具

protected:
    void mousePressEvent(QMouseEvent *ev);
    QPoint mousePos;//鼠标位置a

};

#endif // WindowGame_H
