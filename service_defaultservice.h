#ifndef SERVICE_DEFAULTSERVICE_H
#define SERVICE_DEFAULTSERVICE_H

#include "dao_reactionstatemapper.h"
#include "service_servicemodel.h"

class DefaultService : public ServiceModel{
private:

    ReactionStateMapper rsmp;

public:

    DefaultService();

    void recordData(ReactionState statusData);

    void trainDataSet();

    void setupView();

    void endowFeedback();

};

#endif // SERVICE_DEFAULTSERVICE_H
