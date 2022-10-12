#include "WindowUser.h"
#include "ui_WindowUser.h"

WindowUser::WindowUser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowUser)
{
    ui->setupUi(this);
}

WindowUser::~WindowUser()
{
    delete ui;
}

void WindowUser::on_btn_confirm_clicked()
{
    memset(g_rank.strName, 0, sizeof (char) * 50);
    strcpy(g_rank.strName, ui->lineEdit_name->text().toLocal8Bit().toStdString().c_str());
    this->close();
    emit nameConfirm();
}
