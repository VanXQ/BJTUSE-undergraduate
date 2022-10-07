#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private slots:

    [[maybe_unused]] void on_compress_clicked([[maybe_unused]] bool clicked);

    [[maybe_unused]] void on_extract_clicked([[maybe_unused]] bool clicked);

    [[maybe_unused]] static void on_pushButton_clicked([[maybe_unused]] bool clicked);

protected:
    static void OpenURL(const QString &);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
