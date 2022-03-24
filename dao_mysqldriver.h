#ifndef DAO_MYSQLDRIVER_H
#define DAO_MYSQLDRIVER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

class MysqlDriver{
private:
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QSqlQuery query;

public:
    MysqlDriver();
    QSqlQuery execQuery(QString statement);
};

#endif // DAO_MYSQLDRIVER_H
