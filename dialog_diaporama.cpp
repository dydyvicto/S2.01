#include "dialog_diaporama.h"
#include "ui_dialog_diaporama.h"

#include "QObject"

Dialog_Diaporama::Dialog_Diaporama(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Diaporama)
{
    ui->setupUi(this);

    connect(ui->b_confirm,SIGNAL(clicked()),this,SLOT(close()));

    connect(ui->rb_1,SIGNAL(clicked()),this,SLOT(setDiapo1()));
    connect(ui->rb_2,SIGNAL(clicked()),this,SLOT(setDiapo2()));
    connect(ui->rb_3,SIGNAL(clicked()),this,SLOT(setDiapo3()));
    connect(ui->rb_4,SIGNAL(clicked()),this,SLOT(setDiapo4()));
}

QString Dialog_Diaporama::getNomDiapo()
{
    return nomDiapo;
}

void Dialog_Diaporama::setDiapo1()
{
    nomDiapo = "diapoama Pantxika";
}

void Dialog_Diaporama::setDiapo2()
{
    nomDiapo = "diaporama Thierry";
}

void Dialog_Diaporama::setDiapo3()
{
    nomDiapo = "diaporama Yann";
}

void Dialog_Diaporama::setDiapo4()
{
    nomDiapo = "diaporam Manu";
}

Dialog_Diaporama::~Dialog_Diaporama()
{
    delete ui;
}
