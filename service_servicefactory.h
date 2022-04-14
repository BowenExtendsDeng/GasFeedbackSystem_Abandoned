#ifndef SERVICE_SERVICEFACTORY_H
#define SERVICE_SERVICEFACTORY_H

#include "dao_reactionstatemapper.h"
#include "service_servicemodel.h"
#include "service_defaultservice.h"

class ServiceFactory {
private:

    const static int DEFAULT_SERVICE = 0;

    ServiceModel* service;
public:

    ServiceFactory();                   

    void optMode();
};

#endif // SERVICE_SERVICEFACTORY_H
