#include "dao_mysqldriver.h"

MysqlDriver::MysqlDriver(){
    QString hostName = "127.0.0.1";
    QString username = "root";
    QString password = "admin";
    QString databaseName = "mysql";

    QFile file("/config.properties");
    while(!file.atEnd()){
        QByteArray byteLine = file.readLine();
        QString line(byteLine);
        QStringList list = line.split("=");
        if(list[0] == "mysql_username"){
            username = list[1];
        }
        if(list[0] == "mysql_password"){
            password = list[1];
        }
        if(list[0] == "mysql_host"){
            hostName = list[1];
        }
        if(list[0] == "mysql_database"){
            databaseName = list[1];
        }
    }

    db.setHostName(hostName);
    db.setDatabaseName(databaseName);
    db.setUserName(username);
    db.setPassword(password);
    if (db.open()) {
        qDebug() << "database is established!";
    } else {
        qDebug() << "build error!";
    }
}

QSqlQuery MysqlDriver::execQuery(QString statement){
    query.exec(statement);
    return query;
}
