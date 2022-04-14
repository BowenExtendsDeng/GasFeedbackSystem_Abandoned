#ifndef CONTROLLER_DATASENDER_H
#define CONTROLLER_DATASENDER_H

#include <QtNetwork/QTcpSocket>
#include <QFile>

class DataSender:QObject{
private:

    QTcpSocket* socket = new QTcpSocket(this);

public:

    DataSender();

    void sendFeedback(QString command);

    void interpretMessage();

public slots:

    QString readData();
};

#endif // CONTROLLER_DATASENDER_H
