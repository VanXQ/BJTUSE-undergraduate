#ifndef GLOBAL_H
#define GLOBAL_H
#include "qstring.h"
typedef struct RANKINFORMATION
{
    char strName[50];
    int nGrade;
    int nRank;
} RANKINFOR;

extern RANKINFOR g_rank;

extern RANKINFOR * ranks[10];

typedef struct PICTUREELEMENT
{
    int nRow;
    int nCol;
    int nPicNum;
} PICELEM;

extern int g_spc;

extern int g_props_boom;

extern int g_props_cross;

extern int g_props_color;

extern QString bac_path;

#endif // GLOBAL_H
