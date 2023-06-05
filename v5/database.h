#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>

#include <QSqlDatabase>

#define DATABASE_NAME "S2.01"
#define CONNECT_TYPE "QODBC"

class database
{
public:
    database();
    bool openDataBase();
    void closeDataBase();

private:
    QSqlDatabase mybd;
};


#endif // DATABASE_H
