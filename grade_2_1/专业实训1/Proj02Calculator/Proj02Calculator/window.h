//
// Created by Van_XQ on 2021/9/30.
//

#ifndef PROJ02CALCULATOR_WINDOW_H
#define PROJ02CAlCULATOR_WINDOW_H
#include <QWidget>
#include <QStack>
namespace Ui {
    class Widget;
}

class Widget :public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;
    void getChar();//QString转为QByteArray
    void getSuffix();//获取 后缀表达式
    void Calc_Suffix();//计算 后缀表达式
    void m_init();//初始化
//    void m_out();//测试输出

private slots:

    [[maybe_unused]] void on_pushButton_clicked();

    [[maybe_unused]] void on_pushButton_2_clicked();

    [[maybe_unused]] void on_pushButton_3_clicked();

    [[maybe_unused]] void on_pushButton_4_clicked();

    [[maybe_unused]] void on_pushButton_5_clicked();

    [[maybe_unused]] void on_pushButton_6_clicked();

    [[maybe_unused]] void on_pushButton_7_clicked();

    [[maybe_unused]] void on_pushButton_8_clicked();

    [[maybe_unused]] void on_pushButton_9_clicked();

    [[maybe_unused]] void on_pushButton_10_clicked();

    [[maybe_unused]] void on_pushButton_11_clicked();

    [[maybe_unused]] void on_pushButton_12_clicked();

    [[maybe_unused]] void on_pushButton_13_clicked();

    [[maybe_unused]] void on_pushButton_14_clicked();

    [[maybe_unused]] void on_pushButton_15_clicked();

    [[maybe_unused]] void on_pushButton_20_clicked();

    [[maybe_unused]] void on_pushButton_18_clicked();

    [[maybe_unused]] void on_pushButton_19_clicked();

    [[maybe_unused]] void on_pushButton_16_clicked();

    [[maybe_unused]] void on_pushButton_17_clicked();

private:
    Ui::Widget *ui;
    QString in;//输入表达式
    QByteArray ba;//输入表达式转换为字节数组
    QStack<char> s1;//中缀表达式转换为后缀表达式时用到的栈
    QVector<QString> out;//后缀表达式
    QStack<float> s2;//后缀表达式计算结果时用到的栈
    float result{};//计算结果

};

#endif //PROJ02CALCULATOR_WINDOW_H
