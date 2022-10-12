#include "WindowMusic.h"
#include "ui_WindowMusic.h"

WindowMusic::WindowMusic(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowMusic)
{
    ui->setupUi(this);
    connect(this,SIGNAL(musicToGame()),parent,SLOT(doMusicToGame()));
    connect(this,SIGNAL(set_music_background_change(QString)),parent,SLOT(do_music_background_change(QString)));
}

WindowMusic::~WindowMusic()
{
    delete ui;
}
void WindowMusic::Music_Default(){
    ui->radioButton->setChecked(true);
    ui->radioButton_3->setChecked(true);
}

void WindowMusic::on_Button_exit_clicked()
{
    emit musicToGame();
    this->close();
}

void WindowMusic::on_Button_sure_clicked()
{
    this->hide();
    emit set_music_background_change(ui->textEdit->toPlainText());
    emit musicToGame();
}

void WindowMusic::on_btn_path_clicked()
{
    QString background_path = QFileDialog::getOpenFileName(this, "选择背景文件","/","所有文件 (*.*)");
    if(!background_path.isEmpty()){
        ui->textEdit->setText(background_path);
    }
}
void WindowMusic::doGametoMusic()
{
    this->show();
}
void WindowMusic::closeEvent(QCloseEvent *event)
{
    emit musicToGame();
    this->close();
}
