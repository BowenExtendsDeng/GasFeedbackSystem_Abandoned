#ifndef POJO_REACTIONSTATE_H
#define POJO_REACTIONSTATE_H

#include <QString>
#include <QDebug>

class ReactionState{
private:

    QString reactantName;

    double reactantConcentration;

    double relativeContent;

public:

    ReactionState(){}

    explicit ReactionState(QString reactanrName, double reactantConcentration,
                  double relativeContent);

    QString getReactantName();

    double getReactantConcentration();

    double getRelativeContent();
};

#endif // POJO_REACTIONSTATE_H
