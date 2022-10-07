#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>
#include <fstream>
#include <io.h>
#include<stdlib.h>
#include<string>
#include"huffmantree.h"
#include"ioimg.h"
#include "FILEio.h"
#include"main.h"
#include<QFileDialog>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_compress_clicked(bool checked)
{
    int n=BYTESIZE;
    int flag=1;
    HuffNode hufftree[512];//最多511个结点
    QStringList fileNames = QFileDialog::getOpenFileNames(this,
                                                    tr("选择文件（可多选）"),
                                                    "C:",
                                                    tr("图片文件(*bmp);;文本文件(*txt)"));
    for(auto & fileName : fileNames)
    {
        QString buf;
        buf=fileName;
        buf=QDir::toNativeSeparators(buf);
        buf=QDir::toNativeSeparators(buf);
        QFileInfo fileinfo=QFileInfo(fileName);
       QString of=fileinfo.completeBaseName();
       of+=".huf";
        flag = 0;
        char ifname[256];
        char ofname[256];
        strcpy(ifname,(char*)(buf.toStdString().c_str()));
        strcpy(ofname,(char*)(of.toStdString().c_str()));
        for (int a = 0; a < 512; a++)
        {
            hufftree[a].parent = -1;
            hufftree[a].ch = NULL;
            hufftree[a].weight = -1;
            hufftree[a].lchild = -1;
            hufftree[a].rchild = -1;
        }
        int m=compressfile(&n, &flag,ifname,ofname,hufftree);
        if(m==0)
        {
            QMessageBox::information(NULL, "ERROR", "File didnot exist!",
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            ui->filePath->append(buf +" cannot be compressed");
        }
        else {ui->filePath->append(buf +" is compressed successfully");
            FILE* before, * after;
            before = fopen(ifname,"r"); //open file for read
            after=fopen(ofname, "r");
            long Blength = filelength(fileno(before)); //get length of file
            long Alength=filelength(fileno(after));
            ui->filePath->append("\nThe length of file compressed before is "+QString("%1").arg(Blength)+"Bytes"+"\nThe length of file compressed is "+QString("%1").arg(Alength)+"\nThe compressibility is "+"Bytes"+QString("%1").arg((double)Alength/Blength*100.0)+"%\n");
            fclose(before);
            fclose(after);
        }
    }
}

void MainWindow::on_uncompress_clicked(bool checked)
{
    int flag=1;
    HuffNode hufftree[512];//最多511个结点
    QStringList fileNames = QFileDialog::getOpenFileNames(this,
                                                    tr("文件对话框！"),
                                                    "C:",
                                                    tr("哈夫曼文件(*huf)"));
    for(int i=0;i<fileNames.size();i++)
    {
        QString buf;
        buf=fileNames[i];
        buf=QDir::toNativeSeparators(buf);
        buf=QDir::toNativeSeparators(buf);
        QFileInfo fileinfo=QFileInfo(fileNames[i]);
       QString of=fileinfo.completeBaseName();
        flag = 0;
        char ifname[256];
        char ofname[256];
        strcpy(ifname,(char*)(buf.toStdString().c_str()));
        strcpy(ofname,(char*)(of.toStdString().c_str()));
        for (int a = 0; a < 512; a++)
        {
            hufftree[a].parent = -1;
            hufftree[a].ch = NULL;
            hufftree[a].weight = -1;
            hufftree[a].lchild = -1;
            hufftree[a].rchild = -1;
        }
        int m=decompressfile(ifname, ofname, &flag, hufftree);
        if(m==0)
        {
            QMessageBox::information(NULL, "ERROR", "文件不存在",
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            ui->filePath->append(buf +" 无法压缩！请再想想办法！");
        }else {ui->filePath->append(buf +" 已成功压缩！！");}
    }
}
