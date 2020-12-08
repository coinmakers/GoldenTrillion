/********************************************************************************
** Form generated from reading UI file 'proposaldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPOSALDIALOG_H
#define UI_PROPOSALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <qvalidatedlineedit.h>

QT_BEGIN_NAMESPACE

class Ui_ProposalDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;
    QFormLayout *formLayout;
    QLabel *label;
    QValidatedLineEdit *nameEdit;
    QLabel *label_2;
    QValidatedLineEdit *urlEdit;
    QLabel *label_3;
    QValidatedLineEdit *paymentsEdit;
    QLabel *label_7;
    QValidatedLineEdit *blockEdit;
    QLabel *label_4;
    QValidatedLineEdit *addressEdit;
    QLabel *label_5;
    QValidatedLineEdit *amountEdit;
    QLabel *hashLabel;
    QValidatedLineEdit *hashEdit;
    QLabel *confirmLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *acceptButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ProposalDialog)
    {
        if (ProposalDialog->objectName().isEmpty())
            ProposalDialog->setObjectName(QStringLiteral("ProposalDialog"));
        ProposalDialog->resize(640, 126);
        verticalLayout = new QVBoxLayout(ProposalDialog);
        verticalLayout->setSpacing(11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        infoLabel = new QLabel(ProposalDialog);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));

        verticalLayout->addWidget(infoLabel);

        formLayout = new QFormLayout();
        formLayout->setSpacing(11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(11, 11, 11, 11);
        label = new QLabel(ProposalDialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit = new QValidatedLineEdit(ProposalDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        label_2 = new QLabel(ProposalDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        urlEdit = new QValidatedLineEdit(ProposalDialog);
        urlEdit->setObjectName(QStringLiteral("urlEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, urlEdit);

        label_3 = new QLabel(ProposalDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        paymentsEdit = new QValidatedLineEdit(ProposalDialog);
        paymentsEdit->setObjectName(QStringLiteral("paymentsEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, paymentsEdit);

        label_7 = new QLabel(ProposalDialog);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        blockEdit = new QValidatedLineEdit(ProposalDialog);
        blockEdit->setObjectName(QStringLiteral("blockEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, blockEdit);

        label_4 = new QLabel(ProposalDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        addressEdit = new QValidatedLineEdit(ProposalDialog);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, addressEdit);

        label_5 = new QLabel(ProposalDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        amountEdit = new QValidatedLineEdit(ProposalDialog);
        amountEdit->setObjectName(QStringLiteral("amountEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, amountEdit);

        hashLabel = new QLabel(ProposalDialog);
        hashLabel->setObjectName(QStringLiteral("hashLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, hashLabel);

        hashEdit = new QValidatedLineEdit(ProposalDialog);
        hashEdit->setObjectName(QStringLiteral("hashEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, hashEdit);

        confirmLabel = new QLabel(ProposalDialog);
        confirmLabel->setObjectName(QStringLiteral("confirmLabel"));

        formLayout->setWidget(7, QFormLayout::FieldRole, confirmLabel);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        acceptButton = new QPushButton(ProposalDialog);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));

        horizontalLayout->addWidget(acceptButton);

        cancelButton = new QPushButton(ProposalDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(nameEdit);
        label_2->setBuddy(urlEdit);
        label_3->setBuddy(paymentsEdit);
        label_7->setBuddy(blockEdit);
        label_4->setBuddy(addressEdit);
        label_5->setBuddy(amountEdit);
        hashLabel->setBuddy(hashEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ProposalDialog);

        QMetaObject::connectSlotsByName(ProposalDialog);
    } // setupUi

    void retranslateUi(QDialog *ProposalDialog)
    {
        ProposalDialog->setWindowTitle(QApplication::translate("ProposalDialog", "Budget Proposal", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("ProposalDialog", "Fill out the form below to create a budget proposal.  Before beginning, make sure your wallet is unlocked to pay the budget proposal fee of 50 GTR.  After the proposal is submitted, wait for the transaction confirmations to complete, and then click Finish Proposal to submit the proposal for voting.  The screen will update to help guide you. Do not close the dialog after paying the transaction fee\n"
"            --it will close automatically once the proposal is submitted.", Q_NULLPTR));
        label->setText(QApplication::translate("ProposalDialog", "&Proposal Name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ProposalDialog", "&Proposal URL:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ProposalDialog", "&Payments (Months):", Q_NULLPTR));
        label_7->setText(QApplication::translate("ProposalDialog", "&Super Block:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ProposalDialog", "&Payment Address:", Q_NULLPTR));
        label_5->setText(QApplication::translate("ProposalDialog", "&Payment Amount (Month):", Q_NULLPTR));
        hashLabel->setText(QApplication::translate("ProposalDialog", "&Proposal TXID:", Q_NULLPTR));
        confirmLabel->setText(QString());
        acceptButton->setProperty("text", QVariant(QApplication::translate("ProposalDialog", "Submit Proposal", Q_NULLPTR)));
        cancelButton->setText(QApplication::translate("ProposalDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProposalDialog: public Ui_ProposalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPOSALDIALOG_H
