#include "WindowIntro.h"
#include "ui_WindowIntro.h"

WindowIntro::WindowIntro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowIntro)
{
    ui->setupUi(this);
}

WindowIntro::~WindowIntro()
{
    delete ui;
}
