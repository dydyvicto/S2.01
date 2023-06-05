#include "LecteurVue.h"
#include "ui_LecteurVue.h"
#include "QMessageBox"
#include <QTimer>

#include "lecteur.h"
#include "image.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    _timer = new QTimer(this);

    //Connexion du Timer

    connect(_timer,SIGNAL(timeout()),this,SLOT(avancer()));

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



    //INITIALISER LE PREMIER AFFICHAGE
    // : l'image
    ui->l_image->setPixmap(QPixmap(":/imagesDisney/cartesDisney/Disney_tapis.gif"));

    // : boutons
    if (L->numDiaporamaCourant()==0)
    {
        ui->b_suivant->setEnabled(false);
        ui->b_precedent->setEnabled(false);
        ui->cb_cat1->setEnabled(false);
        ui->cb_cat2->setEnabled(false);
        ui->cb_cat3->setEnabled(false);
        ui->b_arreterDiapo->setEnabled(false);
        ui->b_lancerDiapo->setEnabled(false);
    }


    ui->a_changerVitesse->setEnabled(false);

    ui->a_enleverDiapo->setEnabled(false);

}

LecteurVue::~LecteurVue()
{
    delete ui;
}

//Définition des boutons

void LecteurVue::avancer()
{
    qDebug()<< "avancer d'une image";

    L->avancer();


    //MISE A JOUR

    //mise a jour du rang de l'image
    rang_Image.setNum(L->imageCourante()->getRang());
    ui->l_rangImage->setText(rang_Image);
    //mise a jour du titre de l'image
    titreImage = QString::fromStdString(L->imageCourante()->getTitre());
    ui->l_titre->setText(titreImage);
    //mise a jour du chemin de l'image
    cheminImage = QString::fromStdString(L->imageCourante()->getChemin());
    ui->l_image->setPixmap(QPixmap(cheminImage));



}

void LecteurVue::reculer()
{
    qDebug()<< "reculer d'une image";
    L->reculer();

    //MISE A JOUR

    //mise a jour du rang de l'image
    rang_Image.setNum(L->imageCourante()->getRang());
    ui->l_rangImage->setText(rang_Image);
    //mise a jour du titre de l'image
    titreImage = QString::fromStdString(L->imageCourante()->getTitre());
    ui->l_titre->setText(titreImage);
    //mise a jour du chemin de l'image
    cheminImage = QString::fromStdString(L->imageCourante()->getChemin());
    ui->l_image->setPixmap(QPixmap(cheminImage));



}

void LecteurVue::lancerDiapo()
{
    qDebug()<< "lancement du diaporama";

    //lancer à partir de la premiere image
    if(L->imageCourante()->getRang()!=1)
    {
        for(unsigned int i = L->imageCourante()->getRang() ; i < L->nbImages()+1 ; i++){
            avancer();
        }
    }



    //mise a jour de l'état des éléments graphiques
    ui->l_mode->setText("Automatique");

    ui->b_arreterDiapo->setEnabled(true);
    ui->b_lancerDiapo->setEnabled(true);

    ui->a_changerVitesse->setEnabled(false);
    ui->a_enleverDiapo->setEnabled(false);
    ui->a_chargerDiapo->setEnabled(false);

    //lancer le timer
    _timer->setSingleShot(false);


    if(!_timer->isActive()){
        _timer->start(_vitesseDefil);
    }


}

void LecteurVue::arreterDiapo()
{
    qDebug()<< "arrêt du diaporama";

    //arret du mode auto
    _timer->stop();

    //mise a jour de l'état des éléments graphiques
    ui->l_mode->setText("Manuel");

    ui->b_arreterDiapo->setEnabled(false);

    ui->a_changerVitesse->setEnabled(true);
    ui->a_enleverDiapo->setEnabled(true);
    ui->a_chargerDiapo->setEnabled(true);

}

void LecteurVue::cb_cat1(bool etat_cat1)
{
    if(etat_cat1)
    {
        qDebug()<< "coche categorie 1";
    }
}

void LecteurVue::cb_cat2(bool etat_cat2)
{
    if(etat_cat2)
    {
        qDebug()<< "coche categorie 2";
    }
}

void LecteurVue::cb_cat3(bool etat_cat3)
{
    if(etat_cat3)
    {
        qDebug()<< "coche categorie 3";
    }
}

//Définition des éléments du menu

void LecteurVue::chargerDiapo()
{
    qDebug()<< "changement du diaporama";

    //mise a jour de l'état des éléments graphiques
    ui->b_suivant->setEnabled(true);
    ui->b_precedent->setEnabled(true);
    ui->b_lancerDiapo->setEnabled(true);

    ui->cb_cat1->setEnabled(true);
    ui->cb_cat2->setEnabled(true);
    ui->cb_cat3->setEnabled(true);

    ui->a_changerVitesse->setEnabled(true);
    ui->a_enleverDiapo->setEnabled(false);



    //Lancement du diaporama
    L->changerDiaporama(1);

    //Récupérer le nombre d'images
    nbImage.setNum(L->nbImages());

    //Récupérer le titre d'image
    titreImage = QString::fromStdString(L->imageCourante()->getTitre());

    //Récupérer le rang de l'image
    rang_Image.setNum(L->imageCourante()->getRang());
    ui->l_nbImage->setText(nbImage);

    //QString cheminImage;
    cheminImage = QString::fromStdString(L->imageCourante()->getChemin());



    //Initialiser l'affichage ==>> faire une fonction de mise a jour des éléments
    ui->l_rangImage->setText(rang_Image);
    ui->l_mode->setText("manuel");
    ui->l_titre->setText(titreImage);
    ui->l_titreDiapo->setText("Diapo " + QString::number(L->numDiaporamaCourant()));
    ui->cb_cat1->setText("Animal");
    ui->cb_cat2->setText("Personne");
    ui->cb_cat3->setText("Objet");
    ui->l_image->setPixmap(QPixmap(cheminImage));
    ui->b_arreterDiapo->setEnabled(false);

}

void LecteurVue::changerVitesse()
{
    qDebug()<< "changement de la vitesse";

    //changer la vitesse manuellement
    if (_vitesseDefil == 1000){
        _vitesseDefil = 5000;
    }else{
        _vitesseDefil = 1000;
    }

}

void LecteurVue::enleverDiapo()
{
    qDebug()<< "enlèvement du diapoama";
    L->changerDiaporama(0);

    //mise a jour de l'état des éléments graphiques
    ui->b_suivant->setEnabled(false);
    ui->b_precedent->setEnabled(false);
    ui->b_lancerDiapo->setEnabled(false);
    ui->b_arreterDiapo->setEnabled(false);

    ui->cb_cat1->setEnabled(false);
    ui->cb_cat2->setEnabled(false);
    ui->cb_cat3->setEnabled(false);

    ui->a_changerVitesse->setEnabled(false);


    //Restaurer l'affichage de base

    ui->l_image->setPixmap(QPixmap(":/imagesDisney/cartesDisney/Disney_tapis.gif"));
    ui->l_titre->setText("Titre");
    ui->l_titreDiapo->setText("TitreDiapo");
    ui->l_rangImage->setText("Rang");
    ui->l_nbImage->setText("nbImage");
    ui->l_mode->setText("Mode");

    ui->cb_cat1->setText("Categorie1");
    ui->cb_cat2->setText("Categorie2");
    ui->cb_cat3->setText("Categorie3");

}

void LecteurVue::aPropos()
{
    QMessageBox::information(this, "A propos", "Bonjour, ceci est la version 3 du lecteur de diaporama,"
                             "créée le 04/05/2023 par Dylan Victoras, Yannis Duvignau et Nicolas Conguisti");
}
