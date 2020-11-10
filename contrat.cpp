#include "contrat.h"

Contrat::Contrat()
{
    num=" ";
    prix=0;
    qte=0;
    pt=0;
}


void Contrat::setnum(QString n){num=n;}
void Contrat::setprixelement(float b){prix=b;}
void Contrat::setdate(QDate d){date=d;}
void Contrat::setqte(int k){qte=k;}
void Contrat::setpt(float b){pt=b;}

QDate Contrat::get_date(){return date;}
float Contrat::get_prixelement(){return prix;}
QString Contrat::get_num(){return num;}
int Contrat::get_qte(){return qte;}
float Contrat::get_pt(){return  qte*prix ;}
