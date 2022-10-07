//
// Created by Van_XQ on 2021/11/18.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainwindow.h" resolved

#include "include/mainwindow.h"
//#include "include/ui_mainwindow.h"
#include "include/huffman_Tree.h"
#include "qfiledialog.h"
#include "QMessageBox"
#include "io.h"
#include "include/function.h"


mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

mainwindow::~mainwindow() {
    delete ui;
}

[[maybe_unused]] void mainwindow::on_compress_clicked() {
    int n=256;
    int flag=1;
    Huffman_Node HuffmanTree[512];//定义最多512个节点
    QStringList filename= QFileDialog::getOpenFileNames(this, tr("选择文件，可以多选"),"D:",tr("图片文件(*bmp);;文本文件(*txt)"));
    for (auto & i : filename) {
        QString buf;
        buf=i;
        buf=QDir::toNativeSeparators(buf);
        buf=QDir::toNativeSeparators(buf);
        QFileInfo fileInfo=QFileInfo(i);
        QString of=fileInfo.completeBaseName();
        of+=".huf";
        char in_file_name[999];
        char out_file_name[999];
        strcpy(in_file_name,(char*)(buf.toStdString()).c_str());
        strcpy(out_file_name,(char*)(of.toStdString().c_str()));
        for (auto & a : HuffmanTree)
        {
            a.parent = -1;
            a.ch = '\0';
            a.count = -1;
            a.left_Child = -1;
            a.right_Child = -1;
        }
        int m=Compress_File(&n, &flag,in_file_name,out_file_name,HuffmanTree);
        if(m==0)
        {
            QMessageBox::information(nullptr, "ERROR", "文件不存在~",
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            ui->infomation->append(buf +"无法压缩！请再想想办法吧！");
        }
        else {ui->infomation->append(buf +"成功压缩！");
            FILE* before, * after;
            before = fopen(in_file_name,"r"); //open file for read
            after=fopen(out_file_name, "r");
            long length_1 = filelength(fileno(before)); //get length of file
            long length_2=filelength(fileno(after));
            ui->infomation->append("\n压缩前文件长度："+QString("%1").arg(length_1)+"字节"+"\n"+"压缩后文件长度："+QString("%1").arg(length_2)+"字节"+
                                                                                "\n压缩率："+QString("%1").arg((double)length_2/length_1*100.0)+"%\n");
            fclose(before);
            fclose(after);
        }
    }
}

[[maybe_unused]] void mainwindow::on_extract_clicked() {
    int flag = 1;
    Huffman_Node HuffmanTree[512];//最多511个结点
    QStringList fileNames = QFileDialog::getOpenFileNames(this,
                                                          tr("选择文件，可多选"),
                                                          "D:",
                                                          tr("哈夫曼文件(*huf)"));
    for (auto & fileName : fileNames) {
        QString buf;
        buf = fileName;
        buf = QDir::toNativeSeparators(buf);
        buf = QDir::toNativeSeparators(buf);
        QFileInfo fileinfo = QFileInfo(fileName);
        QString of = fileinfo.completeBaseName();
        flag = 0;
        char in_file_name[999];
        char out_file_name[999];
        strcpy(in_file_name, (char *) (buf.toStdString().c_str()));
        strcpy(out_file_name, (char *) (of.toStdString().c_str()));
        for (auto & a : HuffmanTree) {
            a.parent = -1;
            a.ch = '\0';
            a.count = -1;
            a.left_Child = -1;
            a.right_Child = -1;
        }
        int m = Extract_File(in_file_name, out_file_name, HuffmanTree);
        if (m == 0) {
            QMessageBox::information(nullptr, "!!!", "文件不存在",
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            ui->infomation->append(buf + " 无法压缩！请再想想办法！");
        } else { ui->infomation->append(buf + " 已成功压缩！！"); }
    }

}