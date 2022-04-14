#include "service_defaultservice.h"

DefaultService::DefaultService(){

}

void DefaultService::recordData(ReactionState statusData){
    rsmp.insertState(statusData.getReactantName(),
                     statusData.getReactantConcentration(),
                     statusData.getRelativeContent());
}

void DefaultService::trainDataSet(){
    
}

void DefaultService::setupView(){

}

void DefaultService::endowFeedback(){

}
