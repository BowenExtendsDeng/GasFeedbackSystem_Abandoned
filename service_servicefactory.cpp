#include "service_servicefactory.h"

ServiceFactory::ServiceFactory(){}

void ServiceFactory::optMode(int mode){
    switch(mode){
    case DEFAULT_SERVICE:
        DefaultService();
    default:
        DefaultService();
    }
}
