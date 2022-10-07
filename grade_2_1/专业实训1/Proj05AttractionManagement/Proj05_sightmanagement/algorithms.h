//
// Created by Van_XQ on 2021/11/28.
//

#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#define vertex_type int
#include"read_file.h"

typedef struct edges {
    vertex_type initial;
    vertex_type end;
    vertex_type weight;
}edge1[6];

typedef struct{
    vertex_type value;//顶点数据
    int sign;//每个顶点所属集合
}assist[6];







struct Dis {
    std::string path;
    int value;
    bool visit;
    Dis() {
        visit = false;
        value = 0;
        path = "";
    }
};

class Graph_DG {
private:
    int vexnum;   //图的顶点个数
    int edge;     //图的边数
    int **arc;   //邻接矩阵
    int arc1[6][6]{};
    int visit[6]{};
    Dis * dis{};   //记录各个顶点最短路径的信息

public:
    //构造函数
    Graph_DG(int vexnum, int edge);
    //析构函数
    ~Graph_DG();
    // 判断我们每次输入的的边的信息是否合法
    //顶点从1开始编号
    bool check_edge_value(int start, int end, int weight);
    //创建图
    void createGraph();
//    //打印邻接矩阵
//    void print();
    //求最短路径
    void Dijkstra(int begin);
    //打印最短路径
    void DFS(int begin);
    std::string print_path(int, int, int &e);
    landscape place[6];
    path p[9]{};
    std::string pat;
    int find_ID(std::string m)
    {
        for(int i=0;i<6;i++)
        {
            if(m==place[i].name)
            {
                return place[i].id;
            }
        }
        return -1;
    }
    static int Locatevex(int vexnum, int point);//定位

    static int cmp(const void *a, const void *b) {

        return  ((struct edges*)a)->weight-((struct edges*)b)->weight;
    }

    static void CreateUDN(edges *edge1, int *vexnum, int *arc_num);

    static int kruskal();
};
#endif // DIJKSTRA_H
