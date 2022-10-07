//

#include"algorithms.h"



//构造函数
Graph_DG::Graph_DG(int vexnum, int edge) {
    //初始化顶点数和边数
    this->vexnum = vexnum;
    this->edge = edge;
    //为邻接矩阵开辟空间和赋初值
    arc = new int*[this->vexnum];
    for (int i = 0; i < this->vexnum; i++) {
        arc[i] = new int[this->vexnum];
        for (int k = 0; k < this->vexnum; k++) {
            //邻接矩阵初始化为无穷大
            arc[i][k] = INT_MAX;
        }
    }
    for(int i=0;i<6;i++)
    {
        visit[i]=0;
    }
}

//析构函数
Graph_DG::~Graph_DG() {
    delete[] dis;
    for (int i = 0; i < this->vexnum; i++) {
        delete this->arc[i];
    }
    delete arc;
}
assist assists;
// 判断我们每次输入的的边的信息是否合法
//顶点从1开始编号
bool Graph_DG::check_edge_value(int start, int end, int weight) {
    if (start<1 || end<1 || start>vexnum || end>vexnum || weight < 0) {
        return false;
    }
    return true;
}

void Graph_DG::CreateUDN(edges *edge1,int *vex_num,int *arc_num){
    *arc_num=9;
    *vex_num =6;

    for (int i=0; i<(*vex_num); i++) {
        assists[i].value=i;
        assists[i].sign=i;
    }
    for (int i = 0; i < (*arc_num); i++)edge1[i].initial=i;
//        scanf("%d,%d,%d", &(*edge)[i].initial, &(*edge)[i].end, &(*edge)[i].weight);


    edge1[0].initial=0, edge1[0].end=1, edge1[0].weight=235;
    edge1[1].initial=0, edge1[1].end=5, edge1[1].weight=65;
    edge1[2].initial=4, edge1[2].end=5, edge1[2].weight=10;
    edge1[3].initial=0, edge1[3].end=4, edge1[3].weight=300;
    edge1[4].initial=1, edge1[4].end=4, edge1[4].weight=310;
    edge1[5].initial=1, edge1[5].end=2, edge1[5].weight=100;
    edge1[6].initial=2, edge1[6].end=4, edge1[6].weight=10;
    edge1[7].initial=3, edge1[7].end=4, edge1[7].weight=200;
    edge1[8].initial=2, edge1[8].end=3, edge1[8].weight=350;
}
//
// Created by Van_XQ on 2021/11/28.



int Graph_DG::Locatevex(int vexnum,int point){
    for (int i=0; i<vexnum; i++) {
        if (assists[i].value==point) {
            return i;
        }
    }
    return -1;
}

void Graph_DG::createGraph() {
    readFile hokit;
    readFile::read_file(place, p,arc);
    for(int t=0;t<6;t++)
    {
        for(int s=0;s<6;s++)
        {
            arc1[t][s]=arc[t][s];
        }
    }
}


int Graph_DG::kruskal(){
        int arcnum,vexnum;
        edges edge1[9];
        CreateUDN(edge1,&vexnum,&arcnum);
        //对连通网中的所有边进行升序排序，结果仍保存在edges数组中
        qsort(edge1, arcnum, sizeof(edges[0]), cmp);
        //创建一个空的结构体数组，用于存放最小生成树
    int length=615;
    edges minTree[100];
    //设置一个用于记录最小生成树中边的数量的常量
    int num=0;
    //遍历所有的边
    for (int i=0; i<arcnum; i++) {
            //找到边的起始顶点和结束顶点在数组assists中的位置
            int initial=Locatevex(vexnum, edge1[i].initial);
            int end=Locatevex(vexnum, edge1[i].end);
            //如果顶点位置存在且顶点的标记不同，说明不在一个集合中，不会产生回路
            if (initial!=-1&& end!=-1&&assists[initial].sign!=assists[end].sign) {
                //记录该边，作为最小生成树的组成部分
                minTree[num]=edge1[i];
                //计数+1
                num++;
                //将新加入生成树的顶点标记全不更改为一样的
                for (int k=0; k<vexnum; k++) {
                    if (assists[k].sign==assists[end].sign) {
                        assists[k].sign=assists[initial].sign;
                    }
                }
                //如果选择的边的数量和顶点数相差1，证明最小生成树已经形成，退出循环
                if (num==vexnum-1) {
                    break;
                }
            }
        }

        //输出语句
        string a[6];
        a[0]="798";
        a[1]="olympics";
        a[2]="yuanmingyuan";
        a[3]="yiheyuan";
        a[4]="tiantan";
        a[5]="chaoyangpark";
        for (int i=0; i<vexnum-1; i++) {
            cout<<a[minTree[i].initial]<<"--"<<a[minTree[i].end]<<endl;
//            printf("%d--%d\n",a[minTree[i]].initial,minTree[i].end);
        }
        cout <<"total length is "<<length<<" km"<<endl;
        return 0;
    }
void Graph_DG::Dijkstra(int begin){
    //首先初始化我们的dis数组
    dis = new Dis[this->vexnum];
    for(int t=0;t<6;t++)
    {
        for(int s=0;s<6;s++)
        {
            arc[t][s]=arc1[t][s];
        }
    }
    int i;
    for (i = 0; i < this->vexnum; i++) {
        //设置当前的路径
        dis[i].path = place[begin-1].name + "-->" +place[i].name;
        dis[i].value = arc[begin - 1][i];
    }
    //设置起点的到起点的路径为0
    dis[begin - 1].value = 0;
    dis[begin - 1].visit = true;

    int count = 1;
    //计算剩余的顶点的最短路径（剩余this->vexnum-1个顶点）
    while (count != this->vexnum) {
        //temp用于保存当前dis数组中最小的那个下标
        //min记录的当前的最小值
        int temp=0;
        int min = INT_MAX;
        for (i = 0; i < this->vexnum; i++)
        {
            if (!dis[i].visit && dis[i].value<min) {
                min = dis[i].value;
                temp = i;
            }
        }
        //cout << temp + 1 << "  "<<min << endl;
        //把temp对应的顶点加入到已经找到的最短路径的集合中
        dis[temp].visit = true;
        ++count;
        for (i = 0; i < this->vexnum; i++) {
            //注意这里的条件arc[temp][i]!=INT_MAX必须加，不然会出现溢出，从而造成程序异常
            if (!dis[i].visit && arc[temp][i]!=INT_MAX && (dis[temp].value + arc[temp][i]) < dis[i].value) {
                //如果新得到的边可以影响其他为访问的顶点，那就就更新它的最短路径和长度
                dis[i].value = dis[temp].value + arc[temp][i];
                std::string test=dis[i].path;
                dis[i].path = dis[temp].path + "-->" +place[i].name;
            }
        }
    }

}
std::string Graph_DG::print_path(int begin,int end,int& e) {
    std::string str;
    str = place[begin-1].name;
    if(dis[end-1].value!=INT_MAX)
    {
        str = dis[end-1].path;
        e=dis[end-1].value;
        return str;
    }
    else {
        return dis[end-1].path + "是无最短路径的" +"/n";
    }
}

void Graph_DG::DFS(int begin)
{
    int i;
    visit[begin]=1;
    pat+=place[begin].name+",";
    for(i=0;i<6;i++)
        if(arc[begin][i]!=INT_MAX&&visit[i]!=1) DFS(i);
}




