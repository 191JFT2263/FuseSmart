#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QObject>
#include <QMainWindow>
#include<QPropertyAnimation>
#include <QString>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_modifier_2_clicked();

    void on_pushButton_10_clicked();

    void on_supprimer_2_clicked();

    void on_pushButton_15_clicked();

    void on_quitter_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

private:
    Ui::MainWindow *ui;
      QPropertyAnimation *animation;
      QPropertyAnimation *animation1;
};
#endif // MAINWINDOW_H
