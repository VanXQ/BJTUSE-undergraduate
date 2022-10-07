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
//    ui->lineEdit->setReadOnly(true);//只读
    ui->lineEdit->move(QPoint(0,0));//设置lineEdit位置
    ui->lineEdit->setAlignment(Qt::AlignRight);//从右侧显示
    setWindowTitle(QString("Calculator"));//设置标题
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
        if((ba[i]>='0' && ba[i]<='9')||ba[i]=='.')//1,数字直接输出
        {
            QString str;
            QByteArray m;
            for(;(ba[i]>='0' && ba[i]<='9')||ba[i]=='.';i++)
            {
                //将一个数字存储到字节数组m中
                char x=ba[i];
                m.append(x);
            }
            //将字节数组m转换为QString，并将字符串输出
            str=QString(m);
            out.append(str);
            i--;
        }else if(s1.isEmpty())//2,遇见非数字时, 如果堆栈为空，则直接把该字符放入堆栈
        {
            s1.push(ba[i]);
        }else if(ba[i]=='+' || ba[i]=='-')
            //2.1,如果是+或- 那么遍历栈顶元素 一直输出优先级>=加减的 即输出栈顶的+-*/,
            //当遇到其他字符时（如左括号）或堆栈空时break
        {
            while(!s1.empty()){
                if(s1.top()=='+' || s1.top()=='-'||s1.top()=='*' || s1.top()=='/'){
                    //把字符转换为字符串输出
                    QString str=QString(s1.pop());
                    out.append(str);
                }else break;
            }
            s1.push(ba[i]);
        }else if(ba[i]=='*' || ba[i]=='/')
            //2.2,如果是*或/ 那么遍历栈顶元素 一直输出优先级>=乘除的 即输出栈顶的*/,
            //当遇到其他字符时（如左括号，减号，除号）或堆栈空时break
        {
            while(!s1.empty()){
                if(s1.top()=='*' || s1.top()=='/'){
                    //把字符转换为字符串输出
                    QString str=QString(s1.pop());
                    out.append(str);
                }else break;
            }
            s1.push(ba[i]);
        }else if(ba[i]==')')
            //2.3,如果该字符是右括号时，一直输出栈顶元素，直到遇见左括号为止break:
        {
            while(!s1.empty()){
                if(s1.top()=='('){
                    s1.pop();
                    break;
                }
                //把字符转换为字符串输出
                QString str=QString(s1.pop());
                out.append(str);
            }
        }else if(ba[i]=='(')
            //2.4,如果该字符是左括号时，直接放入堆栈
        {
            s1.push(ba[i]);
        }
    }
    //字符串循环结束 再输出堆栈中剩余的数据
    while(!s1.empty()){
        //把字符转换为字符串输出
        QString str=QString(s1.pop());
        out.append(str);
    }
    //输出后缀表达式
    qDebug()<<out;
}

void Widget::Calc_Suffix()
{
    for(auto & i : out)
    {
        bool is_Num =true;
        i.toFloat(&is_Num);
        if(is_Num)//如果是数字，直接入栈
        {
            s2.push(i.toFloat(&is_Num));
        }else if(i=="+"||i=="-"||i=="*"||i=="/")
            //如果是运算符，弹栈两次，并进行运算，运算后，结果入栈
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
    in=ui->lineEdit->text();//获取表达式
    getChar();
    getSuffix();
    Calc_Suffix();
    ui->lineEdit->clear();//清空文本编辑框
    ui->lineEdit->setText(QString("%1").arg(result));//显示结果
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
    //清空所有内容，并初始化
    ui->lineEdit->clear();
    m_init();
}

[[maybe_unused]] void Widget::on_pushButton_17_clicked()
{
    //退格删除一个字符
    ui->lineEdit->backspace();
}
