#ifndef CONTROLLER_DATASENDER_H
#define CONTROLLER_DATASENDER_H

#include <QtNetwork/QTcpSocket>

class DataSender:QObject{
private:

    QTcpSocket* socket = new QTcpSocket(this);

public:

    DataSender();

    void writeReactionData();

    void interpretMessage();

public slots:

    QString readData();
};

#endif // CONTROLLER_DATASENDER_H
