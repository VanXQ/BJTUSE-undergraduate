#ifndef OPERATION_H
#define OPERATION_H
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
    }
};

class Operationer
{
public:
    Operationer();
    DisResult Dijkstra(int Start, int End);

private:
    bool checkDisHad(int l, int * dis);
};

#endif // OPERATION_H
