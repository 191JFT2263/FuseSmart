#ifndef ACCEUIL_H
#define ACCEUIL_H
#include "mainwindow.h"
#include <QMediaPlayer>
#include <QDialog>

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

    void on_decnx_linkActivated();

    void on_pushButton_clicked();

private:
    Ui::acceuil *ui;
    QMediaPlayer *musicConect=new QMediaPlayer;
};

#endif // ACCEUIL_H
