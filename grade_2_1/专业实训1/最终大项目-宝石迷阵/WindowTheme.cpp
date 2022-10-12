#include "WindowTheme.h"
#include "ui_WindowTheme.h"

WindowTheme::WindowTheme(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowTheme)
{
    ui->setupUi(this);
    initialgemtype();
    ui->lineEdit_path_backgroundimags->setText(bac_path);
    connect(this,SIGNAL(game_theme_background_change(QString)),parent,SLOT(do_theme_background_change(QString)));
    connect(this,SIGNAL(doThemetoGame()),parent,SLOT(doThemeToGame()));
    connect(this,SIGNAL(set_theme_gem_change(QString)),parent,SLOT(do_theme_gem_change(QString)));
}

WindowTheme::~WindowTheme()
{
    delete ui;
}

void WindowTheme::on_btn_themeToGame_clicked()
{
    this->close();
    emit doThemetoGame();
}
void WindowTheme::initialgemtype(){
    ui->comboBox_gemtype->addItem("gem");
    ui->comboBox_gemtype->addItem("childhood");
}
//自定义时，选择背景图片,将路径传递到CConfig类
void WindowTheme::on_toolButton_selsect_backgroundiamgs_clicked()
{
    QString background_path = QFileDialog::getOpenFileName(this, "选择背景文件","/","所有文件 (*.*)");
    if(!background_path.isEmpty()){
        ui->lineEdit_path_backgroundimags->setText(background_path);
    }
}

//确定后对背景图片、宝石图片、掩码图片进行更改，将其路径保存到config类中，在configlogic类中对cgame的背景、宝石图片进行具体修改
void WindowTheme::on_btn_theme_confirm_clicked()
{
    if(!ui->lineEdit_path_backgroundimags->text().isEmpty()){
        QString background_path=ui->lineEdit_path_backgroundimags->text();
        this->hide();
        emit game_theme_background_change(ui->lineEdit_path_backgroundimags->text());
        bac_path=ui->lineEdit_path_backgroundimags->text();
        emit doThemetoGame();
        emit set_theme_gem_change(ui->comboBox_gemtype->currentText());
    }
}
void WindowTheme::doGametoTheme()
{
    this->show();
}
void WindowTheme::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
    on_btn_themeToGame_clicked();
}

