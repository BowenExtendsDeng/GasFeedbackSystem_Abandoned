#include "service_servicefactory.h"

ServiceFactory::ServiceFactory(){
    optMode();
    service->setupView();
}

void ServiceFactory::optMode(){

    int mode = DEFAULT_SERVICE;

    QFile file("/config.properties");
    while(!file.atEnd()){
        QByteArray byteLine = file.readLine();
        QString line(byteLine);
        QStringList list = line.split("=");
        if(list[0] == "serive_mode"){
            mode = list[1].toInt();
        }
    }

    switch(mode){
    case DEFAULT_SERVICE:
        service = dynamic_cast<DefaultService*>(new DefaultService());
    default:
        service = dynamic_cast<DefaultService*>(new DefaultService());
    }
}
