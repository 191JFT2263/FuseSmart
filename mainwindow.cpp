#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

    ui->setupUi(this);
ui->stackedWidget_2->setCurrentIndex(0); // intialiser le deuxieme widget(fournisseur)
    ui->stackedWidget->setCurrentIndex(0);// initialiser le premier widget(materiaux)
    //controle de saisie pour les nombres
ui->lineEdit_20->setValidator(new QIntValidator(0,99999,this));//id_fournisseur
ui->lineEdit_23->setValidator(new QIntValidator(0,99999,this));//ref_materiel
ui->lineEdit_22->setValidator(new QIntValidator(0,99999999,this));//numero tel(8 chiffres)
ui->lineEdit_30->setValidator(new QIntValidator(0,99999,this));//solde
ui->lineEdit_29->setValidator(new QIntValidator(0,99999,this));//remise materiel
ui->lineEdit_27->setValidator(new QIntValidator(0,99999,this));//id_fournisseur
ui->lineEdit_28->setValidator(new QIntValidator(0,99999,this));//ref_materiel
ui->lineEdit_15->setValidator(new QIntValidator(0,99999,this));//id
ui->lineEdit_17->setValidator(new QDoubleValidator(-99.0,99.0,4,this));//prix
ui->lineEdit_19->setValidator(new QIntValidator(0,99999,this));//quantite
ui->lineEdit_10->setValidator(new QIntValidator(0,99999,this));//quantite
ui->lineEdit_11->setValidator(new QIntValidator(0,99999,this));//quantite_dispo
ui->lineEdit_13->setValidator(new  QDoubleValidator(-99.0,99.0,4,this));//prix
ui->lineEdit_14->setValidator(new QIntValidator(0,99999,this));//id
ui->lineEdit_19->setValidator(new QIntValidator(0,9999,this));//quantite
    //animation pour logo fusesmart
    int w=ui->logo->width();
    int h=ui->logo->height();
    animation = new QPropertyAnimation(ui->logo,"geometry");
    animation->setDuration(10000);
    animation->setStartValue(ui->logo->geometry());
    animation->setEndValue(QRect(0,20,w,h));

    QEasingCurve curve;
    curve.setType(QEasingCurve::OutBounce);
    animation->setEasingCurve(curve);
    //curve.setAmplitude(2.00);
    curve.setOvershoot(1.30);
    curve.setPeriod(0.50);
    //animation->setLoopCount(3);

    animation->start();
 //animation pour logo sofap

    int w1=ui->label_7->width();
    int h1=ui->label_7->height();
    animation1 = new QPropertyAnimation(ui->label_7,"geometry");
    animation1->setDuration(10000);
    animation1->setStartValue(ui->label_7->geometry());
    animation1->setEndValue(QRect(500,200,w1,h1));
    QEasingCurve curve2;
    curve2.setType(QEasingCurve::OutBounce);
    animation1->setEasingCurve(curve2);
    curve2.setOvershoot(1.30);
    curve2.setPeriod(0.50);
    animation1->setLoopCount(-1);

      animation1->start();

//animation logo sofap dans le tab fournisseur

      int w2=ui->label_36->width();
      int h2=ui->label_36->height();
      animation2 = new QPropertyAnimation(ui->label_36,"geometry");
      animation2->setDuration(10000);
      animation2->setStartValue(ui->label_36->geometry());
      animation2->setEndValue(QRect(500,400,w2,h2));
    /*  QEasingCurve curve3;
      curve3.setType(QEasingCurve::OutBounce);
      animation1->setEasingCurve(curve3);
      curve3.setOvershoot(1.30);
      curve3.setPeriod(0.50);*/
      animation2->setLoopCount(-1);

        animation2->start();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked() // boutton ajouter materiaux
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_2_clicked() // boutton afficher materiaux

{ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_modifier_2_clicked() // boutton modifier
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_10_clicked() // boutton retour du widget modifier
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_supprimer_2_clicked() // boutton supprimer
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButton_15_clicked() // boutton retour du widget supprimer
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_quitter_2_clicked() // retour du menu afficher
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_3_clicked() // quitter l'application
{QMessageBox::StandardButton reply = QMessageBox::question(this,"fenêtre","voulez vous quittez",QMessageBox::Yes| QMessageBox::No);

    if(reply==QMessageBox::Yes){
        QApplication::quit();
    }else{
        qDebug()<<"no is clicked";
    }




}



void MainWindow::on_pushButton_16_clicked()// boutton ajouter
{
    QString id=ui->lineEdit_15->text();
   QString nom=ui->lineEdit_16->text();
          QString  prix=ui->lineEdit_17->text();
           QString couleur=ui->lineEdit_18->text();
            QString quantite=ui->lineEdit_19->text();
            if(id==""||nom==""||prix==""||couleur==""||quantite==""){
                   QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
            }

}


void MainWindow::on_pushButton_17_clicked() // boutton undo (ajouter)
{
    ui->lineEdit_15->setText("");
    ui->lineEdit_16->setText("");
    ui->lineEdit_17->setText("");
    ui->lineEdit_18->setText("");
    ui->lineEdit_19->setText("");

}


void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_12_clicked() //boutton modifier (dans le widget modifier)
{
    QString emplacement=ui->lineEdit_12->text();
   QString quantite=ui->lineEdit_10->text();
          QString  quantite_dispo=ui->lineEdit_11->text();
           QString prix=ui->lineEdit_13->text();

            if(emplacement==""||quantite==""||prix==""||quantite_dispo==""){
                   QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
            }

}



void MainWindow::on_pushButton_11_clicked() // boutton undo (modifier)
{
    ui->lineEdit_12->setText("");
    ui->lineEdit_10->setText("");
    ui->lineEdit_11->setText("");
    ui->lineEdit_13->setText("");

}


void MainWindow::on_pushButton_13_clicked() // boutton supprimer(widget supprimer)
{
   QString id_materiel= ui->lineEdit_14->text();
   if(id_materiel==""){
        QMessageBox::warning(this,"ERROR","Veuillez remplir le champ requis");
   }
}



void MainWindow::on_pushButton_14_clicked() //boutton undo supprimer
{

ui->lineEdit_14->setText("");
}

void MainWindow::on_pushButton_19_clicked()
{
     ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_21_clicked() // retour (ajouter fournisseur)
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_20_clicked() //boutton afficher fournisseur
{
     ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_quitter_3_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);//retour aprés afficher fournisseur
}

void MainWindow::on_modifier_3_clicked() // boutton modifier fournisseur
{
    ui->stackedWidget_2->setCurrentIndex(3);
}

void MainWindow::on_pushButton_25_clicked() //boutton retour (widget modifier fournisseur)
{
    ui->stackedWidget_2->setCurrentIndex(2);
}


void MainWindow::on_supprimer_3_clicked() // boutton supprimer (affichage fournisseur)
{

    ui->stackedWidget_2->setCurrentIndex(4);
}


void MainWindow::on_pushButton_28_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}
