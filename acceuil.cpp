#include "acceuil.h"


acceuil::acceuil(QWidget *parent) : QDialog(parent), ui(new Ui::acceuil)
{

    musicClic->setMedia(QUrl("C:/Users/Nasreddine/Documents/FuseSmart/clic.mp3"));
    ui->setupUi(this);


    musicClic->setVolume(10);
    QPixmap addemp("C:/Users/Nasreddine/Documents/FuseSmart/AjouterEmployé.png"),
            addconge("C:/Users/Nasreddine/Documents/FuseSmart/Ajoutercongé.png");
    ui->AjouterEmploye->setPixmap(addemp);ui->AjouterConge->setPixmap(addconge);

}

acceuil::~acceuil()
{
    delete ui;
}

void acceuil::on_tabWidget_currentChanged()
{   musicClic->stop();
    musicClic->play();
}


void acceuil::on_pushButton_clicked()
{
    musicClic->stop();
        musicClic->play();

    MainWindow m;
    m.show();


}



void acceuil::on_pushButton_2_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_pushButton_3_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_ajouter_conge_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_afficher_conge_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_pushButton_10_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_pushButton_9_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_pushButton_5_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_pushButton_8_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_pushButton_7_clicked()
{
    musicClic->stop();
        musicClic->play();
}

void acceuil::on_pushButton_6_clicked()
{
    musicClic->stop();
        musicClic->play();
}
