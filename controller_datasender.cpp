#include "controller_datasender.h"

DataSender::DataSender():QObject(){
    socket->connectToHost("127.0.0.1", 8849);
    connect(socket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(readData()));
    qDebug() << "succeed to set up connection";
}

QString DataSender::readData() {
    QByteArray buffer;
    buffer = socket->readAll();
    QString message = buffer;
    return message;
    qDebug() << "succeed to get message from server";
}

void DataSender::writeReactionData() {

}

void DataSender::interpretMessage() {

}
