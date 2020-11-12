#ifndef EMPLOYEURS_H
#define EMPLOYEURS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class employeurs
{
public:
    employeurs();
    int Get_CIN();
    int Get_tel();
    QString Get_nom();
    QString Get_prenom();
    QString Get_email();
    QString Get_adresse();
    QString Get_date_nais();


    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
private:
    QString nom,prenom,adresse,email,date_nais;
    int tel,CIN;
};

#endif // EMPLOYEURS_H
