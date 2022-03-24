#ifndef SERVICE_SERVICEFACTORY_H
#define SERVICE_SERVICEFACTORY_H

#include "dao_reactionstatemapper.h"
#include "service_defaultservice.h"

class ServiceFactory
{
private:

    const static int DEFAULT_SERVICE = 0;

public:

    ServiceFactory();                   

    void optMode(int mode);
};

#endif // SERVICE_SERVICEFACTORY_H
