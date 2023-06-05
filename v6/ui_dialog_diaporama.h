/********************************************************************************
** Form generated from reading UI file 'dialog_diaporama.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DIAPORAMA_H
#define UI_DIALOG_DIAPORAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Diaporama
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_1;
    QRadioButton *rb_2;
    QRadioButton *rb_3;
    QRadioButton *rb_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *b_confirm;

    void setupUi(QDialog *Dialog_Diaporama)
    {
        if (Dialog_Diaporama->objectName().isEmpty())
            Dialog_Diaporama->setObjectName(QString::fromUtf8("Dialog_Diaporama"));
        Dialog_Diaporama->resize(327, 296);
        verticalLayout_3 = new QVBoxLayout(Dialog_Diaporama);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Dialog_Diaporama);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox = new QGroupBox(Dialog_Diaporama);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rb_1 = new QRadioButton(groupBox);
        rb_1->setObjectName(QString::fromUtf8("rb_1"));

        verticalLayout->addWidget(rb_1);

        rb_2 = new QRadioButton(groupBox);
        rb_2->setObjectName(QString::fromUtf8("rb_2"));

        verticalLayout->addWidget(rb_2);

        rb_3 = new QRadioButton(groupBox);
        rb_3->setObjectName(QString::fromUtf8("rb_3"));

        verticalLayout->addWidget(rb_3);

        rb_4 = new QRadioButton(groupBox);
        rb_4->setObjectName(QString::fromUtf8("rb_4"));

        verticalLayout->addWidget(rb_4);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        b_confirm = new QPushButton(Dialog_Diaporama);
        b_confirm->setObjectName(QString::fromUtf8("b_confirm"));

        verticalLayout_2->addWidget(b_confirm);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Dialog_Diaporama);

        QMetaObject::connectSlotsByName(Dialog_Diaporama);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Diaporama)
    {
        Dialog_Diaporama->setWindowTitle(QCoreApplication::translate("Dialog_Diaporama", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_Diaporama", "S\303\251l\303\251ctionnez un diaporama \303\240 charger", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog_Diaporama", "Diaporama", nullptr));
        rb_1->setText(QCoreApplication::translate("Dialog_Diaporama", "Diaporama de Pantxika", nullptr));
        rb_2->setText(QCoreApplication::translate("Dialog_Diaporama", "Diaporama de Thierry", nullptr));
        rb_3->setText(QCoreApplication::translate("Dialog_Diaporama", "Diaporama de Yann", nullptr));
        rb_4->setText(QCoreApplication::translate("Dialog_Diaporama", "Diaporama Manu", nullptr));
        b_confirm->setText(QCoreApplication::translate("Dialog_Diaporama", "Charger le diaporama", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Diaporama: public Ui_Dialog_Diaporama {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DIAPORAMA_H
