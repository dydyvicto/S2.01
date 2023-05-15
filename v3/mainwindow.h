#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lecteur.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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
    Ui::MainWindow *ui;
    Lecteur* L = new Lecteur();
    QString rang_Image;
    QString nbImage;
    QString titreImage;
    QString cheminImage;
    QTimer *_timer;
};
#endif // MAINWINDOW_H
