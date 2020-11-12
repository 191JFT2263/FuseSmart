#include "employeurs.h"

employeurs::employeurs()
{
    nom="";
    prenom="";
    adresse="";
    email="";
    date_nais="";
    tel=0;
    CIN=0;
}
QString employeurs::Get_nom(){return nom;}
QString employeurs::Get_prenom(){return prenom;}
QString employeurs::Get_email(){return email;}
QString employeurs::Get_adresse(){return adresse;}
QString employeurs::Get_date_nais(){return date_nais;}
int employeurs::Get_CIN(){return CIN;}
int employeurs::Get_tel(){return tel;}
