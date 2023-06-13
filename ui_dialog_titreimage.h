/********************************************************************************
** Form generated from reading UI file 'dialog_titreimage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TITREIMAGE_H
#define UI_DIALOG_TITREIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_titreImage
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *l_nom;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_confirmer;
    QPushButton *b_annuler;

    void setupUi(QDialog *Dialog_titreImage)
    {
        if (Dialog_titreImage->objectName().isEmpty())
            Dialog_titreImage->setObjectName(QString::fromUtf8("Dialog_titreImage"));
        Dialog_titreImage->resize(374, 278);
        verticalLayout_2 = new QVBoxLayout(Dialog_titreImage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog_titreImage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(28, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Dialog_titreImage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        l_nom = new QLineEdit(Dialog_titreImage);
        l_nom->setObjectName(QString::fromUtf8("l_nom"));

        horizontalLayout->addWidget(l_nom);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        b_confirmer = new QPushButton(Dialog_titreImage);
        b_confirmer->setObjectName(QString::fromUtf8("b_confirmer"));

        horizontalLayout_2->addWidget(b_confirmer);

        b_annuler = new QPushButton(Dialog_titreImage);
        b_annuler->setObjectName(QString::fromUtf8("b_annuler"));

        horizontalLayout_2->addWidget(b_annuler);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog_titreImage);

        QMetaObject::connectSlotsByName(Dialog_titreImage);
    } // setupUi

    void retranslateUi(QDialog *Dialog_titreImage)
    {
        Dialog_titreImage->setWindowTitle(QCoreApplication::translate("Dialog_titreImage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_titreImage", "Changer le titre de l'image", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_titreImage", "Nouveau nom de l'image", nullptr));
        b_confirmer->setText(QCoreApplication::translate("Dialog_titreImage", "Confirmer", nullptr));
        b_annuler->setText(QCoreApplication::translate("Dialog_titreImage", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_titreImage: public Ui_Dialog_titreImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TITREIMAGE_H
