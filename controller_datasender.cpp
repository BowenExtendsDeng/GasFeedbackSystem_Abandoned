#include "controller_datasender.h"

DataSender::DataSender():QObject(){

    QString hostIp;
    int hostPort = 8849;

    QFile file("/config.properties");
    while(!file.atEnd()){
        QByteArray byteLine = file.readLine();
        QString line(byteLine);
        QStringList list = line.split("=");
        if(list[0] == "sender_host"){
            hostIp = list[1];
        }
        if(list[0] == "sender_port"){
            hostPort = list[1].toInt();
        }
    }
    socket->connectToHost(hostIp, hostPort);

    connect(socket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readData()));
    qDebug() << "succeed to set up connection";
}

QString DataSender::readData() {

    QByteArray buffer;
    buffer = socket->readAll();
    QString message = buffer;
    qDebug() << "succeed to get message from server";
    return message;
}

void DataSender::sendFeedback(QString message) {
    QByteArray messageByteArray = message.toUtf8();
    socket->write(messageByteArray);
}

void DataSender::interpretMessage() {

}
