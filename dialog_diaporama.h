#ifndef DIALOG_DIAPORAMA_H
#define DIALOG_DIAPORAMA_H

#include <QDialog>
#include "LecteurVue.h"

namespace Ui {
class Dialog_Diaporama;
}

class Dialog_Diaporama : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_Diaporama(QWidget *parent = nullptr);
    ~Dialog_Diaporama();

    QString getNomDiapo();

public slots:
    void setDiapo1();
    void setDiapo2();
    void setDiapo3();
    void setDiapo4();

private:
    Ui::Dialog_Diaporama *ui;

    LecteurVue* lv = new LecteurVue(); //création d'un nouvel object LecteurVue

    QString nomDiapo;
};

#endif // DIALOG_DIAPORAMA_H
