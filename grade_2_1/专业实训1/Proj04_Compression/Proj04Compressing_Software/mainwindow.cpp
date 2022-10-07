#include "header/mainwindow.h"
#include "header/ui_mainwindow.h"
#include <io.h>
#include<string>
#include"header/huffmantree.h"
//#include"main.h"
#include<QFileDialog>
#include<QMessageBox>
#include <QProcess>
#include "qdesktopservices.h"
#include "qdir.h"
#include "header/main.h"

//#include "QUrl"
MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow) {
    ui->setupUi(this);
//    connect(on_pushButton_clicked(bool))
}

MainWindow::~MainWindow() {
    delete ui;
}

[[maybe_unused]] void MainWindow::on_compress_clicked([[maybe_unused]] bool clicked) {
    int n = BYTE_SIZE;
    int flag = 1;
    HuffNode Huffman_tree[512];//最多511个结点
    QStringList fileNames = QFileDialog::getOpenFileNames
            (this,
             tr("请选择文件（支持多选）"),
             "D:",
             tr("图片文件(*bmp);;文本文件(*txt)"));
    for (auto &fileName: fileNames) {
        QString buf;
        buf = fileName;
        buf = QDir::toNativeSeparators(buf);
        buf = QDir::toNativeSeparators(buf);
        QFileInfo fileinfo = QFileInfo(fileName);
        QString of = fileinfo.completeBaseName();
        of += ".huf";
        char in_file_name[BYTE_SIZE];
        char out_file_name[BYTE_SIZE];
        strcpy(in_file_name, (char *) (buf.toStdString().c_str()));
        strcpy(out_file_name, (char *) (of.toStdString().c_str()));
        for (auto &a: Huffman_tree) {
            a.parent = -1;
            a.ch = '\0';
            a.weight = -1;
            a.left_child = -1;
            a.right_child = -1;
        }
        int m = compress_file(&n, &flag, in_file_name, out_file_name, Huffman_tree);
        if (m == 0) {
            QMessageBox::information(nullptr, "ERROR", "文件不存在，再找找吧",
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            ui->infomation->append(buf + "无法被压缩");
        } else {
            ui->infomation->append(buf + "成功压缩！！！");
            FILE *before, *after;
            before = fopen(in_file_name, "r"); //open file for read
            after = fopen(out_file_name, "r");
            long length_1 = filelength(fileno(before)); //get length of file
            long length_2 = filelength(fileno(after));
            ui->infomation->append(
                    "\n压缩前文件长度：" + QString("%1").arg(length_1) + "字节" + "\n压缩后文件长度：" + QString("%1").arg(length_2) +
                    "字节" + "\n压缩率：" + QString("%1").arg((double) length_2 / length_1 * 100.0) + "%\n");
            fclose(before);
            fclose(after);
        }
    }
}

[[maybe_unused]] void MainWindow::on_extract_clicked([[maybe_unused]] bool clicked) {
//    int n=BYTE_SIZE;
    int flag = 1;
    HuffNode Huffman_tree[2*BYTE_SIZE];//最多511个结点
    QStringList fileNames = QFileDialog::getOpenFileNames(this,
                                                          tr("选择文件，可以多选"),
                                                          "D:",
                                                          tr("哈夫曼(*huf)"));
    for (auto &fileName: fileNames) {
        QString buf;
        buf = fileName;
        buf = QDir::toNativeSeparators(buf);
        buf = QDir::toNativeSeparators(buf);
        QFileInfo fileinfo = QFileInfo(fileName);
        QString of = fileinfo.completeBaseName();
        char in_file_name[BYTE_SIZE];
        char out_file_name[BYTE_SIZE];
        strcpy(in_file_name, (char *) (buf.toStdString().c_str()));
        strcpy(out_file_name, (char *) (of.toStdString().c_str()));
        for (auto &a: Huffman_tree) {
            a.parent = -1;
            a.ch = '\0';
            a.weight = -1;
            a.left_child = -1;
            a.right_child = -1;
        }
        int m = extract_file(in_file_name, out_file_name, &flag, Huffman_tree);
        if (m == 0) {
            QMessageBox::information(nullptr, "错误！", "文件不存在！请再找找",
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
            ui->infomation->append(buf + "文件无法打开！请再想想办法！");
        } else { ui->infomation->append(buf + "恭喜！文件解压成功！！！"); }
    }
}

[[maybe_unused]] void MainWindow::on_pushButton_clicked([[maybe_unused]] bool clicked) {

    OpenURL("file:///D:/CodeWorkplace/C++_By_Clion/Proj04_Compress/cmake-build-debug/");
}

void MainWindow::OpenURL(const QString &str) {
    QDesktopServices::openUrl(QUrl(str));

}


