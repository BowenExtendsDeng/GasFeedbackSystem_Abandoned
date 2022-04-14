#include "pojo_reactionstate.h"

ReactionState::ReactionState(QString newReactanrName, double newReactantConcentration,
                             double newRelativeContent){
   this->reactantName = newReactanrName;
   this->reactantConcentration = newReactantConcentration;
   this->relativeContent = newRelativeContent;
}

QString ReactionState::getReactantName(){
    return reactantName;
}

double ReactionState::getReactantConcentration(){
    return reactantConcentration;
}

double ReactionState::getRelativeContent(){
    return relativeContent;
}
