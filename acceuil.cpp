#include "acceuil.h"
#include "ui_acceuil.h"
#include <QMainWindow>
#include <QApplication>
#include "mainwindow.h"
#include <QMessageBox>
#include "connection.h"
#include <QApplication>
acceuil::acceuil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acceuil)
{   musicConect->setMedia(QUrl("C:/Users/Nasreddine/Documents/FuseSmart/conect.mp3"));
    ui->setupUi(this);
    QPixmap decnx("C:/Users/Nasreddine/Documents/FuseSmart/decnx2.png");
    ui->decnx->setPixmap(decnx);
}

acceuil::~acceuil()
{
    delete ui;
}

void acceuil::on_tabWidget_currentChanged()
{   musicConect->stop();
    musicConect->play();
}

void acceuil::on_decnx_linkActivated()
{

}

void acceuil::on_pushButton_clicked()
{


}
