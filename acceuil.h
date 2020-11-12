#ifndef ACCEUIL_H
#define ACCEUIL_H
#include "mainwindow.h"
#include <QMediaPlayer>
#include <QDialog>
#include "ui_acceuil.h"
#include <QMainWindow>
#include <QApplication>
#include "mainwindow.h"
#include <QMessageBox>
#include "connection.h"
#include <QPixmap>

namespace Ui {
class acceuil;
}

class acceuil : public QDialog
{
    Q_OBJECT

public:
    explicit acceuil(QWidget *parent = nullptr);
    ~acceuil();

private slots:
    void on_tabWidget_currentChanged();

    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_ajouter_conge_clicked();

    void on_afficher_conge_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::acceuil *ui;
    QMediaPlayer *musicClic=new QMediaPlayer;
};

#endif // ACCEUIL_H
