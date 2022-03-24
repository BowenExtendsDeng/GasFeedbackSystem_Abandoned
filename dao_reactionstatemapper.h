#ifndef DAO_REACTIONSTATEMAPPER_H
#define DAO_REACTIONSTATEMAPPER_H

#include <QVector>

#include "dao_mysqldriver.h"
#include "pojo_reactionstate.h"

class ReactionStateMapper
{
private:
    MysqlDriver driver;
public:
    ReactionStateMapper();
    QVector<QString> selectAllReactantName();

    QVector<ReactionState> selectAll();

    bool insertState(QString reactantName, double reactantConcentration,
                     double relativeContent);


};

#endif // DAO_REACTIONSTATEMAPPER_H
