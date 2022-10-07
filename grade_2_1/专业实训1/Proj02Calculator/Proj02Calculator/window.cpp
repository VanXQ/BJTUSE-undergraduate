//
// Created by Van_XQ on 2021/9/30.
//

// You may need to build the project (run Qt uic code generator) to get "ui_window.h" resolved

#include "window.h"
#include "ui_window.h"
#include <iostream>
Widget::Widget(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::Widget)
{
    ui->setupUi(this);
//    ui->lineEdit->setReadOnly(true);//ֻ��
    ui->lineEdit->move(QPoint(0,0));//����lineEditλ��
    ui->lineEdit->setAlignment(Qt::AlignRight);//���Ҳ���ʾ
    setWindowTitle(QString("Calculator"));//���ñ���
}

Widget::~Widget()
{
    delete ui;
}

void Widget::getChar()
{
    ba=in.toLatin1();
}

void Widget::getSuffix()
{
    for(int i=0;i<ba.size();i++)
    {
        if((ba[i]>='0' && ba[i]<='9')||ba[i]=='.')//1,����ֱ�����
        {
            QString str;
            QByteArray m;
            for(;(ba[i]>='0' && ba[i]<='9')||ba[i]=='.';i++)
            {
                //��һ�����ִ洢���ֽ�����m��
                char x=ba[i];
                m.append(x);
            }
            //���ֽ�����mת��ΪQString�������ַ������
            str=QString(m);
            out.append(str);
            i--;
        }else if(s1.isEmpty())//2,����������ʱ, �����ջΪ�գ���ֱ�ӰѸ��ַ������ջ
        {
            s1.push(ba[i]);
        }else if(ba[i]=='+' || ba[i]=='-')
            //2.1,�����+��- ��ô����ջ��Ԫ�� һֱ������ȼ�>=�Ӽ��� �����ջ����+-*/,
            //�����������ַ�ʱ���������ţ����ջ��ʱbreak
        {
            while(!s1.empty()){
                if(s1.top()=='+' || s1.top()=='-'||s1.top()=='*' || s1.top()=='/'){
                    //���ַ�ת��Ϊ�ַ������
                    QString str=QString(s1.pop());
                    out.append(str);
                }else break;
            }
            s1.push(ba[i]);
        }else if(ba[i]=='*' || ba[i]=='/')
            //2.2,�����*��/ ��ô����ջ��Ԫ�� һֱ������ȼ�>=�˳��� �����ջ����*/,
            //�����������ַ�ʱ���������ţ����ţ����ţ����ջ��ʱbreak
        {
            while(!s1.empty()){
                if(s1.top()=='*' || s1.top()=='/'){
                    //���ַ�ת��Ϊ�ַ������
                    QString str=QString(s1.pop());
                    out.append(str);
                }else break;
            }
            s1.push(ba[i]);
        }else if(ba[i]==')')
            //2.3,������ַ���������ʱ��һֱ���ջ��Ԫ�أ�ֱ������������Ϊֹbreak:
        {
            while(!s1.empty()){
                if(s1.top()=='('){
                    s1.pop();
                    break;
                }
                //���ַ�ת��Ϊ�ַ������
                QString str=QString(s1.pop());
                out.append(str);
            }
        }else if(ba[i]=='(')
            //2.4,������ַ���������ʱ��ֱ�ӷ����ջ
        {
            s1.push(ba[i]);
        }
    }
    //�ַ���ѭ������ �������ջ��ʣ�������
    while(!s1.empty()){
        //���ַ�ת��Ϊ�ַ������
        QString str=QString(s1.pop());
        out.append(str);
    }
    //�����׺���ʽ
    qDebug()<<out;
}

void Widget::Calc_Suffix()
{
    for(auto & i : out)
    {
        bool is_Num =true;
        i.toFloat(&is_Num);
        if(is_Num)//��������֣�ֱ����ջ
        {
            s2.push(i.toFloat(&is_Num));
        }else if(i=="+"||i=="-"||i=="*"||i=="/")
            //��������������ջ���Σ����������㣬����󣬽����ջ
        {
            float x=s2.pop();
            float y=s2.pop();
            if(i=="+"){
                s2.push(y+x);
            }else if(i=="-"){
                s2.push(y-x);
            }else if(i=="*"){
                s2.push(y*x);
            }else if(i=="/"){
                s2.push(y/x);
            }
        }
    }
    result = s2.pop();
    qDebug()<<result;
}

void Widget::m_init()
{
    ba.clear();
    out.clear();
}

[[maybe_unused]] void Widget::on_pushButton_clicked()
{
    in=ui->lineEdit->text();//��ȡ���ʽ
    getChar();
    getSuffix();
    Calc_Suffix();
    ui->lineEdit->clear();//����ı��༭��
    ui->lineEdit->setText(QString("%1").arg(result));//��ʾ���
    m_init();
}

[[maybe_unused]] void Widget::on_pushButton_2_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(0));
}

[[maybe_unused]] void Widget::on_pushButton_3_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(1));
}

 [[maybe_unused]] void Widget::on_pushButton_4_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(2));
}

[[maybe_unused]] void Widget::on_pushButton_5_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(3));
}

[[maybe_unused]] void Widget::on_pushButton_6_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(4));
}

 [[maybe_unused]] void Widget::on_pushButton_7_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(5));
}

[[maybe_unused]] void Widget::on_pushButton_8_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(6));
}

[[maybe_unused]] void Widget::on_pushButton_9_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(7));
}

[[maybe_unused]] void Widget::on_pushButton_10_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(8));
}

[[maybe_unused]] void Widget::on_pushButton_11_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(9));
}

[[maybe_unused]] void Widget::on_pushButton_12_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("+"));
}

[[maybe_unused]] [[maybe_unused]] void Widget::on_pushButton_13_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("-"));
}

[[maybe_unused]] [[maybe_unused]] void Widget::on_pushButton_14_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("*"));
}

[[maybe_unused]] [[maybe_unused]] void Widget::on_pushButton_15_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("/"));
}

[[maybe_unused]] [[maybe_unused]] void Widget::on_pushButton_20_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("."));
}

[[maybe_unused]] [[maybe_unused]] void Widget::on_pushButton_18_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg("("));
}

[[maybe_unused]] void Widget::on_pushButton_19_clicked()
{
    QString str=ui->lineEdit->text();
    ui->lineEdit->setText(QString("%1%2").arg(str).arg(")"));
}

[[maybe_unused]] void Widget::on_pushButton_16_clicked()
{
    //����������ݣ�����ʼ��
    ui->lineEdit->clear();
    m_init();
}

[[maybe_unused]] void Widget::on_pushButton_17_clicked()
{
    //�˸�ɾ��һ���ַ�
    ui->lineEdit->backspace();
}
