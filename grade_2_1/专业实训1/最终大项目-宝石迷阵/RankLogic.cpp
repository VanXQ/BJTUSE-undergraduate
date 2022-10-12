#include "RankLogic.h"

RankLogic::RankLogic(QObject *parent) : QObject(parent)
{
    rankstorage = new RankStorage();
    windowrank = WindowRank::getWindowRank();
}

void RankLogic::updateRank()
{
    rankstorage->getRank();
}

int RankLogic::getIndex()
{
    int length = rankstorage->getRank();
    if(length == 0)
        return 0;
    int index;
    for(index = length; index > 0; index--)
        if(g_rank.nGrade < ranks[index - 1]->nGrade)
            break;
        else
            continue;
    return index;
}


void RankLogic::insertIndex(int rankIndex)
{
    if(rankIndex == 10 || g_rank.strName[0] == 0)
        return;
    int length = rankstorage->getRank();
    int index;
    for(index = 0; index < length; index++)
    {
        if(!strcmp(g_rank.strName, ranks[index]->strName))
        {
            if(g_rank.nGrade <= ranks[index]->nGrade)
                return;
            else
                break;
        }
    }

    delete ranks[index];
    int moveNumber = index - rankIndex;
    for(int i = 0; i < moveNumber; i++)
    {
        ranks[index - i] = ranks[index - 1 - i];
    }
    ranks[rankIndex] = new RANKINFOR();
    ranks[rankIndex]->nGrade = g_rank.nGrade;
    strcpy(ranks[rankIndex]->strName, g_rank.strName);
    rankstorage->saveRank();
    windowrank->showRank();
}
