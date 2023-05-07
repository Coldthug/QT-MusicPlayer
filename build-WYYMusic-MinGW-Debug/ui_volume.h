/********************************************************************************
** Form generated from reading UI file 'volume.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUME_H
#define UI_VOLUME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_volume
{
public:
    QFormLayout *formLayout;
    QSlider *verticalSlider;

    void setupUi(QWidget *volume)
    {
        if (volume->objectName().isEmpty())
            volume->setObjectName(QString::fromUtf8("volume"));
        volume->resize(61, 128);
        formLayout = new QFormLayout(volume);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, -1, -1);
        verticalSlider = new QSlider(volume);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy);
        verticalSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"	padding-top: 15px;\n"
"	padding-bottom: 15px;\n"
"	padding-left:7px;\n"
"	padding-right:8px;\n"
"	border-radius: 5px;\n"
"}\n"
" \n"
"QSlider::add-page:vertical {\n"
"	background-color: rgb(236, 65, 65);	\n"
"	width:3px;\n"
"	border-radius: 2px;\n"
"}\n"
" \n"
"QSlider::sub-page:vertical {\n"
"	background-color: rgb(229, 229, 229);\n"
"	width:3px;\n"
"	border-radius: 2px;\n"
"}\n"
" \n"
"QSlider::groove:vertical {\n"
"	background:transparent;\n"
"	width:4px;\n"
"}\n"
" \n"
"QSlider::handle:vertical {\n"
"	height: 9px;\n"
"	width: 4px;\n"
"	margin: 0px -3px 0px -3px;\n"
"	border-radius: 4px;\n"
"	background-color: rgb(236, 65, 65);\n"
"}\n"
""));
        verticalSlider->setMaximum(100);
        verticalSlider->setValue(25);
        verticalSlider->setOrientation(Qt::Vertical);

        formLayout->setWidget(0, QFormLayout::LabelRole, verticalSlider);


        retranslateUi(volume);

        QMetaObject::connectSlotsByName(volume);
    } // setupUi

    void retranslateUi(QWidget *volume)
    {
        volume->setWindowTitle(QCoreApplication::translate("volume", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class volume: public Ui_volume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUME_H
