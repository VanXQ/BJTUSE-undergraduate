#include "WindowRank.h"
#include "ui_WindowRank.h"

WindowRank * WindowRank::windowrank = nullptr;

WindowRank *WindowRank::getWindowRank()
{
    if(windowrank == nullptr)
        windowrank = new WindowRank;
    return windowrank;
}

WindowRank::WindowRank(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowRank)
{
    ui->setupUi(this);
}

void WindowRank::showRank()
{
    QString name;
    QString grade;

    switch (RankStorage::getRank())
    {
    case 10:
        name = QString::fromStdString8Bit(ranks[9]->strName);
        ui->label_28->setText(name);
        grade = QString::fromStdString(to_string(ranks[9]->nGrade));
        ui->label_30->setText(grade);
    case 9:
        name = QString::fromStdString8Bit(ranks[8]->strName);
        ui->label_25->setText(name);
        grade = QString::fromStdString(to_string(ranks[8]->nGrade));
        ui->label_27->setText(grade);
    case 8:
        name = QString::fromStdString8Bit(ranks[7]->strName);
        ui->label_22->setText(name);
        grade = QString::fromStdString(to_string(ranks[7]->nGrade));
        ui->label_24->setText(grade);
    case 7:
        name = QString::fromStdString8Bit(ranks[6]->strName);
        ui->label_19->setText(name);
        grade = QString::fromStdString(to_string(ranks[6]->nGrade));
        ui->label_21->setText(grade);
    case 6:
        name = QString::fromStdString8Bit(ranks[5]->strName);
        ui->label_16->setText(name);
        grade = QString::fromStdString(to_string(ranks[5]->nGrade));
        ui->label_18->setText(grade);
    case 5:
        name = QString::fromStdString8Bit(ranks[4]->strName);
        ui->label_13->setText(name);
        grade = QString::fromStdString(to_string(ranks[4]->nGrade));
        ui->label_15->setText(grade);
    case 4:
        name = QString::fromStdString8Bit(ranks[3]->strName);
        ui->label_10->setText(name);
        grade = QString::fromStdString(to_string(ranks[3]->nGrade));
        ui->label_12->setText(grade);
    case 3:
        name = QString::fromStdString8Bit(ranks[2]->strName);
        ui->label_7->setText(name);
        grade = QString::fromStdString(to_string(ranks[2]->nGrade));
        ui->label_9->setText(grade);
    case 2:
        name = QString::fromStdString8Bit(ranks[1]->strName);
        ui->label_4->setText(name);
        grade = QString::fromStdString(to_string(ranks[1]->nGrade));
        ui->label_6->setText(grade);
    case 1:
        name = QString::fromStdString8Bit(ranks[0]->strName);
        ui->label_1->setText(name);
        grade = QString::fromStdString(to_string(ranks[0]->nGrade));
        ui->label_3->setText(grade);
    case 0:
        this->show();
    }
}

WindowRank::~WindowRank()
{
    delete ui;
}

