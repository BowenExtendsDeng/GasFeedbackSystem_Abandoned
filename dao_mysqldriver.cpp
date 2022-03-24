#include "dao_mysqldriver.h"

MysqlDriver::MysqlDriver(){
    db.setHostName("127.0.0.1");
    db.setDatabaseName("mysql");
    db.setUserName("root");
    db.setPassword("admin");
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
