#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setcontact(Contrat c)
{
    ui->lineEdit_numd->setText(c.get_num());
    ui->lineEdit_dated->setDate(c.get_date());
    ui->lineEdit_qted->setMaxLength(c.get_qte());
    ui->lineEdit_ptd->setMaxLength(c.get_pt());
    ui->lineEdit_pd->setMaxLength(c.get_prixelement());
}
