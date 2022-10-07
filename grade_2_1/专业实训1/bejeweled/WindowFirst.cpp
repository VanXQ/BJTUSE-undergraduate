#include "WindowFirst.h"
#include "ui_WindowFirst.h"

WindowFirst::WindowFirst(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WindowFirst)
{
    ui->setupUi(this);

    game = new WindowGame(this);
    rank = WindowRank::getWindowRank();
    name = new WindowUser(this);
    help = new WindowIntro(this);
    about = new WindowAbout(this);
    connect(game, SIGNAL(gameToMain()), this, SLOT(doGameToMain()));
    connect(name, SIGNAL(nameConfirm()), this, SLOT(doNameConfirm()));
    ui->label_welcome->setText("Welcome ");
}

WindowFirst::~WindowFirst()
{
    delete ui;
}


void WindowFirst::on_btn_mainToGame_clicked()
{
    this->setDisabled(true);
    emit mainToGame();
}

void WindowFirst::doGameToMain()
{
    this->setDisabled(false);
    this->show();
}

void WindowFirst::on_btn_mainToRank_clicked()
{
    rank->showRank();
}

void WindowFirst::doNameConfirm()
{
    QString qstr=QString::fromLocal8Bit(g_rank.strName);
    this->ui->label_welcome->setText("welcome，" + qstr);
//        this->ui->label_welcome->setText("welcome，" + g_rank.strName);
}

void WindowFirst::on_btn_name_clicked()
{
    name->show();
}

void WindowFirst::on_btn_help_clicked()
{
    help->show();
}

void WindowFirst::on_btn_about_clicked()
{
    about->show();
}
