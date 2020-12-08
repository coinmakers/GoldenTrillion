/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QFrame *frame_BG;
    QFrame *frame_Header;
    QGridLayout *gridLayout_2;
    QLabel *labelOverviewHeaderLeft;
    QLabel *labelOverviewHeaderRight;
    QFrame *frame_Content;
    QWidget *widget;
    QVBoxLayout *verticalLayout_left;
    QFrame *frameObfuscation;
    QVBoxLayout *verticalLayout;
    QFrame *frame_Balances;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_Balance_1;
    QGridLayout *gridLayout;
    QLabel *labelSpendable;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchPending;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QLabel *labelWatchImmature;
    QLabel *labelLockedBalanceText;
    QLabel *labelLockedBalance;
    QLabel *labelWatchLocked;
    QLabel *labelWatchTotal;
    QSpacerItem *horizontalSpacer_Balance_2;
    QFrame *frame_RecentTransactions;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_News;
    QFrame *line_News;
    QListWidget *listNews;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_News;
    QLabel *labelNews;
    QLabel *labelNewsStatus;
    QSpacerItem *horizontalSpacer_Balance_3;
    QFrame *frame_Links;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *labelAlerts;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_Links_1;
    QLabel *label_Links_title;
    QLabel *labelLinks1;
    QLabel *labelLinksUrl1;
    QLabel *labelLinks2;
    QLabel *labelLinksUrl4;
    QLabel *labelLinksUrl2;
    QLabel *labelLinks3;
    QLabel *labelLinksUrl3;
    QLabel *labelLinks4;
    QLabel *labelLinks5;
    QLabel *labelLinksUrl5;
    QLabel *labelLinks6;
    QLabel *labelLinksUrl6;
    QLabel *labelLinks7;
    QLabel *labelLinksUrl7;
    QLabel *labelTotal;
    QLabel *labelTotalText;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(1006, 633);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OverviewPage->sizePolicy().hasHeightForWidth());
        OverviewPage->setSizePolicy(sizePolicy);
        OverviewPage->setMinimumSize(QSize(1006, 633));
        OverviewPage->setMaximumSize(QSize(1006, 633));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(-1, -1, 9, -1);
        frame_BG = new QFrame(OverviewPage);
        frame_BG->setObjectName(QStringLiteral("frame_BG"));
        frame_BG->setMinimumSize(QSize(988, 615));
        frame_BG->setMaximumSize(QSize(16777215, 16777215));
        frame_BG->setFrameShape(QFrame::StyledPanel);
        frame_BG->setFrameShadow(QFrame::Raised);
        frame_Header = new QFrame(frame_BG);
        frame_Header->setObjectName(QStringLiteral("frame_Header"));
        frame_Header->setGeometry(QRect(2, 2, 0, 0));
        frame_Header->setStyleSheet(QStringLiteral("background-color: transparent;"));
        gridLayout_2 = new QGridLayout(frame_Header);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelOverviewHeaderLeft = new QLabel(frame_Header);
        labelOverviewHeaderLeft->setObjectName(QStringLiteral("labelOverviewHeaderLeft"));
        labelOverviewHeaderLeft->setEnabled(true);
        labelOverviewHeaderLeft->setMinimumSize(QSize(0, 0));
        labelOverviewHeaderLeft->setMaximumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(6);
        font.setBold(true);
        font.setWeight(75);
        labelOverviewHeaderLeft->setFont(font);
        labelOverviewHeaderLeft->setStyleSheet(QStringLiteral("color: transparent;"));
        labelOverviewHeaderLeft->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelOverviewHeaderLeft, 0, 0, 1, 1);

        labelOverviewHeaderRight = new QLabel(frame_Header);
        labelOverviewHeaderRight->setObjectName(QStringLiteral("labelOverviewHeaderRight"));
        labelOverviewHeaderRight->setEnabled(true);
        labelOverviewHeaderRight->setMinimumSize(QSize(0, 0));
        labelOverviewHeaderRight->setMaximumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(14);
        labelOverviewHeaderRight->setFont(font1);
        labelOverviewHeaderRight->setStyleSheet(QStringLiteral("background-color: transparent;"));
        labelOverviewHeaderRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(labelOverviewHeaderRight, 0, 1, 1, 1);

        frame_Content = new QFrame(frame_BG);
        frame_Content->setObjectName(QStringLiteral("frame_Content"));
        frame_Content->setGeometry(QRect(2, 36, 971, 576));
        frame_Content->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"Courier 10 Pitch\";"));
        widget = new QWidget(frame_Content);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_left = new QVBoxLayout(widget);
        verticalLayout_left->setObjectName(QStringLiteral("verticalLayout_left"));
        verticalLayout_left->setContentsMargins(0, 0, 0, 0);
        frameObfuscation = new QFrame(widget);
        frameObfuscation->setObjectName(QStringLiteral("frameObfuscation"));
        frameObfuscation->setMinimumSize(QSize(0, 0));
        frameObfuscation->setMaximumSize(QSize(400, 16777215));
        frameObfuscation->setFrameShape(QFrame::StyledPanel);
        frameObfuscation->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameObfuscation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_Balances = new QFrame(frameObfuscation);
        frame_Balances->setObjectName(QStringLiteral("frame_Balances"));
        frame_Balances->setStyleSheet(QStringLiteral(""));
        frame_Balances->setFrameShape(QFrame::StyledPanel);
        frame_Balances->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_Balances);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame_Balances);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Courier 10 Pitch"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label_5->setFont(font2);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame_Balances);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelWalletStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_Balance_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_Balance_1);


        verticalLayout_2->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelSpendable = new QLabel(frame_Balances);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);

        labelWatchonly = new QLabel(frame_Balances);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame_Balances);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame_Balances);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setFont(font2);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame_Balances);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setFont(font2);
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame_Balances);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelUnconfirmed = new QLabel(frame_Balances);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setFont(font2);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchPending = new QLabel(frame_Balances);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setFont(font2);
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelImmatureText = new QLabel(frame_Balances);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelImmature = new QLabel(frame_Balances);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setFont(font2);
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        labelWatchImmature = new QLabel(frame_Balances);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setFont(font2);
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        labelLockedBalanceText = new QLabel(frame_Balances);
        labelLockedBalanceText->setObjectName(QStringLiteral("labelLockedBalanceText"));

        gridLayout->addWidget(labelLockedBalanceText, 4, 0, 1, 1);

        labelLockedBalance = new QLabel(frame_Balances);
        labelLockedBalance->setObjectName(QStringLiteral("labelLockedBalance"));
        labelLockedBalance->setFont(font2);
        labelLockedBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelLockedBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelLockedBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelLockedBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelLockedBalance, 4, 1, 1, 1);

        labelWatchLocked = new QLabel(frame_Balances);
        labelWatchLocked->setObjectName(QStringLiteral("labelWatchLocked"));
        labelWatchLocked->setFont(font2);
        labelWatchLocked->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchLocked->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelWatchLocked->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchLocked->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchLocked, 4, 2, 1, 1);

        labelWatchTotal = new QLabel(frame_Balances);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setFont(font2);
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        horizontalSpacer_Balance_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_Balance_2, 5, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(frame_Balances);

        frame_RecentTransactions = new QFrame(frameObfuscation);
        frame_RecentTransactions->setObjectName(QStringLiteral("frame_RecentTransactions"));
        frame_RecentTransactions->setMinimumSize(QSize(0, 0));
        frame_RecentTransactions->setStyleSheet(QStringLiteral(""));
        frame_RecentTransactions->setFrameShape(QFrame::StyledPanel);
        frame_RecentTransactions->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_RecentTransactions);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_RecentTransactions);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(9);
        label_4->setFont(font3);
        label_4->setStyleSheet(QStringLiteral("font: 75 9pt \"Ubuntu\";"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_RecentTransactions);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelTransactionsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);


        verticalLayout_4->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_RecentTransactions);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setMinimumSize(QSize(0, 0));
        listTransactions->setStyleSheet(QLatin1String("background-color: transparent;\n"
"QListView-color: rgb(170, 255, 127);\n"
"font: 10pt \"Ubuntu\"; \n"
"\n"
""));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_4->addWidget(listTransactions);

        verticalSpacer_2 = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        verticalLayout->addWidget(frame_RecentTransactions);

        frame_News = new QFrame(frameObfuscation);
        frame_News->setObjectName(QStringLiteral("frame_News"));
        frame_News->setMinimumSize(QSize(0, 0));
        line_News = new QFrame(frame_News);
        line_News->setObjectName(QStringLiteral("line_News"));
        line_News->setGeometry(QRect(9, 37, 503, 1));
        line_News->setMinimumSize(QSize(0, 1));
        line_News->setMaximumSize(QSize(16777215, 1));
        line_News->setFrameShape(QFrame::HLine);
        line_News->setFrameShadow(QFrame::Sunken);
        listNews = new QListWidget(frame_News);
        listNews->setObjectName(QStringLiteral("listNews"));
        listNews->setEnabled(false);
        listNews->setGeometry(QRect(0, 0, 0, 0));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listNews->sizePolicy().hasHeightForWidth());
        listNews->setSizePolicy(sizePolicy1);
        listNews->setMinimumSize(QSize(0, 0));
        listNews->setSizeIncrement(QSize(0, 0));
        listNews->setStyleSheet(QStringLiteral("QListView { background: transparent; }"));
        listNews->setFrameShape(QFrame::NoFrame);
        listNews->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listNews->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listNews->setSelectionMode(QAbstractItemView::NoSelection);
        listNews->setSelectionBehavior(QAbstractItemView::SelectRows);
        listNews->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        layoutWidget = new QWidget(frame_News);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 190, 22));
        horizontalLayout_News = new QHBoxLayout(layoutWidget);
        horizontalLayout_News->setObjectName(QStringLiteral("horizontalLayout_News"));
        horizontalLayout_News->setContentsMargins(0, 0, 0, 0);
        labelNews = new QLabel(layoutWidget);
        labelNews->setObjectName(QStringLiteral("labelNews"));
        labelNews->setMinimumSize(QSize(0, 20));
        labelNews->setFont(font2);

        horizontalLayout_News->addWidget(labelNews);

        labelNewsStatus = new QLabel(layoutWidget);
        labelNewsStatus->setObjectName(QStringLiteral("labelNewsStatus"));
        labelNewsStatus->setCursor(QCursor(Qt::WhatsThisCursor));
        labelNewsStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelNewsStatus->setText(QStringLiteral("(out of sync)"));
        labelNewsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_News->addWidget(labelNewsStatus);

        horizontalSpacer_Balance_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_News->addItem(horizontalSpacer_Balance_3);


        verticalLayout->addWidget(frame_News);


        verticalLayout_left->addWidget(frameObfuscation);

        verticalLayout_left->setStretch(0, 1);
        frame_Links = new QFrame(frame_Content);
        frame_Links->setObjectName(QStringLiteral("frame_Links"));
        frame_Links->setGeometry(QRect(410, 10, 171, 201));
        frame_Links->setMaximumSize(QSize(16777215, 400));
        pushButton = new QPushButton(frame_Links);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(9, 9, 150, 25));
        pushButton->setMinimumSize(QSize(150, 25));
        pushButton->setMaximumSize(QSize(150, 25));
        QFont font4;
        font4.setFamily(QStringLiteral("Ubuntu"));
        font4.setPointSize(8);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QStringLiteral("font: 8pt \"Ubuntu\";"));
        pushButton_2 = new QPushButton(frame_Links);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(9, 40, 150, 25));
        pushButton_2->setMinimumSize(QSize(150, 25));
        pushButton_2->setMaximumSize(QSize(150, 25));
        QFont font5;
        font5.setFamily(QStringLiteral("Ubuntu"));
        font5.setPointSize(7);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        pushButton_2->setFont(font5);
        pushButton_2->setStyleSheet(QStringLiteral("font: 7pt \"Ubuntu\";"));
        pushButton_3 = new QPushButton(frame_Links);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(9, 71, 150, 25));
        pushButton_3->setMinimumSize(QSize(150, 25));
        pushButton_3->setMaximumSize(QSize(150, 25));
        pushButton_3->setStyleSheet(QStringLiteral("font: 8pt \"Ubuntu\";"));
        pushButton_4 = new QPushButton(frame_Links);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(9, 102, 150, 25));
        pushButton_4->setMinimumSize(QSize(150, 25));
        pushButton_4->setMaximumSize(QSize(150, 25));
        pushButton_4->setStyleSheet(QStringLiteral("font: 8pt \"Ubuntu\";"));
        pushButton_5 = new QPushButton(frame_Links);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(9, 133, 150, 25));
        pushButton_5->setMinimumSize(QSize(150, 25));
        pushButton_5->setMaximumSize(QSize(150, 25));
        pushButton_5->setStyleSheet(QStringLiteral("font: 8pt \"Ubuntu\";"));
        labelAlerts = new QLabel(frame_Links);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setGeometry(QRect(9, 505, 16, 25));
        labelAlerts->setMaximumSize(QSize(16777215, 16777215));
        labelAlerts->setStyleSheet(QStringLiteral("background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 0, stop:0 #F0D0A0, stop:1 #F8D488); color:#000000;"));
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        widget1 = new QWidget(frame_Links);
        widget1->setObjectName(QStringLiteral("widget1"));
        horizontalLayout_Links_1 = new QHBoxLayout(widget1);
        horizontalLayout_Links_1->setObjectName(QStringLiteral("horizontalLayout_Links_1"));
        horizontalLayout_Links_1->setContentsMargins(0, 0, 0, 0);
        label_Links_title = new QLabel(widget1);
        label_Links_title->setObjectName(QStringLiteral("label_Links_title"));

        horizontalLayout_Links_1->addWidget(label_Links_title);

        labelLinks1 = new QLabel(frame_Links);
        labelLinks1->setObjectName(QStringLiteral("labelLinks1"));
        labelLinks1->setGeometry(QRect(10, 215, 87, 19));
        labelLinksUrl1 = new QLabel(frame_Links);
        labelLinksUrl1->setObjectName(QStringLiteral("labelLinksUrl1"));
        labelLinksUrl1->setGeometry(QRect(332, 215, 16, 19));
        labelLinksUrl1->setFont(font2);
        labelLinksUrl1->setTextFormat(Qt::RichText);
        labelLinksUrl1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl1->setOpenExternalLinks(true);
        labelLinks2 = new QLabel(frame_Links);
        labelLinks2->setObjectName(QStringLiteral("labelLinks2"));
        labelLinks2->setGeometry(QRect(10, 246, 87, 19));
        labelLinksUrl4 = new QLabel(frame_Links);
        labelLinksUrl4->setObjectName(QStringLiteral("labelLinksUrl4"));
        labelLinksUrl4->setGeometry(QRect(332, 308, 16, 19));
        labelLinksUrl4->setFont(font2);
        labelLinksUrl4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl4->setOpenExternalLinks(true);
        labelLinksUrl2 = new QLabel(frame_Links);
        labelLinksUrl2->setObjectName(QStringLiteral("labelLinksUrl2"));
        labelLinksUrl2->setGeometry(QRect(332, 246, 16, 19));
        labelLinksUrl2->setFont(font2);
        labelLinksUrl2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl2->setOpenExternalLinks(true);
        labelLinks3 = new QLabel(frame_Links);
        labelLinks3->setObjectName(QStringLiteral("labelLinks3"));
        labelLinks3->setGeometry(QRect(10, 277, 87, 19));
        labelLinksUrl3 = new QLabel(frame_Links);
        labelLinksUrl3->setObjectName(QStringLiteral("labelLinksUrl3"));
        labelLinksUrl3->setGeometry(QRect(332, 277, 16, 19));
        labelLinksUrl3->setFont(font2);
        labelLinksUrl3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl3->setOpenExternalLinks(true);
        labelLinks4 = new QLabel(frame_Links);
        labelLinks4->setObjectName(QStringLiteral("labelLinks4"));
        labelLinks4->setGeometry(QRect(10, 308, 87, 19));
        labelLinks5 = new QLabel(frame_Links);
        labelLinks5->setObjectName(QStringLiteral("labelLinks5"));
        labelLinks5->setGeometry(QRect(10, 339, 87, 19));
        labelLinksUrl5 = new QLabel(frame_Links);
        labelLinksUrl5->setObjectName(QStringLiteral("labelLinksUrl5"));
        labelLinksUrl5->setGeometry(QRect(332, 339, 16, 19));
        labelLinksUrl5->setFont(font2);
        labelLinksUrl5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl5->setOpenExternalLinks(true);
        labelLinks6 = new QLabel(frame_Links);
        labelLinks6->setObjectName(QStringLiteral("labelLinks6"));
        labelLinks6->setGeometry(QRect(10, 447, 87, 19));
        labelLinksUrl6 = new QLabel(frame_Links);
        labelLinksUrl6->setObjectName(QStringLiteral("labelLinksUrl6"));
        labelLinksUrl6->setGeometry(QRect(332, 447, 16, 19));
        labelLinksUrl6->setFont(font2);
        labelLinksUrl6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl6->setOpenExternalLinks(true);
        labelLinks7 = new QLabel(frame_Links);
        labelLinks7->setObjectName(QStringLiteral("labelLinks7"));
        labelLinks7->setGeometry(QRect(10, 478, 87, 19));
        labelLinksUrl7 = new QLabel(frame_Links);
        labelLinksUrl7->setObjectName(QStringLiteral("labelLinksUrl7"));
        labelLinksUrl7->setGeometry(QRect(332, 478, 16, 19));
        labelLinksUrl7->setFont(font2);
        labelLinksUrl7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelLinksUrl7->setOpenExternalLinks(true);
        labelTotal = new QLabel(frame_Content);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setGeometry(QRect(580, 70, 261, 34));
        labelTotal->setMaximumSize(QSize(16777215, 40));
        QFont font6;
        font6.setFamily(QStringLiteral("DejaVu Sans"));
        font6.setPointSize(18);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(9);
        labelTotal->setFont(font6);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setStyleSheet(QStringLiteral("font:75 18pt \"DejaVu Sans\";"));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 GTR"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelTotalText = new QLabel(frame_Content);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));
        labelTotalText->setGeometry(QRect(680, 40, 260, 19));
        labelTotalText->setMinimumSize(QSize(260, 0));
        labelTotalText->setMaximumSize(QSize(260, 40));

        topLayout->addWidget(frame_BG);

        topLayout->setStretch(0, 1);

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        labelOverviewHeaderLeft->setText(QApplication::translate("OverviewPage", "OVERVIEW GoldenTrillionCash", Q_NULLPTR));
        labelOverviewHeaderRight->setText(QString());
        label_5->setText(QApplication::translate("OverviewPage", "GTR BALANCE COINS", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the KYD network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Staked or masternode rewards in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelLockedBalanceText->setToolTip(QApplication::translate("OverviewPage", "Locked GTR or Masternode collaterals.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelLockedBalanceText->setText(QApplication::translate("OverviewPage", "Locked:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelLockedBalance->setToolTip(QApplication::translate("OverviewPage", "Locked GTR or Masternode collaterals", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchLocked->setToolTip(QApplication::translate("OverviewPage", "Current locked balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "History transactions GTR", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the GTR network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelNews->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelNewsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the SCN network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("OverviewPage", "Home Website", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("OverviewPage", "Buy/Sell GTR", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("OverviewPage", "Discord", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("OverviewPage", "Twitter", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("OverviewPage", "Block Explorer", Q_NULLPTR));
        labelAlerts->setText(QString());
        labelLinks1->setText(QApplication::translate("OverviewPage", "Links #1:", Q_NULLPTR));
        labelLinksUrl1->setText(QString());
        labelLinks2->setText(QApplication::translate("OverviewPage", "Links #2:", Q_NULLPTR));
        labelLinksUrl4->setText(QString());
        labelLinksUrl2->setText(QString());
        labelLinks3->setText(QApplication::translate("OverviewPage", "Links #3:", Q_NULLPTR));
        labelLinksUrl3->setText(QString());
        labelLinks4->setText(QApplication::translate("OverviewPage", "Links #4:", Q_NULLPTR));
        labelLinks5->setText(QApplication::translate("OverviewPage", "Links #5:", Q_NULLPTR));
        labelLinksUrl5->setText(QString());
        labelLinks6->setText(QApplication::translate("OverviewPage", "Links #6:", Q_NULLPTR));
        labelLinksUrl6->setText(QString());
        labelLinks7->setText(QApplication::translate("OverviewPage", "Links #7:", Q_NULLPTR));
        labelLinksUrl7->setText(QString());
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current GTR balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelTotalText->setToolTip(QApplication::translate("OverviewPage", "Your current GTR balance, unconfirmed and immature transactions included", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "My Total Coins:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
