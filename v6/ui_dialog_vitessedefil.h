/********************************************************************************
** Form generated from reading UI file 'dialog_vitessedefil.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_VITESSEDEFIL_H
#define UI_DIALOG_VITESSEDEFIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_vitesseDefil
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *l_vitesse;
    QGroupBox *GB_choix;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_vitesseX1;
    QRadioButton *rb_vitesseX2;
    QRadioButton *rb_vitesseX5;
    QRadioButton *rb_vitesseX10;
    QHBoxLayout *HL_buttons;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *b_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *b_quitter;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *Dialog_vitesseDefil)
    {
        if (Dialog_vitesseDefil->objectName().isEmpty())
            Dialog_vitesseDefil->setObjectName(QString::fromUtf8("Dialog_vitesseDefil"));
        Dialog_vitesseDefil->resize(461, 295);
        verticalLayout_2 = new QVBoxLayout(Dialog_vitesseDefil);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        l_vitesse = new QLabel(Dialog_vitesseDefil);
        l_vitesse->setObjectName(QString::fromUtf8("l_vitesse"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        l_vitesse->setFont(font);

        verticalLayout_2->addWidget(l_vitesse);

        GB_choix = new QGroupBox(Dialog_vitesseDefil);
        GB_choix->setObjectName(QString::fromUtf8("GB_choix"));
        GB_choix->setEnabled(true);
        verticalLayout = new QVBoxLayout(GB_choix);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rb_vitesseX1 = new QRadioButton(GB_choix);
        rb_vitesseX1->setObjectName(QString::fromUtf8("rb_vitesseX1"));

        verticalLayout->addWidget(rb_vitesseX1);

        rb_vitesseX2 = new QRadioButton(GB_choix);
        rb_vitesseX2->setObjectName(QString::fromUtf8("rb_vitesseX2"));

        verticalLayout->addWidget(rb_vitesseX2);

        rb_vitesseX5 = new QRadioButton(GB_choix);
        rb_vitesseX5->setObjectName(QString::fromUtf8("rb_vitesseX5"));

        verticalLayout->addWidget(rb_vitesseX5);

        rb_vitesseX10 = new QRadioButton(GB_choix);
        rb_vitesseX10->setObjectName(QString::fromUtf8("rb_vitesseX10"));

        verticalLayout->addWidget(rb_vitesseX10);


        verticalLayout_2->addWidget(GB_choix);

        HL_buttons = new QHBoxLayout();
        HL_buttons->setObjectName(QString::fromUtf8("HL_buttons"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HL_buttons->addItem(horizontalSpacer_2);

        b_ok = new QPushButton(Dialog_vitesseDefil);
        b_ok->setObjectName(QString::fromUtf8("b_ok"));

        HL_buttons->addWidget(b_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HL_buttons->addItem(horizontalSpacer);

        b_quitter = new QPushButton(Dialog_vitesseDefil);
        b_quitter->setObjectName(QString::fromUtf8("b_quitter"));

        HL_buttons->addWidget(b_quitter);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HL_buttons->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(HL_buttons);


        retranslateUi(Dialog_vitesseDefil);

        QMetaObject::connectSlotsByName(Dialog_vitesseDefil);
    } // setupUi

    void retranslateUi(QDialog *Dialog_vitesseDefil)
    {
        Dialog_vitesseDefil->setWindowTitle(QCoreApplication::translate("Dialog_vitesseDefil", "Dialog", nullptr));
        l_vitesse->setText(QCoreApplication::translate("Dialog_vitesseDefil", "Choissez le vitesse de d\303\251filement du Diaporama :", nullptr));
        GB_choix->setTitle(QCoreApplication::translate("Dialog_vitesseDefil", "Vitesse de d\303\251filement", nullptr));
        rb_vitesseX1->setText(QCoreApplication::translate("Dialog_vitesseDefil", "x1", nullptr));
        rb_vitesseX2->setText(QCoreApplication::translate("Dialog_vitesseDefil", "x2", nullptr));
        rb_vitesseX5->setText(QCoreApplication::translate("Dialog_vitesseDefil", "x5", nullptr));
        rb_vitesseX10->setText(QCoreApplication::translate("Dialog_vitesseDefil", "x10", nullptr));
        b_ok->setText(QCoreApplication::translate("Dialog_vitesseDefil", "Ok", nullptr));
        b_quitter->setText(QCoreApplication::translate("Dialog_vitesseDefil", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_vitesseDefil: public Ui_Dialog_vitesseDefil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_VITESSEDEFIL_H
