#ifndef SERVICE_DEFAULTSERVICE_H
#define SERVICE_DEFAULTSERVICE_H

#include "dao_reactionstatemapper.h"
#include "service_servicemodel.h"

class DefaultService : ServiceModel{
private:

    ReactionStateMapper rsmp;

public:

    DefaultService();

    bool recordData(ReactionState statusData);

    void trainDataSet();

    void setupView();

};

#endif // SERVICE_DEFAULTSERVICE_H
