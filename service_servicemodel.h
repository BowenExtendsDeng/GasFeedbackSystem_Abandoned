#ifndef SERVICE_SERVICEMODEL_H
#define SERVICE_SERVICEMODEL_H

#include <QString>
#include "pojo_reactionstate.h"

class ServiceModel
{
public:
    virtual void recordData(ReactionState statusData) = 0;

    virtual void trainDataSet() = 0;

    virtual void setupView() = 0;

    virtual void endowFeedback() = 0;
};

#endif // SERVICE_SERVICEMODEL_H
