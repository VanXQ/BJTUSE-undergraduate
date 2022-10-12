#ifndef RankStorage_H
#define RankStorage_H

#include "Global.h"
#include <iostream>
#include <fstream>
#include <string>
#include <QFile>
#include <QTextStream>
#include <QDir>

using namespace std;

class RankStorage
{
public:
    RankStorage();

    static int getRank();

    static void saveRank();

public:

};

#endif // RankStorage_H
