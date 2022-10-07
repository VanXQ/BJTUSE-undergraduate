#ifndef RankLogic_H
#define RankLogic_H

#include <QObject>
#include "RankStorage.h"
#include"WindowRank.h"
#include "Global.h"

class RankLogic : public QObject
{
    Q_OBJECT
public:
    explicit RankLogic(QObject *parent = nullptr);
    void updateRank();
    int getIndex();
    void insertIndex(int rankIndex);
    RankStorage * rankstorage;
    WindowRank * windowrank;

};

#endif // RankLogic_H
