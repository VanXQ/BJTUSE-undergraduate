#ifndef WindowIntro_H
#define WindowIntro_H

#include <QMainWindow>

namespace Ui {
class WindowIntro;
}

class WindowIntro : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowIntro(QWidget *parent = nullptr);
    ~WindowIntro();


private:
    Ui::WindowIntro *ui;
};

#endif // WindowIntro_H
