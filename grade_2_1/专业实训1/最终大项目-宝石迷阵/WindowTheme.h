#ifndef WindowTheme_H
#define WindowTheme_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QDebug>
#include <QCloseEvent>
#include "Global.h"
namespace Ui {
class WindowTheme;
}

class WindowTheme : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowTheme(QWidget *parent = nullptr);
    ~WindowTheme();
     void initialgemtype();
private:
    void closeEvent(QCloseEvent *event);
signals:

    void game_theme_background_change(QString);
    void doThemetoGame();
    void changeTheme(QString);
    void set_theme_gem_change(QString);
private slots:
    void on_btn_themeToGame_clicked();
    void on_toolButton_selsect_backgroundiamgs_clicked();
    void on_btn_theme_confirm_clicked();
    void doGametoTheme();
private:
    Ui::WindowTheme *ui;
};

#endif // WindowTheme_H
