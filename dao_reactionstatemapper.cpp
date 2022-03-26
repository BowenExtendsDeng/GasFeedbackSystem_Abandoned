#include "dao_reactionstatemapper.h"

ReactionStateMapper::ReactionStateMapper(){}

QVector<QString> ReactionStateMapper::selectAllReactantName(){
    QSqlQuery query = driver.execQuery("select reactant_name "
                                       "from cvd_reaction_data.reactant_example;");
    QVector<QString> reactantName;
    while(query.next()){
        reactantName.append(query.value(0).toString());
    }
    qDebug() << "select reactant name";
    return reactantName;
}

QVector<ReactionState> ReactionStateMapper::selectAll(){
    QSqlQuery query = driver.execQuery("select reactant_name,reactant_concentration,"
                                       "reactant_relative_content from "
                                       "cvd_reaction_data.reactant_example;");
    QVector<ReactionState> reactants;
    while(query.next()){
        QString reactantName = query.value(0).toString();
        double reactantConcentration = query.value(1).toDouble();
        double relativeContent = query.value(2).toDouble();
        ReactionState temp =
                ReactionState(reactantName, reactantConcentration, relativeContent);
        reactants.append(temp);
    }
    qDebug() << "select all";
    return reactants;
}

bool ReactionStateMapper::insertState(QString reactantName, double reactantConcentration,
                                      double relativeContent){
    QString statement = "insert into cvd_reaction_data.reactant_example "
                        "values(null, now(), '" + reactantName + "', " + reactantConcentration +
                        ", " + relativeContent + ")";
    try {
        driver.execQuery(statement);
        qDebug() << "succeeded to insert a row";
        return true;
    }  catch (_exception e) {
        qDebug() << "failed to insert a row";
        return false;
    }
}
