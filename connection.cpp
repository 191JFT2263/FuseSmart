#include "connection.h"

connection::connection()
{

}

bool connection::createconnect()
{
    bool test =false ;
    QSqlDatabase db =QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("BDprojet");
    db.setUserName("projet");//nom utilisateur
    db.setPassword("projet");//mot de passe utilisateur
    if(db.open())
    {test=true; QSqlQuery qry;
        //qry.prepare("CREATE TABLE employeurs ( CIN VARCHAR(8),nom VARCHAR(50),prenom VARCHAR(50),tel VARCHA (8));");
        qry.prepare("INSERT INTO employeurs VALUES ('12345678','madhkour','nasreddine','28000046');");
    }
   return test ;
}
