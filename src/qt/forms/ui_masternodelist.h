/********************************************************************************
** Form generated from reading UI file 'masternodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODELIST_H
#define UI_MASTERNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeList
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer0;
    QLabel *labelOverviewHeaderLeft;
    QTabWidget *tabWidget;
    QWidget *tabMyMasternodes;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_note;
    QLabel *updateNote;
    QTableWidget *tableWidgetMyMasternodes;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *startButton;
    QPushButton *startAllButton;
    QPushButton *startMissingButton;
    QPushButton *UpdateButton;
    QLabel *autoupdate_label;
    QLabel *secondsLabel;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tabAllMasternodes;
    QGridLayout *gridLayout;
    QTableWidget *tableWidgetMasternodes;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_filter;
    QLineEdit *filterLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_count;
    QLabel *countLabel;

    void setupUi(QWidget *MasternodeList)
    {
        if (MasternodeList->objectName().isEmpty())
            MasternodeList->setObjectName(QStringLiteral("MasternodeList"));
        MasternodeList->resize(794, 457);
        MasternodeList->setStyleSheet(QStringLiteral(""));
        topLayout = new QVBoxLayout(MasternodeList);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(10, 0, 10, 10);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer0 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer0);

        labelOverviewHeaderLeft = new QLabel(MasternodeList);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setMinimumSize(QSize(464, 40));
        labelOverviewHeaderLeft->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labelOverviewHeaderLeft->setFont(font);

        verticalLayout->addWidget(labelOverviewHeaderLeft);

        tabWidget = new QTabWidget(MasternodeList);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabMyMasternodes = new QWidget();
        tabMyMasternodes->setObjectName(QStringLiteral("tabMyMasternodes"));
        gridLayout_2 = new QGridLayout(tabMyMasternodes);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_note = new QHBoxLayout();
        horizontalLayout_note->setObjectName(QStringLiteral("horizontalLayout_note"));
        horizontalLayout_note->setContentsMargins(-1, -1, -1, 0);
        updateNote = new QLabel(tabMyMasternodes);
        updateNote->setObjectName(QStringLiteral("updateNote"));

        horizontalLayout_note->addWidget(updateNote);


        verticalLayout_2->addLayout(horizontalLayout_note);

        tableWidgetMyMasternodes = new QTableWidget(tabMyMasternodes);
        if (tableWidgetMyMasternodes->columnCount() < 7)
            tableWidgetMyMasternodes->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMyMasternodes->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidgetMyMasternodes->setObjectName(QStringLiteral("tableWidgetMyMasternodes"));
        tableWidgetMyMasternodes->setMinimumSize(QSize(695, 0));
        tableWidgetMyMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMyMasternodes->setAlternatingRowColors(true);
        tableWidgetMyMasternodes->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMyMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMyMasternodes->setSortingEnabled(true);
        tableWidgetMyMasternodes->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidgetMyMasternodes);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        startButton = new QPushButton(tabMyMasternodes);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_5->addWidget(startButton);

        startAllButton = new QPushButton(tabMyMasternodes);
        startAllButton->setObjectName(QStringLiteral("startAllButton"));

        horizontalLayout_5->addWidget(startAllButton);

        startMissingButton = new QPushButton(tabMyMasternodes);
        startMissingButton->setObjectName(QStringLiteral("startMissingButton"));

        horizontalLayout_5->addWidget(startMissingButton);

        UpdateButton = new QPushButton(tabMyMasternodes);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_5->addWidget(UpdateButton);

        autoupdate_label = new QLabel(tabMyMasternodes);
        autoupdate_label->setObjectName(QStringLiteral("autoupdate_label"));

        horizontalLayout_5->addWidget(autoupdate_label);

        secondsLabel = new QLabel(tabMyMasternodes);
        secondsLabel->setObjectName(QStringLiteral("secondsLabel"));

        horizontalLayout_5->addWidget(secondsLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tabMyMasternodes, QString());
        tabAllMasternodes = new QWidget();
        tabAllMasternodes->setObjectName(QStringLiteral("tabAllMasternodes"));
        gridLayout = new QGridLayout(tabAllMasternodes);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidgetMasternodes = new QTableWidget(tabAllMasternodes);
        if (tableWidgetMasternodes->columnCount() < 6)
            tableWidgetMasternodes->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetMasternodes->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        tableWidgetMasternodes->setObjectName(QStringLiteral("tableWidgetMasternodes"));
        tableWidgetMasternodes->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMasternodes->setAlternatingRowColors(true);
        tableWidgetMasternodes->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMasternodes->setSortingEnabled(true);
        tableWidgetMasternodes->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(tableWidgetMasternodes, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_filter = new QLabel(tabAllMasternodes);
        label_filter->setObjectName(QStringLiteral("label_filter"));

        horizontalLayout_3->addWidget(label_filter);

        filterLineEdit = new QLineEdit(tabAllMasternodes);
        filterLineEdit->setObjectName(QStringLiteral("filterLineEdit"));

        horizontalLayout_3->addWidget(filterLineEdit);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_count = new QLabel(tabAllMasternodes);
        label_count->setObjectName(QStringLiteral("label_count"));

        horizontalLayout_3->addWidget(label_count);

        countLabel = new QLabel(tabAllMasternodes);
        countLabel->setObjectName(QStringLiteral("countLabel"));

        horizontalLayout_3->addWidget(countLabel);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tabAllMasternodes, QString());

        verticalLayout->addWidget(tabWidget);


        topLayout->addLayout(verticalLayout);


        retranslateUi(MasternodeList);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasternodeList);
    } // setupUi

    void retranslateUi(QWidget *MasternodeList)
    {
        MasternodeList->setWindowTitle(QApplication::translate("MasternodeList", "Form", Q_NULLPTR));
        labelOverviewHeaderLeft->setText(QApplication::translate("MasternodeList", "MASTERNODES", Q_NULLPTR));
        updateNote->setText(QApplication::translate("MasternodeList", "Note: Status of your masternodes in local wallet can potentially be slightly incorrect.<br />Always wait for wallet to sync additional data and then double check from another node<br />if your node should be running but you still see \"MISSING\" in \"Status\" field.", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMyMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeList", "Alias", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMyMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeList", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMyMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeList", "Protocol", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMyMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeList", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMyMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeList", "Active", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMyMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeList", "Last Seen (UTC)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMyMasternodes->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeList", "Pubkey", Q_NULLPTR));
        startButton->setText(QApplication::translate("MasternodeList", "S&tart alias", Q_NULLPTR));
        startAllButton->setText(QApplication::translate("MasternodeList", "Start &all", Q_NULLPTR));
        startMissingButton->setText(QApplication::translate("MasternodeList", "Start &MISSING", Q_NULLPTR));
        UpdateButton->setText(QApplication::translate("MasternodeList", "&Update status", Q_NULLPTR));
        autoupdate_label->setText(QApplication::translate("MasternodeList", "Status will be updated automatically in (sec):", Q_NULLPTR));
        secondsLabel->setText(QApplication::translate("MasternodeList", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabMyMasternodes), QApplication::translate("MasternodeList", "My Masternodes", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetMasternodes->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MasternodeList", "Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetMasternodes->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MasternodeList", "Protocol", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetMasternodes->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MasternodeList", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetMasternodes->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MasternodeList", "Active", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetMasternodes->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MasternodeList", "Last Seen (UTC)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetMasternodes->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MasternodeList", "Pubkey", Q_NULLPTR));
        label_filter->setText(QApplication::translate("MasternodeList", "Filter List:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        filterLineEdit->setToolTip(QApplication::translate("MasternodeList", "Filter masternode list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_count->setText(QApplication::translate("MasternodeList", "Node Count:", Q_NULLPTR));
        countLabel->setText(QApplication::translate("MasternodeList", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabAllMasternodes), QApplication::translate("MasternodeList", "All Masternodes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MasternodeList: public Ui_MasternodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODELIST_H
