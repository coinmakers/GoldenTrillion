/********************************************************************************
** Form generated from reading UI file 'newsitem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSITEM_H
#define UI_NEWSITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewsItem
{
public:
    QVBoxLayout *topLayout;
    QLabel *newsTitle;
    QLabel *newsAuthor;

    void setupUi(QWidget *NewsItem)
    {
        if (NewsItem->objectName().isEmpty())
            NewsItem->setObjectName(QStringLiteral("NewsItem"));
        NewsItem->resize(451, 50);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewsItem->sizePolicy().hasHeightForWidth());
        NewsItem->setSizePolicy(sizePolicy);
        NewsItem->setMinimumSize(QSize(430, 40));
        topLayout = new QVBoxLayout(NewsItem);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(4, 4, 4, 4);
        newsTitle = new QLabel(NewsItem);
        newsTitle->setObjectName(QStringLiteral("newsTitle"));
        newsTitle->setMinimumSize(QSize(430, 20));
        newsTitle->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        newsTitle->setFont(font);
        newsTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        newsTitle->setOpenExternalLinks(true);

        topLayout->addWidget(newsTitle);

        newsAuthor = new QLabel(NewsItem);
        newsAuthor->setObjectName(QStringLiteral("newsAuthor"));
        newsAuthor->setMinimumSize(QSize(430, 20));
        newsAuthor->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        newsAuthor->setFont(font1);
        newsAuthor->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        topLayout->addWidget(newsAuthor);


        retranslateUi(NewsItem);

        QMetaObject::connectSlotsByName(NewsItem);
    } // setupUi

    void retranslateUi(QWidget *NewsItem)
    {
        NewsItem->setWindowTitle(QApplication::translate("NewsItem", "Form", Q_NULLPTR));
        newsTitle->setText(QApplication::translate("NewsItem", "<html><head/><body><p><span style=\" color:#729fcf;\">Title</span></p></body></html>", Q_NULLPTR));
        newsAuthor->setText(QApplication::translate("NewsItem", "<html><head/><body><p><span style=\" color:#729fcf;\">Author</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewsItem: public Ui_NewsItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSITEM_H
