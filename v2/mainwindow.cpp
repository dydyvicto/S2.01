#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

#include "lecteur.h"
#include "image.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Connexion des boutons

    QObject::connect(ui->b_suivant,SIGNAL(clicked()),this,SLOT(avancer()));

    QObject::connect(ui->b_precedent,SIGNAL(clicked()),this,SLOT(reculer()));

    QObject::connect(ui->b_lancerDiapo,SIGNAL(clicked()),this,SLOT(lancerDiapo()));

    QObject::connect(ui->b_arreterDiapo,SIGNAL(clicked()),this,SLOT(arreterDiapo()));

    QObject::connect(ui->cb_cat1,SIGNAL(clicked(bool)),this,SLOT(cb_cat1(bool)));

    QObject::connect(ui->cb_cat2,SIGNAL(clicked(bool)),this,SLOT(cb_cat2(bool)));

    QObject::connect(ui->cb_cat3,SIGNAL(clicked(bool)),this,SLOT(cb_cat3(bool)));

    //Connexion des éléments du menu

    QObject::connect(ui->a_chargerDiapo,SIGNAL(triggered()),this,SLOT(chargerDiapo()));

    QObject::connect(ui->a_changerVitesse,SIGNAL(triggered()),this,SLOT(changerVitesse()));

    QObject::connect(ui->a_enleverDiapo,SIGNAL(triggered()),this,SLOT(enleverDiapo()));

    QObject::connect(ui->a_quitter,SIGNAL(triggered()),this,SLOT(close()));

    QObject::connect(ui->a_aPropos,SIGNAL(triggered()),this,SLOT(aPropos()));



    ui->l_rangImage->setText("1");
    ui->l_nbImage->setText("6");
    ui->l_mode->setText("manuel");
    ui->l_titre->setText("Les trois petits cochons");
    ui->l_titreDiapo->setText("Dessin Animé");
    ui->cb_cat1->setText("Animal");
    ui->cb_cat2->setText("Personne");
    ui->cb_cat3->setText("x");

}

MainWindow::~MainWindow()
{
    delete ui;
}

//Définition des boutons

void MainWindow::avancer()
{
    qDebug()<< "avancer d'une image";
    ui->l_rangImage->setText("2");
    ui->l_titre->setText("Blanche neige");
}

void MainWindow::reculer()
{
    qDebug()<< "reculer d'une image";
    ui->l_rangImage->setText("6");
    ui->l_titre->setText("Harry Potter");
}

void MainWindow::lancerDiapo()
{
    qDebug()<< "lancement du diaporama";
}

void MainWindow::arreterDiapo()
{
    qDebug()<< "arrêt du diaporama";
}

void MainWindow::cb_cat1(bool etat_cat1)
{
    if(etat_cat1)
    {
        qDebug()<< "coche categorie 1";
    }
}

void MainWindow::cb_cat2(bool etat_cat2)
{
    if(etat_cat2)
    {
        qDebug()<< "coche categorie 2";
    }
}

void MainWindow::cb_cat3(bool etat_cat3)
{
    if(etat_cat3)
    {
        qDebug()<< "coche categorie 3";
    }
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

void MainWindow::aPropos()
{
    QMessageBox::information(this, "A propos", "Bonjour, ceci est la version 2 du lecteur de diaporama,"
                             "créée le 04/05/2023 par Dylan Victoras, Yannis Duvignau et Nicolas Conguisti");
}
