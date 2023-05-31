#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>

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
    void cb_cat1();
    void cb_cat2();
    void cb_cat3();

    //Déclaration des éléments du menu

    void chargerDiapo();
    void changerVitesse();
    void enleverDiapo();
    void quitter();
    void aPropos();


private:
    Ui::LecteurVue *ui;
};
#endif // LECTEURVUE_H
