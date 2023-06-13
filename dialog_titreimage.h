#ifndef DIALOG_TITREIMAGE_H
#define DIALOG_TITREIMAGE_H

#include <QDialog>

namespace Ui {
class Dialog_titreImage;
}

class Dialog_titreImage : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_titreImage(QWidget *parent = nullptr);
    ~Dialog_titreImage();

    QString getnomImage();
    bool getChangement();

public slots:
    void confirmer();

private:
    Ui::Dialog_titreImage *ui;
    QString _nomImage;
    bool changement=false;

};

#endif // DIALOG_TITREIMAGE_H
