#ifndef WindowUser_H
#define WindowUser_H

#include <QMainWindow>
#include <QCloseEvent>
#include <Global.h>

namespace Ui {
class WindowUser;
}

class WindowUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowUser(QWidget *parent = nullptr);
    ~WindowUser();

signals:
    void nameConfirm();

private slots:
    void on_btn_confirm_clicked();

private:
//    void closeEvent(QCloseEvent *event);
    Ui::WindowUser *ui;
};

#endif // WindowUser_H
