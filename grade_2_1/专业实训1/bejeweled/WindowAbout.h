#ifndef WindowAbout_H
#define WindowAbout_H

#include <QMainWindow>
#include <QDebug>
#include <QDate>
#include <QTime>

namespace Ui {
class WindowAbout;
}

class WindowAbout : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowAbout(QWidget *parent = nullptr);
    ~WindowAbout();

private:
    Ui::WindowAbout *ui;
    QString lastupdatetime;
};

#endif // WindowAbout_H
