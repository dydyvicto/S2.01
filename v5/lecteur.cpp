#include "lecteur.h"

#include "database.h"
#include "QSqlQuery"

Lecteur::Lecteur()
{
    _numDiaporamaCourant = 0;   // =  le lecteur est vide
}

void Lecteur::avancer()
{
    _posImageCourante=(_posImageCourante+1) %nbImages();
}

void Lecteur::reculer()
{
    _posImageCourante=(_posImageCourante-1) %nbImages();

}

void Lecteur::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        chargerDiaporama(); // charge le diaporama courant
    }

}

void Lecteur::chargerDiaporama()
{

    viderDiaporama();

    //CHARGEMENT DES INFORMATIONS RELATIVES AUX IMAGES A PARTIR DE LA BASE DE DONNEES

    QSqlQuery Marequete;
    Marequete.exec("SELECT idphoto, titrePhoto, uriPhoto, nomFamille, rang, `titre Diaporama`, vitesseDefilement "
                   "FROM Diapos D "
                   "JOIN DiaposDansDiaporama DDD ON D.idphoto = DDD.idDiapo "
                   "JOIN Diaporamas ON DDD.idDiaporama = Diaporamas.idDiaporama "
                   "JOIN Familles F ON D.idFam = F.idFamille ");

    for (int i = 0; Marequete.next(); i++  )
    {
        int idphoto = Marequete.value(0).toInt();
        QString titrePhoto = Marequete.value(1).toString();
        QString uriPhoto = Marequete.value(2).toString();
        QString nomFamille = Marequete.value(3).toString();
        int rang = Marequete.value(4).toInt();
        QString titre_Diaporama = Marequete.value(5).toString();
        int vitesseDefilement = Marequete.value(6).toInt();

        qDebug()<< idphoto;
        qDebug()<< titrePhoto;
        qDebug()<< uriPhoto;
        qDebug()<< nomFamille;
        qDebug()<< rang;
        qDebug()<< titre_Diaporama;
        qDebug()<< vitesseDefilement;



    }

    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", "F:/Documents/IUT/Annee1/S2/S2.01/S2.01-master/v5/cartesDisney/Disney_4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", "F:/Documents/IUT/Annee1/S2/S2.01/S2.01-master/v5/cartesDisney/Disney_21.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", "F:/Documents/IUT/Annee1/S2/S2.01/S2.01-master/v5/cartesDisney/Disney_19.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Mulan", "F:/Documents/IUT/Annee1/S2/S2.01/S2.01-master/v5/cartesDisney/Disney_24.gif");
    _diaporama.push_back(imageACharger);


     // trier le contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    //TRAITEMENT
    Image* copieImageParcourue;
    for (unsigned int i = 0 ; i < nbImages() - 1; i++) {
        for (unsigned int j = 0; j < nbImages() - 1; j++) {
            if ( _diaporama[j]->getRang() > _diaporama[j+1]->getRang() )
            {
                //Echanger les images
                copieImageParcourue = _diaporama[j];
                _diaporama[j] = _diaporama[j+1];
                _diaporama[j+1] = copieImageParcourue;
            }
        }
    }

     _posImageCourante = 0;

     cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     cout << nbImages() << " images chargees dans le diaporama " << endl;

}

void Lecteur::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void Lecteur::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché */
     if (numDiaporamaCourant() == 0)
     {
         cout << "Lecteur vide" << endl;
     }
     else
     {
        cout << "Diaporama num. " << numDiaporamaCourant() << endl;


    /*
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucune image */
         if ( numDiaporamaCourant() > 0)
         {
             cout << "Image courante : ";
             imageCourante()->afficher() ;
         }
         else{
             cout << "Diaporama vide";
         }
      }
}

unsigned int Lecteur::nbImages()
{
    return _diaporama.size();
}

Image *Lecteur::imageCourante()
{
    if(_diaporama.empty())
    {
        return nullptr;
    }
    else
    {
       return _diaporama[_posImageCourante];
    }
}

unsigned int Lecteur::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}

