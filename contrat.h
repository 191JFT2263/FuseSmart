#ifndef CONTRAT_H
#define CONTRAT_H
#include <QString>
#include <QDate>

class Contrat
{
public:
    void setnum(QString n);
    void setprixelement(float b);
    void setqte(int k);
    void setdate(QDate d);
    void setpt(float b);
    QString get_num();
    float get_prixelement();
    QDate get_date();
    int get_qte();
    float get_pt();

    Contrat();
private:
    QString num;
    QDate date;
    int qte;
    float pt,prix;
};

#endif // CONTRAT_H
