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
    void getChar();//QStringתΪQByteArray
    void getSuffix();//��ȡ ��׺���ʽ
    void Calc_Suffix();//���� ��׺���ʽ
    void m_init();//��ʼ��
//    void m_out();//�������

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
    QString in;//������ʽ
    QByteArray ba;//������ʽת��Ϊ�ֽ�����
    QStack<char> s1;//��׺���ʽת��Ϊ��׺���ʽʱ�õ���ջ
    QVector<QString> out;//��׺���ʽ
    QStack<float> s2;//��׺���ʽ������ʱ�õ���ջ
    float result{};//������

};

#endif //PROJ02CALCULATOR_WINDOW_H
