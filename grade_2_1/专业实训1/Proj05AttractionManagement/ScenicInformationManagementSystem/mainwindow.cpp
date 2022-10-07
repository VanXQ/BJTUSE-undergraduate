#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->DFS->setEnabled(false);
    ui->ShortestRoad->setEnabled(false);
    ui->Suggestions->setEnabled(false);
    ui->label_3->setPixmap(QPixmap("C:\\Software Programming\\Codes\\QtProject\\ScenicInformationManagementSystem\\zbc.png"));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Check(){
    if(checkNum == 0){
        ui->DFS->setEnabled(false);
        ui->ShortestRoad->setEnabled(false);
        ui->Suggestions->setEnabled(false);
    }else if (checkNum == 1) {
        ui->DFS->setEnabled(true);
        ui->ShortestRoad->setEnabled(false);
        ui->Suggestions->setEnabled(false);
    }else if (checkNum == 2) {
        ui->DFS->setEnabled(false);
        ui->ShortestRoad->setEnabled(true);
        ui->Suggestions->setEnabled(false);
    }else if (checkNum > 2) {
        ui->DFS->setEnabled(false);
        ui->ShortestRoad->setEnabled(false);
        ui->Suggestions->setEnabled(true);
    }
}

QString MainWindow::LocationStr(int i){
    QString s;
    switch (i) {
    case 1:
        s = "人民公园";
        break;
    case 2:
        s = "大熊猫基地";
        break;
    case 3:
        s = "杜甫草堂";
        break;
    case 4:
        s = "天府广场";
        break;
    case 5:
        s = "锦里";
        break;
    case 6:
        s = "春熙路";
        break;
    }
    return s;
}

void MainWindow::on_PeoplePark_stateChanged(int arg1)
{
    QString s;
    if(ui->PeoplePark->isChecked()){
        checkNum ++;
        s = "成都人民公园位于成都市区祠堂街少城路，占地112639平方米，是一座集文化文物与休闲娱乐于一体的综合性园林。"
            "公园始建于1911年，公园有金水溪、金鱼岛、盆景园等著名旅游景点。"
            "成都人民公园是一个集园林、文化、文物保护、爱国主义教育、休闲娱乐于一体的综合性公园。"
            "公园有全国重点文物保护单位一处、市级文物保护单位四处。成都公园是国家“AAAA”级旅游景区。";
    }else{
        checkNum --;
        s = "";
    }
    Check();
    ui->textBrowser->setText(s);
}

void MainWindow::on_TianFuSquare_stateChanged(int arg1)
{
    QString s;
    if(ui->TianFuSquare->isChecked()){
        checkNum ++;
        s = "天府广场，四川省及成都市的政治、文化中心和综合交通枢纽，位于四川省成都市青羊区 [1]  人民南路一段，地处成都市中心心脏地带。是人民东路，人民西路，人民中路与人民南路的起点。"
            "其形式与地位与北京天安门广场相似。天府广场占地面积8.8万平方米，形状为矩形，长比宽约1.5:1，地面全部由经过特殊工艺技术处理的浅色花岗岩条石铺成。"
            "天府广场既是成都市的经济、文化和商业中心，又是成都市的地铁交通枢纽地带，历来是成都乃至四川的象征，更是成都的一张城市名片。"
            "天府广场正北方的是首任中华人民共和国主席毛泽东雕像，它的高度达到30米，每逢盛大日子，中共四川省委与四川省人民政府都会令人清洗毛泽东主席雕像的灰尘。";
    }else{
        checkNum --;
        s = "";
    }
    Check();
    ui->textBrowser->setText(s);
}

void MainWindow::on_ChunXiRoad_stateChanged(int arg1)
{
    QString s;
    if(ui->ChunXiRoad->isChecked()){
        checkNum ++;
        s = "春熙路位于四川省成都市锦江区春熙路街道，覆盖北新街以东、总府路以南、红星路以西、东大街以北、南新街、中新街以及临街区域，面积大约20公顷。春熙路热闹繁华，现大约有商业网点700家，网点面积大约220000㎡，被业内誉为中国特色商业街。";
    }else{
        checkNum --;
        s = "";
    }
    Check();
    ui->textBrowser->setText(s);
}

void MainWindow::on_JinLi_stateChanged(int arg1)
{
    QString s;
    if(ui->JinLi->isChecked()){
        checkNum ++;
        s = "锦里是成都武侯祠博物馆（三国历史遗迹区、锦里民俗区、西区）的一部分，占地30000余平方米，建筑面积14000余平方米，街道全长550米，以明末清初川西民居作外衣，三国文化与成都民俗作内涵，集旅游购物、休闲娱乐为一体。"
            "传说中锦里曾是西蜀历史上最古老、最具有商业气息的街道之一，早在秦汉、三国时期便闻名全国。"
            "现在，锦里占地30000余平方米，建筑面积14000余平方米，街道全长550米，以明末清初川西民居作外衣，三国文化与成都民俗作内涵，集旅游购物、休闲娱乐为一体。2020年11月18日，成都武侯祠·锦里当选“成渝十大文旅新地标”。";
    }else{
        checkNum --;
        s = "";
    }
    Check();
    ui->textBrowser->setText(s);
}

void MainWindow::on_PandaBase_stateChanged(int arg1)
{
    QString s;
    if(ui->PandaBase->isChecked()){
        checkNum ++;
        s ="成都大熊猫繁育研究基地，是中国政府实施大熊猫等濒危野生动物迁地保护工程的主要研究基地之一，国家AAAA级旅游景区。"
                   "是我国乃至全球知名的集大熊猫科研繁育、保护教育、教育旅游、熊猫文化建设为一体的大熊猫等珍稀濒危野生动物保护研究机构。";
    }else{
        checkNum --;
        s = "";
    }
    Check();
    ui->textBrowser->setText(s);
}

void MainWindow::on_DuFuCaoTang_stateChanged(int arg1)
{
    QString s;
    if(ui->DuFuCaoTang->isChecked()){
        checkNum ++;
        s ="成都杜甫草堂博物馆位于四川省成都市青羊区青华路37号，是中国唐代大诗人杜甫流寓成都时的故居。"
           "杜甫先后在此居住近四年，创作诗歌240余首。唐末诗人韦庄寻得草堂遗址，重结茅屋，使之得以保存，宋元明清历代都有修葺扩建。"
           "草堂占地面积近300亩，完整保留着明弘治十三年（公元1500年）和清嘉庆十六年（公元1811年）修葺扩建时的建筑格局，建筑古朴典雅、园林清幽秀丽，是中国文学史上的一块圣地。"
           "1955年成立杜甫纪念馆，1985年更名为成都杜甫草堂博物馆。";
    }else{
        checkNum --;
        s = "";
    }
    Check();
    ui->textBrowser->setText(s);
}

void MainWindow::on_ShortestRoad_clicked()
{
    int start = 0;
    int end = 0;
    while (start == 0) {
        if(ui->PeoplePark->isChecked()){
            start = 1;
        }else if(ui->PandaBase->isChecked()){
            start = 2;
        }else if(ui->DuFuCaoTang->isChecked()){
            start = 3;
        }else if (ui->TianFuSquare->isChecked()) {
            start = 4;
        }else if(ui->JinLi->isChecked()){
            start = 5;
        }else if(ui->ChunXiRoad->isChecked()){
            start = 6;
        }

    }
    while (end == 0 || end == start) {
        if(ui->ChunXiRoad->isChecked()){
            end = 6;
        }else if(ui->JinLi->isChecked()){
            end = 5;
        }else if(ui->TianFuSquare->isChecked()){
            end = 4;
        }else if (ui->DuFuCaoTang->isChecked()) {
            end = 3;
        }else if(ui->PandaBase->isChecked()){
            end = 2;
        }else if(ui->PeoplePark->isChecked()){
            end = 1;
        }

    }

    DisResult dis;
    dis = op.Dijkstra(start,end);

    QString s;
    s.append(LocationStr(start));
    s.append("到");
    s.append(LocationStr(end));
    s.append("最短");
    s.append(QString::number(dis.Length));
    s.append("米 路径是");
    for (int i = 0;i < 6; i++) {
        if(dis.shortest[i] != 0){
            s.append(LocationStr(dis.shortest[i]));
            s.append(" ");
        }
    }
    ui->textBrowser->setText(s);
}

void MainWindow::on_DFS_clicked()
{
    int v = 0;
    if(ui->ChunXiRoad->isChecked()){
        v = 6;
    }else if(ui->JinLi->isChecked()){
        v = 5;
    }else if(ui->TianFuSquare->isChecked()){
        v = 4;
    }else if (ui->DuFuCaoTang->isChecked()) {
        v = 3;
    }else if(ui->PandaBase->isChecked()){
        v = 2;
    }else if(ui->PeoplePark->isChecked()){
        v = 1;
    }
    op.DFSload();
    op.DFScore(v);
    int *result = op.DFS();

    QString s;
    for (int i = 0;i < 6; i++) {

        s.append(LocationStr(result[i]));
        s.append(" ");

    }
    ui->textBrowser->setText(s);
}

void MainWindow::on_Suggestions_clicked()
{
    int vers[6];

    int i = 0;

    if(ui->PeoplePark->isChecked()){
        vers[i] = 1;
        i++;
    }
    if(ui->PandaBase->isChecked()){
        vers[i] = 2;
        i++;
    }
    if(ui->DuFuCaoTang->isChecked()){
        vers[i] = 3;
        i++;
    }
    if (ui->TianFuSquare->isChecked()) {
        vers[i] = 4;
        i++;
    }
    if(ui->JinLi->isChecked()){
        vers[i] = 5;
        i++;
    }
    if(ui->ChunXiRoad->isChecked()){
        vers[i] = 6;
        i++;
    }

    int ** returns = op.Prim(vers,i);


    QString s = "修路建议为：";
    for (int x = 0;x < i; x++) {

        s.append(LocationStr(returns[0][x]));
        s.append(" ");
        if(returns[1][x] != 0){
            s.append(QString::number(returns[1][x]));
            s.append("M ");
        }

    }
    ui->textBrowser->setText(s);
}
