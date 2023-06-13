#include "database.h"

#include "QDebug"

#include "QSqlQuery"

database::database()
{

}

bool database::openDataBase()
{
    qDebug() << "oui ouvrir";
    mybd = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mybd.setDatabaseName(DATABASE_NAME);
    return mybd.open();

}

void database::closeDataBase()
{
    qDebug() << "oui ferme";
    mybd.close();
}
