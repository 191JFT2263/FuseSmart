#include "connection.h"
connection::connection()
{}



bool connection::ouvrirconnexion()
{
    bool test =false ;
    QSqlDatabase db =QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("BDprojet");
    db.setUserName("projet");//nom utilisateur
    db.setPassword("projet");//mot de passe utilisateur
    if(db.open())
        test=true;
    else throw QString ("Erreur Paramétres"+test);



 return test ;
}

void connection::ecrire()
{

    QSqlQuery qeurry(db);
    QString select="CREATE TABLE employeurs ( CIN VARCHAR(8) PRIMARY KEY, nom VARCHAR(100),prenom VARCHAR(100),date_naissance VARCHAR(10),email VARCHAR(255),adresse VARCHAR(255),tel VARCHAR(8));";
    qeurry.prepare(select);
    select="INSERT INTO employeurs VALUES('11111111','madhkour','nasreddine','12/04/1998','nasreddine1234@gmail.com','ariana so8ra','28000046');";
    qeurry.prepare(select);
    select="SELECT * FROM employeurs;";
    qDebug()<<select;
    qeurry.prepare(select);
    qeurry.addBindValue(userdb);
    qeurry.addBindValue(passworddb);
    qeurry.exec();
    qDebug()<<userdb;
    qDebug()<<passworddb;


}
void connection::fermerconnexion()
{
    db.close();

}
