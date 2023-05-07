/********************************************************************************
** Form generated from reading UI file 'changecolor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECOLOR_H
#define UI_CHANGECOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changeColor
{
public:
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *tab_2;
    QGridLayout *gridLayout;

    void setupUi(QWidget *changeColor)
    {
        if (changeColor->objectName().isEmpty())
            changeColor->setObjectName(QString::fromUtf8("changeColor"));
        changeColor->resize(348, 256);
        gridLayout_3 = new QGridLayout(changeColor);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabWidget = new QTabWidget(changeColor);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab\n"
"{ \n"
"	background:transparent;\n"
"	border-bottom: 3px solid rgb(255,255,255);\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font-size:15px;\n"
"	padding-left:0px;\n"
"	padding-right:0px;\n"
"	width: 45px;\n"
"	min-height:30px;		\n"
"}\n"
" \n"
"QTabBar::tab:selected\n"
"{\n"
"	border-bottom: 3px solid rgb(236,65,65);\n"
"	color: rgb(55,55,55);\n"
"	font-size:15px;\n"
"	font-weight: bold;\n"
"	padding-left:0px;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, -1, -1);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(95, 90));
        pushButton->setMaximumSize(QSize(95, 90));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(95, 90));
        pushButton_5->setMaximumSize(QSize(95, 90));

        gridLayout_2->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(95, 90));
        pushButton_6->setMaximumSize(QSize(95, 90));

        gridLayout_2->addWidget(pushButton_6, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(95, 90));
        pushButton_4->setMaximumSize(QSize(95, 90));

        gridLayout_2->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(95, 90));
        pushButton_3->setMaximumSize(QSize(95, 90));

        gridLayout_2->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(95, 90));
        pushButton_2->setMaximumSize(QSize(95, 90));

        gridLayout_2->addWidget(pushButton_2, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_3->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(changeColor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(changeColor);
    } // setupUi

    void retranslateUi(QWidget *changeColor)
    {
        changeColor->setWindowTitle(QCoreApplication::translate("changeColor", "Form", nullptr));
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("changeColor", " \344\270\273\351\242\230", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("changeColor", "\347\272\257\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changeColor: public Ui_changeColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECOLOR_H
