#include "rungraph.h"

RunGraph::RunGraph()
{

}

DisResult RunGraph::Dijkstra(int Start, int End){
    int start = Start - 1;
    int end = End - 1;
    Dis op[6];
    int disegdes[6][6];
    int s = 1;


    DisResult dis;

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(edges [i][j] == 0 && i != j){
                disegdes[i][j] = INT_MAX;
            }else {
                disegdes[i][j] = edges[i][j];
            }
        }
    }

    for(int k  = 0; k < 6 ; k++){
        op[k].path[0] = Start;
        op[k].path[s] = k+1;
        op[k].value = disegdes[start][k];
    }

    op[start].visit = true;

    while (s != 6) {
    int temp=0;
    int min = INT_MAX;
    bool addable = true;
    for(int l = 0; l < 6;l++){
        if(op[l].value < min && !op[l].visit){
            min = op[l].value;
            temp = l;
        }
    }
         op[temp].visit = true;
         for(int o = 0; o < 6;o++){
             if(op[temp].path[o] == temp + 1)
                 addable = false;
         }
         if(addable)
             op[temp].path[s] = temp + 1;
         s++;

        for(int m = 0;m < 6;m++){
            if(!op[m].visit && disegdes[temp][m] != INT_MAX && (op[temp].value + disegdes[temp][m]) < op[m].value){
                op[m].value = op[temp].value + disegdes[temp][m];
                for(int n = 0; n < 6; n++){
                    op[m].path[n] = op[temp].path[n];
                }
                op[m].path[s] = m + 1;
            }
        }

    }

    dis.Length = op[end].value;
    for(int o = 0; o < 6; o++){
        dis.shortest[o] = op[end].path[o];
    }
    return dis;

}
void RunGraph::DFSload(){
    for(int i = 0; i < 6 ; i++){
        re[i] = 0;
        dfs[i].visit = false;
    }
    i = 0;
}

int * RunGraph::DFS(){
    return re;
}

void RunGraph::DFScore(int v){
    dfs[v-1].visit = true;
    re[i] = v;
    i++;
    for(int j=0;  j<6;  j++)
    {
        if (!dfs[j].visit && edges[v-1][j]!=0)
        DFScore(j+1);
    }
}

int ** RunGraph::Prim(int *vers, int n){
    int ledges[n][n];
    int res[2][n+1];
    int num[n];
    int u = 0;
    bool changeable[n];
    for(int i = 0;i < n;i++){
        changeable[i] = true;
        for(int j = 0;j<n;j++){
            if(edges[vers[i]-1][vers[j]-1] == 0 && i!=j){
                ledges[i][j] = INT_MAX;
            }else {
                ledges[i][j] = edges[vers[i]-1][vers[j]-1];
            }
        }
    }

    closeedge ce[n];

    int x = 0;
    for(int k = 0;k<n;k++){
        if(k!=x){
            ce[k].ver = x;
            ce[k].weight = ledges[x][k];
        }
    }
    ce[x].weight = 0;
    res[0][u] = vers[x];
    u++;
    for(int l = 0;l<n;l++){
        for(int m = 0;m<n;m++){
            num[m] = ce[m].weight;
        }
        x = getMin(num,n);
        res[0][u] = vers[x];
        if(changeable[u-1]){
            res[1][u-1] = ce[x].weight;
            changeable[u-1] = false;
        }
        u++;
        ce[x].weight = 0;
        for(int o = 0;o<n;o++){
            if(ledges[x][o] < ce[o].weight){
                ce[o].ver = x;
                ce[o].weight = ledges[x][o];
            }
        }
    }
    ref = new int*[2];
    ref[0] = new int[n+1];
    ref[1] = new int[n+1];

    for(int p =0 ; p<n;p++){
        ref[0][p] = res[0][p];
        ref[1][p] = res[1][p];
    }

    return ref;
}

int RunGraph::getMin(int *num,int n){
    int min,x;
    for(int j=0;j<n;j++){
        if(num[j]!=0){
            min=num[j];
            x=j;
            break;
        }
    }
    for (int i=0;i<n;i++) {
        if(num[i]<min&&num[i]!=0){
            min=num[i];
            x=i;
        }
    }
    return x;
}
