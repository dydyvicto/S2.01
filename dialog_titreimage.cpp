#include "dialog_titreimage.h"
#include "ui_dialog_titreimage.h"
#include "QMessageBox"

Dialog_titreImage::Dialog_titreImage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_titreImage)
{
    ui->setupUi(this);

    QObject::connect(ui->b_confirmer,SIGNAL(clicked()),this,SLOT(confirmer()));
    QObject::connect(ui->b_annuler, SIGNAL(clicked()),this,SLOT(close()));
}

Dialog_titreImage::~Dialog_titreImage()
{
    delete ui;
}

QString Dialog_titreImage::getnomImage()
{
    return ui->l_nom->text();
}

bool Dialog_titreImage::getChangement()
{
    return changement;
}

void Dialog_titreImage::confirmer()
{
    QMessageBox::information(this, "Nom Changé", "Le nom de l'image a bien été changé. Veuillez recharger le diaporama");
    changement = true;
    this->hide();
}
