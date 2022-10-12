#ifndef WindowFirst_H
#define WindowFirst_H

#include <QMainWindow>
#include "WindowGame.h"
#include "WindowIntro.h"
#include "WindowMusic.h"
#include "WindowTheme.h"
#include "WindowAbout.h"
#include "WindowRank.h"
#include "WindowUser.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WindowFirst; }
QT_END_NAMESPACE

class WindowFirst : public QMainWindow
{
    Q_OBJECT

public:
    WindowFirst(QWidget *parent = nullptr);
    ~WindowFirst();
    WindowRank *rank;

private slots:
    void on_btn_mainToGame_clicked();
    void doGameToMain();

    void on_btn_mainToRank_clicked();

    void doNameConfirm();

    void on_btn_name_clicked();

    void on_btn_help_clicked();

    void on_btn_about_clicked();

signals:
    void mainToGame();

private:
    Ui::WindowFirst *ui;
    WindowGame *game;
    WindowUser *name;
    WindowIntro *help;
    WindowAbout *about;

};
#endif // WindowFirst_H
