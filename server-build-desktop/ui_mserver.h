/********************************************************************************
** Form generated from reading UI file 'mserver.ui'
**
** Created: Wed Jun 6 01:54:18 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSERVER_H
#define UI_MSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MServer
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *ipLabel;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *quitButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *MServer)
    {
        if (MServer->objectName().isEmpty())
            MServer->setObjectName(QString::fromUtf8("MServer"));
        MServer->resize(277, 133);
        gridLayout = new QGridLayout(MServer);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MServer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(369, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        ipLabel = new QLabel(MServer);
        ipLabel->setObjectName(QString::fromUtf8("ipLabel"));
        ipLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ipLabel);

        verticalSpacer_2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        quitButton = new QPushButton(MServer);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout->addWidget(quitButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(MServer);
        QObject::connect(quitButton, SIGNAL(clicked()), MServer, SLOT(close()));

        QMetaObject::connectSlotsByName(MServer);
    } // setupUi

    void retranslateUi(QDialog *MServer)
    {
        MServer->setWindowTitle(QApplication::translate("MServer", "MServer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MServer", "Server is running", 0, QApplication::UnicodeUTF8));
        ipLabel->setText(QString());
        quitButton->setText(QApplication::translate("MServer", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MServer: public Ui_MServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSERVER_H
