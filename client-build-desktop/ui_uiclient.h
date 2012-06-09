/********************************************************************************
** Form generated from reading UI file 'uiclient.ui'
**
** Created: Sat Jun 9 18:30:14 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UICLIENT_H
#define UI_UICLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UIClient
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ServAddrEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *servPortEdit;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *fileNameEdit;
    QPushButton *fileChooseBnt;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *fileServAddr;
    QHBoxLayout *horizontalLayout_5;
    QProgressBar *progressBar;
    QLabel *transSpeed;
    QPushButton *fileSendBnt;
    QPlainTextEdit *statusInfo;

    void setupUi(QDialog *UIClient)
    {
        if (UIClient->objectName().isEmpty())
            UIClient->setObjectName(QString::fromUtf8("UIClient"));
        UIClient->resize(289, 388);
        widget = new QWidget(UIClient);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 270, 339));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(14);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(81, 25));
        label->setMaximumSize(QSize(81, 25));

        horizontalLayout->addWidget(label);

        ServAddrEdit = new QLineEdit(widget);
        ServAddrEdit->setObjectName(QString::fromUtf8("ServAddrEdit"));

        horizontalLayout->addWidget(ServAddrEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(81, 25));
        label_2->setMaximumSize(QSize(81, 25));

        horizontalLayout_2->addWidget(label_2);

        servPortEdit = new QLineEdit(widget);
        servPortEdit->setObjectName(QString::fromUtf8("servPortEdit"));

        horizontalLayout_2->addWidget(servPortEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(81, 25));
        label_3->setMaximumSize(QSize(81, 25));

        horizontalLayout_3->addWidget(label_3);

        fileNameEdit = new QLineEdit(widget);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));

        horizontalLayout_3->addWidget(fileNameEdit);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        fileChooseBnt = new QPushButton(widget);
        fileChooseBnt->setObjectName(QString::fromUtf8("fileChooseBnt"));
        fileChooseBnt->setMaximumSize(QSize(27, 27));

        horizontalLayout_4->addWidget(fileChooseBnt);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(81, 25));
        label_5->setMaximumSize(QSize(81, 25));

        horizontalLayout_6->addWidget(label_5);

        fileServAddr = new QLineEdit(widget);
        fileServAddr->setObjectName(QString::fromUtf8("fileServAddr"));

        horizontalLayout_6->addWidget(fileServAddr);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_5->addWidget(progressBar);

        transSpeed = new QLabel(widget);
        transSpeed->setObjectName(QString::fromUtf8("transSpeed"));

        horizontalLayout_5->addWidget(transSpeed);

        fileSendBnt = new QPushButton(widget);
        fileSendBnt->setObjectName(QString::fromUtf8("fileSendBnt"));

        horizontalLayout_5->addWidget(fileSendBnt);


        verticalLayout->addLayout(horizontalLayout_5);

        statusInfo = new QPlainTextEdit(widget);
        statusInfo->setObjectName(QString::fromUtf8("statusInfo"));
        statusInfo->setMaximumSize(QSize(280, 140));
        statusInfo->setReadOnly(false);
        statusInfo->setTextInteractionFlags(Qt::TextEditable|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(statusInfo);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(ServAddrEdit);
        label_2->setBuddy(servPortEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(ServAddrEdit, servPortEdit);
        QWidget::setTabOrder(servPortEdit, fileSendBnt);

        retranslateUi(UIClient);

        QMetaObject::connectSlotsByName(UIClient);
    } // setupUi

    void retranslateUi(QDialog *UIClient)
    {
        UIClient->setWindowTitle(QApplication::translate("UIClient", "UIClient", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("UIClient", "Client", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UIClient", "Server IP:", 0, QApplication::UnicodeUTF8));
        ServAddrEdit->setText(QApplication::translate("UIClient", "127.0.0.1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("UIClient", "Server Port:", 0, QApplication::UnicodeUTF8));
        servPortEdit->setText(QApplication::translate("UIClient", "8888", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("UIClient", "Choose File:", 0, QApplication::UnicodeUTF8));
        fileChooseBnt->setText(QApplication::translate("UIClient", "...", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("UIClient", "srv  addr:", 0, QApplication::UnicodeUTF8));
        fileServAddr->setText(QApplication::translate("UIClient", "/home/baiyun/testTran/", 0, QApplication::UnicodeUTF8));
        transSpeed->setText(QApplication::translate("UIClient", "TextLabel", 0, QApplication::UnicodeUTF8));
        fileSendBnt->setText(QApplication::translate("UIClient", "Send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UIClient: public Ui_UIClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UICLIENT_H
