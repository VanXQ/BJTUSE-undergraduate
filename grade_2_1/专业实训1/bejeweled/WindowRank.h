#ifndef WindowRank_H
#define WindowRank_H

#include <QMainWindow>
#include "RankStorage.h"

namespace Ui {
class WindowRank;
}

class WindowRank : public QMainWindow
{
    Q_OBJECT

public:
    static WindowRank * getWindowRank();
    void showRank();
    ~WindowRank();
private:
    explicit WindowRank(QWidget *parent = nullptr);
    static WindowRank * windowrank;
    Ui::WindowRank *ui;
    int ranknum;
};
#endif // WindowRank_H
