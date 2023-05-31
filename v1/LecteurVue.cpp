#include "LecteurVue.h"
#include "ui_LecteurVue.h"
#include "QMessageBox"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    //Connexion des boutons

    QObject::connect(ui->b_suivant,SIGNAL(clicked()),this,SLOT(avancer()));
    QObject::connect(ui->b_precedent,SIGNAL(clicked()),this,SLOT(reculer()));
    QObject::connect(ui->b_lancerDiapo,SIGNAL(clicked()),this,SLOT(lancerDiapo()));
    QObject::connect(ui->b_arreterDiapo,SIGNAL(clicked()),this,SLOT(arreterDiapo()));
    QObject::connect(ui->cb_cat1,SIGNAL(clicked()),this,SLOT(cb_cat1()));
    QObject::connect(ui->cb_cat2,SIGNAL(clicked()),this,SLOT(cb_cat2()));
    QObject::connect(ui->cb_cat3,SIGNAL(clicked()),this,SLOT(cb_cat3()));

    //Connexion des éléments du menu

    QObject::connect(ui->a_chargerDiapo,SIGNAL(triggered()),this,SLOT(chargerDiapo()));
    QObject::connect(ui->a_changerVitesse,SIGNAL(triggered()),this,SLOT(changerVitesse()));
    QObject::connect(ui->a_enleverDiapo,SIGNAL(triggered()),this,SLOT(enleverDiapo()));
    QObject::connect(ui->a_quitter,SIGNAL(triggered()),this,SLOT(quitter()));
    QObject::connect(ui->a_aPropos,SIGNAL(triggered()),this,SLOT(aPropos()));

}

LecteurVue::~LecteurVue()
{
    delete ui;
}

//Définition des boutons

void LecteurVue::avancer()
{
    qDebug()<< "avancer d'une image";
}

void LecteurVue::reculer()
{
    qDebug()<< "reculer d'une image";

}

void LecteurVue::lancerDiapo()
{
    qDebug()<< "lancement du diaporama";
}

void LecteurVue::arreterDiapo()
{
    qDebug()<< "arrêt du diaporama";
}

void LecteurVue::cb_cat1()
{
    qDebug()<< "coche categorie 1";
}

void LecteurVue::cb_cat2()
{
    qDebug()<< "coche categorie 2";
}

void LecteurVue::cb_cat3()
{
    qDebug()<< "coche categorie 3";
}

//Définition des éléments du menu

void LecteurVue::chargerDiapo()
{
    qDebug()<< "changement du diaporama";
}

void LecteurVue::changerVitesse()
{
    qDebug()<< "changement de la vitesse";
}

void LecteurVue::enleverDiapo()
{
    qDebug()<< "enlèvement du diapoama";
}

void LecteurVue::quitter()
{
    qDebug()<< "quitter le lecteur";
}

void LecteurVue::aPropos()
{
    QMessageBox::information(this, "A propos", "Bonjour, ceci est un lecteur de diaporama.");
}
