#ifndef RUNGRAPH_H
#define RUNGRAPH_H
#include "graph.h"
struct DisResult{
    int Length;
    int shortest[6];
};

struct Dis {
    int path[6];
    int value;
    bool visit;
    Dis() {
        visit = false;
        value = 0;
        path[0] = 0;
        path[1] = 0;
        path[2] = 0;
        path[3] = 0;
        path[4] = 0;
        path[5] = 0;
    }
};

struct DFSer{
    bool visit;
    DFSer(){
        visit = false;
    }
};

struct closeedge{
    int ver;
    int weight;
};

class RunGraph
{
public:
    RunGraph();
    DisResult Dijkstra(int Start, int End);

    void DFScore(int v);
    int * DFS();
    void DFSload();

    int ** Prim(int vers[],int n);

private:
    int re[6];
    DFSer dfs[6];
    int i;
    int ** ref;

    int getMin(int * num,int n);
};

#endif // RUNGRAPH_H
