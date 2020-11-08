#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "acceuil.h"
#include <QSqlDatabase>
#include <QPixmap>
#include<connection.h>
#include <QMessageBox>
#include <QMediaPlayer>
#include <QString>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void GetLogin();
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QString username="",password="";


};
#endif // MAINWINDOW_H