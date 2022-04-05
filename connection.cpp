#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet2a12");
db.setUserName("saeb");//inserer nom de l'utilisateur
db.setPassword("saed");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
