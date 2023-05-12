#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Connexion des boutons

    QObject::connect(ui->suivant,SIGNAL(clicked()),this,SLOT(avancer()));

    QObject::connect(ui->precedent,SIGNAL(clicked()),this,SLOT(reculer()));

    QObject::connect(ui->lancerDiapo,SIGNAL(clicked()),this,SLOT(lancerDiapo()));

    QObject::connect(ui->arreterDiapo,SIGNAL(clicked()),this,SLOT(arreterDiapo()));

    QObject::connect(ui->cb_cat1,SIGNAL(clicked()),this,SLOT(cb_cat1()));

    QObject::connect(ui->cb_cat2,SIGNAL(clicked()),this,SLOT(cb_cat2()));

    QObject::connect(ui->cb_cat3,SIGNAL(clicked()),this,SLOT(cb_cat3()));

    //Connexion des éléments du menu

    QObject::connect(ui->chargerDiapo,SIGNAL(triggered()),this,SLOT(chargerDiapo()));

    QObject::connect(ui->changerVitesse,SIGNAL(triggered()),this,SLOT(changerVitesse()));

    QObject::connect(ui->enleverDiapo,SIGNAL(triggered()),this,SLOT(enleverDiapo()));

    QObject::connect(ui->changerCategorie,SIGNAL(triggered()),this,SLOT(changerCategorie()));

    QObject::connect(ui->quitter,SIGNAL(triggered()),this,SLOT(quitter()));

    QObject::connect(ui->aPropos,SIGNAL(triggered()),this,SLOT(aPropos()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

//Définition des boutons

void MainWindow::avancer()
{
    qDebug()<< "avancer d'une image";
}

void MainWindow::reculer()
{
    qDebug()<< "reculer d'une image";

}

void MainWindow::lancerDiapo()
{
    qDebug()<< "lancement du diaporama";
}

void MainWindow::arreterDiapo()
{
    qDebug()<< "arrêt du diaporama";
}

void MainWindow::cb_cat1()
{
    qDebug()<< "coche categorie 1";
}

void MainWindow::cb_cat2()
{
    qDebug()<< "coche categorie 2";
}

void MainWindow::cb_cat3()
{
    qDebug()<< "coche categorie 3";
}

//Définition des éléments du menu

void MainWindow::chargerDiapo()
{
    qDebug()<< "changement du diaporama";
}

void MainWindow::changerVitesse()
{
    qDebug()<< "changement de la vitesse";
}

void MainWindow::enleverDiapo()
{
    qDebug()<< "enlèvement du diapoama";
}

void MainWindow::changerCategorie()
{
    qDebug()<< "changement de catégorie";
}

void MainWindow::quitter()
{
    qDebug()<< "quitter le lecteur";
}

void MainWindow::aPropos()
{
    QMessageBox::information(this, "A propos", "Bonjour, ceci est un lecteur de diaporama.");
}
