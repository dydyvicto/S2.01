/********************************************************************************
** Form generated from reading UI file 'LecteurVue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *a_chargerDiapo;
    QAction *a_changerVitesse;
    QAction *a_enleverDiapo;
    QAction *a_quitter;
    QAction *a_aPropos;
    QAction *a_changerImage;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *l_image;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout;
    QLabel *l_titre;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *b_precedent;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_suivant;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_titreDiapo;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *b_arreterDiapo;
    QPushButton *b_lancerDiapo;
    QHBoxLayout *horizontalLayout_5;
    QLabel *l_mode;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *cb_cat1;
    QCheckBox *cb_cat2;
    QCheckBox *cb_cat3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *l_rangImage;
    QLabel *l_slash;
    QLabel *l_nbImage;
    QMenuBar *menubar;
    QMenu *menuParam_tres;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(469, 399);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(LecteurVue->sizePolicy().hasHeightForWidth());
        LecteurVue->setSizePolicy(sizePolicy);
        LecteurVue->setStyleSheet(QString::fromUtf8(""));
        a_chargerDiapo = new QAction(LecteurVue);
        a_chargerDiapo->setObjectName(QString::fromUtf8("a_chargerDiapo"));
        a_changerVitesse = new QAction(LecteurVue);
        a_changerVitesse->setObjectName(QString::fromUtf8("a_changerVitesse"));
        a_enleverDiapo = new QAction(LecteurVue);
        a_enleverDiapo->setObjectName(QString::fromUtf8("a_enleverDiapo"));
        a_quitter = new QAction(LecteurVue);
        a_quitter->setObjectName(QString::fromUtf8("a_quitter"));
        a_aPropos = new QAction(LecteurVue);
        a_aPropos->setObjectName(QString::fromUtf8("a_aPropos"));
        a_changerImage = new QAction(LecteurVue);
        a_changerImage->setObjectName(QString::fromUtf8("a_changerImage"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(248, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        l_image = new QLabel(centralwidget);
        l_image->setObjectName(QString::fromUtf8("l_image"));
        sizePolicy.setHeightForWidth(l_image->sizePolicy().hasHeightForWidth());
        l_image->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        l_image->setFont(font);
        l_image->setPixmap(QPixmap(QString::fromUtf8("cartesDisney/Disney_tapis.gif")));
        l_image->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(l_image);

        horizontalSpacer_6 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        l_titre = new QLabel(centralwidget);
        l_titre->setObjectName(QString::fromUtf8("l_titre"));
        QFont font1;
        font1.setPointSize(25);
        l_titre->setFont(font1);

        horizontalLayout->addWidget(l_titre);

        horizontalSpacer_2 = new QSpacerItem(228, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        b_precedent = new QPushButton(centralwidget);
        b_precedent->setObjectName(QString::fromUtf8("b_precedent"));

        horizontalLayout->addWidget(b_precedent);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        b_suivant = new QPushButton(centralwidget);
        b_suivant->setObjectName(QString::fromUtf8("b_suivant"));

        horizontalLayout->addWidget(b_suivant);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        l_titreDiapo = new QLabel(centralwidget);
        l_titreDiapo->setObjectName(QString::fromUtf8("l_titreDiapo"));
        QFont font2;
        font2.setPointSize(15);
        l_titreDiapo->setFont(font2);

        horizontalLayout_2->addWidget(l_titreDiapo);

        horizontalSpacer_7 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        b_arreterDiapo = new QPushButton(centralwidget);
        b_arreterDiapo->setObjectName(QString::fromUtf8("b_arreterDiapo"));

        horizontalLayout_2->addWidget(b_arreterDiapo);

        b_lancerDiapo = new QPushButton(centralwidget);
        b_lancerDiapo->setObjectName(QString::fromUtf8("b_lancerDiapo"));

        horizontalLayout_2->addWidget(b_lancerDiapo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        l_mode = new QLabel(centralwidget);
        l_mode->setObjectName(QString::fromUtf8("l_mode"));

        horizontalLayout_5->addWidget(l_mode);

        horizontalSpacer_3 = new QSpacerItem(158, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cb_cat1 = new QCheckBox(groupBox);
        cb_cat1->setObjectName(QString::fromUtf8("cb_cat1"));

        verticalLayout->addWidget(cb_cat1);

        cb_cat2 = new QCheckBox(groupBox);
        cb_cat2->setObjectName(QString::fromUtf8("cb_cat2"));

        verticalLayout->addWidget(cb_cat2);

        cb_cat3 = new QCheckBox(groupBox);
        cb_cat3->setObjectName(QString::fromUtf8("cb_cat3"));

        verticalLayout->addWidget(cb_cat3);


        horizontalLayout_5->addWidget(groupBox);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        l_rangImage = new QLabel(centralwidget);
        l_rangImage->setObjectName(QString::fromUtf8("l_rangImage"));

        horizontalLayout_4->addWidget(l_rangImage);

        l_slash = new QLabel(centralwidget);
        l_slash->setObjectName(QString::fromUtf8("l_slash"));

        horizontalLayout_4->addWidget(l_slash);

        l_nbImage = new QLabel(centralwidget);
        l_nbImage->setObjectName(QString::fromUtf8("l_nbImage"));

        horizontalLayout_4->addWidget(l_nbImage);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 469, 22));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName(QString::fromUtf8("menuParam_tres"));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuParam_tres->addAction(a_chargerDiapo);
        menuParam_tres->addAction(a_changerVitesse);
        menuParam_tres->addAction(a_changerImage);
        menuParam_tres->addAction(a_enleverDiapo);
        menuFichier->addAction(a_quitter);
        menuAide->addAction(a_aPropos);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "MainWindow", nullptr));
        a_chargerDiapo->setText(QCoreApplication::translate("LecteurVue", "Charger un diaporama", nullptr));
        a_changerVitesse->setText(QCoreApplication::translate("LecteurVue", "Changer la vitesse de d\303\251filement", nullptr));
        a_enleverDiapo->setText(QCoreApplication::translate("LecteurVue", "Enlever le diaporama", nullptr));
        a_quitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        a_aPropos->setText(QCoreApplication::translate("LecteurVue", "A propos", nullptr));
        a_changerImage->setText(QCoreApplication::translate("LecteurVue", "Changer le titre de l'image", nullptr));
        l_image->setText(QString());
        l_titre->setText(QCoreApplication::translate("LecteurVue", "Titre", nullptr));
        b_precedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        b_suivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        l_titreDiapo->setText(QCoreApplication::translate("LecteurVue", "TitreDiapo", nullptr));
        b_arreterDiapo->setText(QCoreApplication::translate("LecteurVue", "Arr\303\252ter le diaporama", nullptr));
        b_lancerDiapo->setText(QCoreApplication::translate("LecteurVue", "Lancer le diaporama", nullptr));
        l_mode->setText(QCoreApplication::translate("LecteurVue", "Mode", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LecteurVue", "Cat\303\251gories", nullptr));
        cb_cat1->setText(QCoreApplication::translate("LecteurVue", "Categorie1", nullptr));
        cb_cat2->setText(QCoreApplication::translate("LecteurVue", "Categorie2", nullptr));
        cb_cat3->setText(QCoreApplication::translate("LecteurVue", "Categorie3", nullptr));
        l_rangImage->setText(QCoreApplication::translate("LecteurVue", "Rang", nullptr));
        l_slash->setText(QCoreApplication::translate("LecteurVue", "/", nullptr));
        l_nbImage->setText(QCoreApplication::translate("LecteurVue", "nbImage", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
