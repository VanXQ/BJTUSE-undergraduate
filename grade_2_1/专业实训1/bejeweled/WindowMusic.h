#ifndef WindowMusic_H
#define WindowMusic_H

#include <QMainWindow>
#include <QFileDialog>
#include "MusicControl.h"

namespace Ui {
class WindowMusic;
}

class WindowMusic : public QMainWindow
{
    Q_OBJECT

public:
    WindowMusic(QWidget *parent = nullptr);
    ~WindowMusic();
private:
    void closeEvent(QCloseEvent *event);
private slots:

    void on_Button_exit_clicked();

    void on_Button_sure_clicked();

    void on_btn_path_clicked();
    void doGametoMusic();
signals:
    void musicToGame();
    void set_music_background_change(QString);
private:
    Ui::WindowMusic *ui;

    QString BGM;

    void Music_Default();
};

#endif // WindowMusic_H
