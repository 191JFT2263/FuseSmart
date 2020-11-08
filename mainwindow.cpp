#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo("C:/Users/Nasreddine/Documents/FuseSmart/logo.png");

    ui->FuseSmart->setPixmap(logo);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::GetLogin()
{
    username=ui->user->text();
    password=ui->password->text();
}

void MainWindow::on_pushButton_clicked()
{

    acceuil a;

    int errur =0;
    connection c;
    QSqlQuery qry;
    QMediaPlayer *musicLogin= new QMediaPlayer,*musicConect=new QMediaPlayer;
    musicLogin->setMedia(QUrl("C:/Users/Nasreddine/Documents/FuseSmart/loginmp3.mp3"));
    musicConect->setMedia(QUrl("C:/Users/Nasreddine/Documents/FuseSmart/conect.mp3"));
    GetLogin();
    bool test=c.createconnect();

    if(username!="" && password!="")
        errur=0;
    else if(username=="" && password=="")
    {
        ui->label_errur->setText("Utilisateur et Mot de passe entré ne correspond à aucun compte.");
        errur=1;
    }

    else if(password=="")
    {
        ui->label_errur->setText("Mot de passe entré ne correspond à aucun compte.");
        errur=1;
    }

    else if(username=="")
    {

        errur=1;
        ui->label_errur->setText("l'utilisateur entré ne correspond à aucun compte.");
    }



    // ********************************************   Login   ****************************************

    if (errur==0)
       { this->hide();
          musicConect->play();
          musicLogin->play();

         a.show();



         /*
         if (test)
             {


             QMessageBox::information(nullptr,QObject::tr("database is open"),
                                      QObject::tr("Connection successful.\n"
                                                  "Click cancel to exit ."),QMessageBox::Cancel);

             if(qry.exec("SELECT * FROM employeurs"))
             {   QMessageBox::information(nullptr,QObject::tr("Hello"),QObject::tr("clic cancel"),QMessageBox::Cancel);
                 QString ch=qry.value(1).toString();
                  ui->label_errur->setText("Hello");}



            }
         else
            */


         if(test==false )
             QMessageBox::critical(nullptr,QObject::tr("Database is not open"),
                                   QObject::tr("Connection failed.\n"
                                               "Click cancel to exit ."),QMessageBox::Cancel);

           a.exec();
        }






}