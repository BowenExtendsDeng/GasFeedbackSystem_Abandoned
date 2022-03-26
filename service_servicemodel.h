#ifndef SERVICE_SERVICEMODEL_H
#define SERVICE_SERVICEMODEL_H

#include <QString>

class ServiceModel
{
public:
    ServiceModel();

    virtual bool recordData(QString sqlCmd);

    virtual void trainDataSet();

    virtual void setupView();
};

#endif // SERVICE_SERVICEMODEL_H
