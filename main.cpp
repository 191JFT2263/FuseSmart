#include "mainwindow.h"
#include <QMessageBox>
#include "connection.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    connection c;
    bool test=c.ouvrirconnexion();

     if(test)
       { w.show();
        //QMessageBox::information(nullptr,QObject::tr("Database is open"),QObject::tr("With success.\n"));
        }
    else
        QMessageBox::information(nullptr,QObject::tr("data is not open"),QObject::tr("echec de la connexion.\n""clic cancel"));






    return a.exec();
}
