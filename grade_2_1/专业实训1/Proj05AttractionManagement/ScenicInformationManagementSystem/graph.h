#ifndef GRAPH_H
#define GRAPH_H
#include <QSet>

using namespace std;

struct Vertex{
    int Num;
    char name[1000];
};

struct Edge{
    int ver1;
    int ver2;
    int weight;
};

static int edges[6][6] = {
    {    0,17000, 4750, 1900,    0,    0},
    {17000,    0,    0,16000,    0,16500},
    { 4750,    0,    0, 4800, 4700,    0},
    { 1900,16000, 4800,    0, 4100, 2100},
    {    0,    0, 4700, 4100,    0, 4900},
    {    0,16500,    0, 2100, 4900,    0}
};

class Graph
{
public:
    Graph();

private:

    Vertex v1 = {1,"人民公园"};
    Vertex v2 = {2,"大熊猫基地"};
    Vertex v3 = {3,"杜甫草堂"};
    Vertex v4 = {4,"天府广场"};
    Vertex v5 = {5,"锦里"};
    Vertex v6 = {6,"春熙路"};

    Edge e12 = {1,2,17000};
    Edge e14 = {1,4,1900};
    Edge e13 = {1,3,4750};
    Edge e24 = {2,4,16000};
    Edge e26 = {2,6,16500};
    Edge e34 = {3,4,4800};
    Edge e35 = {3,5,4700};
    Edge e45 = {4,5,4100};
    Edge e46 = {4,6,2100};
    Edge e56 = {5,6,4900};


};

#endif // GRAPH_H
