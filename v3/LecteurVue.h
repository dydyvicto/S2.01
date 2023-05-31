#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "lecteur.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

public slots:

    //Déclaration des boutons

    void avancer();
    void reculer();
    void lancerDiapo();
    void arreterDiapo();
    void cb_cat1(bool);
    void cb_cat2(bool);
    void cb_cat3(bool);

    //Déclaration des éléments du menu

    void chargerDiapo();
    void changerVitesse();
    void enleverDiapo();
    void aPropos();


private:

    Ui::LecteurVue *ui;
    Lecteur* L = new Lecteur();
    QString rang_Image;
    QString nbImage;
    QString titreImage;
    QString cheminImage;
    QTimer *_timer;
    int _vitesseDefil = 5000;
};
#endif // LECTEURVUE_H
