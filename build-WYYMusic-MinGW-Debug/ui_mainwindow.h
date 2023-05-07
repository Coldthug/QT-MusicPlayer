/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *titleWidget;
    QHBoxLayout *_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_titleWYY;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *tbn_backPage;
    QSpacerItem *horizontalSpacer_11;
    QToolButton *tbn_nextPage;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_search;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_7;
    QToolButton *tbn_login;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_vip;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_skin;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_set;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_message;
    QPushButton *separate;
    QPushButton *btn_mini;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_min;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_max;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_quit;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listone;
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QListWidget *listThree;
    QSpacerItem *verticalSpacer_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_3;
    QWidget *tab_2;
    QLabel *label_4;
    QWidget *tab_3;
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_8;
    QGridLayout *gridLayout_3;
    QTabWidget *tabWidget_2;
    QWidget *tab_9;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btn_playAll;
    QPushButton *btn_chooseMusic;
    QSpacerItem *horizontalSpacer_25;
    QLineEdit *lineEdit_searchLocal;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_MusicCount;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_28;
    QWidget *tab_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_musicImage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_musicName;
    QPushButton *btn_like;
    QLabel *label_musicSinger;
    QSpacerItem *horizontalSpacer_23;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *btn_playMode;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *btn_lastMusic;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *btn_pauseMusic;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *btn_nextMusic;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *btn_showlYRIC;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_currDuration;
    QSlider *horizontalSlider;
    QLabel *label_totalDuration;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_24;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton;
    QPushButton *btn_volume;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_26;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1130, 592);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(centralwidget);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleWidget->sizePolicy().hasHeightForWidth());
        titleWidget->setSizePolicy(sizePolicy);
        titleWidget->setMinimumSize(QSize(1115, 60));
        titleWidget->setMaximumSize(QSize(16777215, 60));
        titleWidget->setLayoutDirection(Qt::LeftToRight);
        titleWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 65, 65);"));
        _2 = new QHBoxLayout(titleWidget);
        _2->setSpacing(0);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(8, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2);

        label_titleWYY = new QLabel(titleWidget);
        label_titleWYY->setObjectName(QString::fromUtf8("label_titleWYY"));
        label_titleWYY->setMinimumSize(QSize(141, 28));
        label_titleWYY->setMaximumSize(QSize(16777215, 40));
        label_titleWYY->setStyleSheet(QString::fromUtf8("border-image: url(:/titleImage/image/titleImage/red.png);"));
        label_titleWYY->setFrameShape(QFrame::NoFrame);

        _2->addWidget(label_titleWYY);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tbn_backPage = new QToolButton(titleWidget);
        tbn_backPage->setObjectName(QString::fromUtf8("tbn_backPage"));
        tbn_backPage->setMaximumSize(QSize(21, 21));
        tbn_backPage->setCursor(QCursor(Qt::PointingHandCursor));
        tbn_backPage->setStyleSheet(QString::fromUtf8("border-image: url(:/titleImage/image/titleImage/backPage.png);\n"
"background-color:rgb(217,59,59);\n"
"border-radius:10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/titleWYY/image/titleImage/backPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbn_backPage->setIcon(icon);
        tbn_backPage->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(tbn_backPage);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        tbn_nextPage = new QToolButton(titleWidget);
        tbn_nextPage->setObjectName(QString::fromUtf8("tbn_nextPage"));
        tbn_nextPage->setMaximumSize(QSize(21, 21));
        tbn_nextPage->setCursor(QCursor(Qt::PointingHandCursor));
        tbn_nextPage->setStyleSheet(QString::fromUtf8("border-image: url(:/titleImage/image/titleImage/nextPage.png);\n"
"background-color:rgb(217,59,59);\n"
"border-radius:10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/titleWYY/image/titleImage/nextPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbn_nextPage->setIcon(icon1);
        tbn_nextPage->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(tbn_nextPage);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        _2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_search = new QLineEdit(titleWidget);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(8);
        sizePolicy1.setHeightForWidth(lineEdit_search->sizePolicy().hasHeightForWidth());
        lineEdit_search->setSizePolicy(sizePolicy1);
        lineEdit_search->setMinimumSize(QSize(150, 35));
        lineEdit_search->setMaximumSize(QSize(160, 35));
        lineEdit_search->setStyleSheet(QString::fromUtf8("background: rgb(225,62,62);\n"
"border-radius: 14px;\n"
"color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(lineEdit_search);

        horizontalSpacer_13 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);


        _2->addLayout(horizontalLayout_2);

        pushButton_2 = new QPushButton(titleWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(19, 18));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/voice_search.png);\n"
"}\n"
"\n"
""));

        _2->addWidget(pushButton_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 25, -1);
        pushButton_7 = new QPushButton(titleWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(36, 36));
        pushButton_7->setMaximumSize(QSize(36, 36));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-radius:18px;\n"
"border-image: url(:/titleImage/image/titleImage/headImage.jpg);"));

        horizontalLayout_3->addWidget(pushButton_7);

        tbn_login = new QToolButton(titleWidget);
        tbn_login->setObjectName(QString::fromUtf8("tbn_login"));
        tbn_login->setMinimumSize(QSize(61, 21));
        tbn_login->setCursor(QCursor(Qt::PointingHandCursor));
        tbn_login->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	border-style:hidden;\n"
"	background-color:rgb(236,65,65);\n"
"	color:rgb(204,204,204);\n"
"}\n"
"\n"
"QToolButton:hover{\n"
"	border-style:hidden;\n"
"	background-color:rgb(236,65,65);\n"
"	color:rgb(255,255,255);\n"
"}\n"
""));
        tbn_login->setPopupMode(QToolButton::DelayedPopup);

        horizontalLayout_3->addWidget(tbn_login);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        btn_vip = new QPushButton(titleWidget);
        btn_vip->setObjectName(QString::fromUtf8("btn_vip"));
        btn_vip->setMinimumSize(QSize(20, 20));
        btn_vip->setMaximumSize(QSize(30, 25));
        btn_vip->setCursor(QCursor(Qt::PointingHandCursor));
        btn_vip->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/VIP.png);\n"
"\n"
"}"));
        btn_vip->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(btn_vip);

        horizontalSpacer_5 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        btn_skin = new QPushButton(titleWidget);
        btn_skin->setObjectName(QString::fromUtf8("btn_skin"));
        btn_skin->setMinimumSize(QSize(18, 17));
        btn_skin->setMaximumSize(QSize(17, 17));
        btn_skin->setCursor(QCursor(Qt::PointingHandCursor));
        btn_skin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image:url(:/titleWYY/image/titleImage/skin.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/skinHover.png);\n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/titleImage/image/titleImage/skinHover.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_skin->setIcon(icon2);
        btn_skin->setIconSize(QSize(30, 20));

        horizontalLayout_3->addWidget(btn_skin);

        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        btn_set = new QPushButton(titleWidget);
        btn_set->setObjectName(QString::fromUtf8("btn_set"));
        btn_set->setMinimumSize(QSize(19, 18));
        btn_set->setMaximumSize(QSize(17, 17));
        btn_set->setCursor(QCursor(Qt::PointingHandCursor));
        btn_set->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/set.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/setHover3.png);\n"
"}\n"
"\n"
"\n"
""));
        btn_set->setIconSize(QSize(30, 20));

        horizontalLayout_3->addWidget(btn_set);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_message = new QPushButton(titleWidget);
        btn_message->setObjectName(QString::fromUtf8("btn_message"));
        btn_message->setMinimumSize(QSize(17, 17));
        btn_message->setMaximumSize(QSize(17, 17));
        btn_message->setCursor(QCursor(Qt::PointingHandCursor));
        btn_message->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/message.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/meaasgeHover.png);\n"
"}\n"
"\n"
""));
        btn_message->setIconSize(QSize(30, 20));

        horizontalLayout_3->addWidget(btn_message);

        separate = new QPushButton(titleWidget);
        separate->setObjectName(QString::fromUtf8("separate"));
        separate->setMinimumSize(QSize(10, 17));
        separate->setMaximumSize(QSize(21, 17));
        separate->setStyleSheet(QString::fromUtf8("border-style:hidden;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/titleImage/image/titleImage/separate.png"), QSize(), QIcon::Normal, QIcon::Off);
        separate->setIcon(icon3);
        separate->setIconSize(QSize(30, 20));

        horizontalLayout_3->addWidget(separate);

        btn_mini = new QPushButton(titleWidget);
        btn_mini->setObjectName(QString::fromUtf8("btn_mini"));
        btn_mini->setMinimumSize(QSize(17, 17));
        btn_mini->setMaximumSize(QSize(17, 17));
        btn_mini->setCursor(QCursor(Qt::PointingHandCursor));
        btn_mini->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/mini.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/miniHover.png);\n"
"}\n"
"\n"
""));
        btn_mini->setIconSize(QSize(30, 20));

        horizontalLayout_3->addWidget(btn_mini);

        horizontalSpacer_7 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        btn_min = new QPushButton(titleWidget);
        btn_min->setObjectName(QString::fromUtf8("btn_min"));
        btn_min->setMinimumSize(QSize(17, 17));
        btn_min->setMaximumSize(QSize(17, 17));
        btn_min->setCursor(QCursor(Qt::PointingHandCursor));
        btn_min->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/min.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/minHover.png);\n"
"}\n"
"\n"
""));
        btn_min->setIconSize(QSize(30, 20));

        horizontalLayout_3->addWidget(btn_min);

        horizontalSpacer_8 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        btn_max = new QPushButton(titleWidget);
        btn_max->setObjectName(QString::fromUtf8("btn_max"));
        btn_max->setMinimumSize(QSize(17, 17));
        btn_max->setMaximumSize(QSize(17, 17));
        btn_max->setCursor(QCursor(Qt::PointingHandCursor));
        btn_max->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/max.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/maxHover.png);\n"
"}\n"
"\n"
""));
        btn_max->setIconSize(QSize(30, 20));
        btn_max->setCheckable(true);
        btn_max->setAutoDefault(false);

        horizontalLayout_3->addWidget(btn_max);

        horizontalSpacer_9 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        btn_quit = new QPushButton(titleWidget);
        btn_quit->setObjectName(QString::fromUtf8("btn_quit"));
        btn_quit->setMinimumSize(QSize(17, 17));
        btn_quit->setMaximumSize(QSize(17, 17));
        btn_quit->setCursor(QCursor(Qt::PointingHandCursor));
        btn_quit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/quit.png);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/titleImage/image/titleImage/quitHover.png);\n"
"}\n"
"\n"
""));
        btn_quit->setIconSize(QSize(30, 20));

        horizontalLayout_3->addWidget(btn_quit);


        _2->addLayout(horizontalLayout_3);


        gridLayout->addWidget(titleWidget, 0, 0, 1, 2);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(209, 430));
        widget_2->setMaximumSize(QSize(209, 16777215));
        widget_2->setStyleSheet(QString::fromUtf8("border-style:none;\n"
"border-bottom:3px solid rgb(240, 240, 240);"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 0, 0, 0);
        listone = new QListWidget(widget_2);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listone);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setBackground(brush1);
        __qlistwidgetitem->setForeground(brush);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        new QListWidgetItem(listone);
        new QListWidgetItem(listone);
        new QListWidgetItem(listone);
        new QListWidgetItem(listone);
        new QListWidgetItem(listone);
        listone->setObjectName(QString::fromUtf8("listone"));
        listone->setMinimumSize(QSize(200, 240));
        listone->setMaximumSize(QSize(160, 255));
        listone->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listone->setLayoutDirection(Qt::LeftToRight);
        listone->setStyleSheet(QString::fromUtf8("\n"
"QListWidget\n"
"{\n"
"	font:normal 14px;\n"
"	border:0px;\n"
"	color:rgb(0,0,0);\n"
"	background:rgb(255,255,255);	\n"
"}\n"
"\n"
"*\n"
"{\n"
"	outline:0px;\n"
"}\n"
" \n"
"QListWidget::Item\n"
"{\n"
"	\n"
"	height:36;\n"
"	border:0px solid rgb(255,255,255);	\n"
"	padding-top:1px;\n"
"}\n"
" \n"
"QListWidget::Item:hover\n"
"{\n"
"	background:rgb(246,246,247);	\n"
"}\n"
"\n"
"QListWidget::Item:selected\n"
"{\n"
"	font:Boid 14px;\n"
"	color:rgb(0,0,0);\n"
"\n"
"	border:0px;\n"
"	background:rgb(246,246,247);	\n"
"}"));
        listone->setFrameShape(QFrame::NoFrame);
        listone->setSpacing(3);
        listone->setGridSize(QSize(0, 40));

        verticalLayout->addWidget(listone);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(60);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(57, 20));
        label->setMaximumSize(QSize(57, 20));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(121, 121, 121);\n"
"border-style:none;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setMargin(0);

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(widget_2);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(150, 0));
        listWidget->setMaximumSize(QSize(196, 40));
        listWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listWidget->setStyleSheet(QString::fromUtf8("\n"
"QListWidget\n"
"{\n"
"	font:normal 14px;\n"
"	border:0px;\n"
"	color:rgb(0,0,0);\n"
"	background:rgb(255,255,255);	\n"
"}\n"
"\n"
"*\n"
"{\n"
"	outline:0px;\n"
"}\n"
" \n"
"QListWidget::Item\n"
"{\n"
"	\n"
"	height:36;\n"
"	border:0px solid rgb(255,255,255);	\n"
"	padding-top:1px;\n"
"}\n"
" \n"
"QListWidget::Item:hover\n"
"{\n"
"	background:rgb(246,246,247);	\n"
"}\n"
"\n"
"QListWidget::Item:selected\n"
"{\n"
"	font:Boid 14px;\n"
"	color:rgb(0,0,0);\n"
"\n"
"	border:0px;\n"
"	background:rgb(246,246,247);	\n"
"}"));

        verticalLayout->addWidget(listWidget);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 20));
        label_2->setMaximumSize(QSize(77, 20));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border-style:none;\n"
"color: rgb(121, 121, 121);"));

        verticalLayout->addWidget(label_2);

        listThree = new QListWidget(widget_2);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/creatSonglist/image/creatSonglist/loveMusic.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listThree);
        __qlistwidgetitem1->setIcon(icon4);
        listThree->setObjectName(QString::fromUtf8("listThree"));
        listThree->setMinimumSize(QSize(186, 40));
        listThree->setMaximumSize(QSize(186, 40));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        listThree->setFont(font2);
        listThree->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        listThree->setStyleSheet(QString::fromUtf8("\n"
"QListWidget\n"
"{\n"
"	font:normal 14px;\n"
"	border:0px;\n"
"	color:rgb(0,0,0);\n"
"	background:rgb(255,255,255);	\n"
"}\n"
"\n"
"*\n"
"{\n"
"	outline:0px;\n"
"}\n"
" \n"
"QListWidget::Item\n"
"{\n"
"	\n"
"	height:36;\n"
"	border:0px solid rgb(255,255,255);	\n"
"	padding-top:1px;\n"
"}\n"
" \n"
"QListWidget::Item:hover\n"
"{\n"
"	background:rgb(246,246,247);	\n"
"}\n"
"\n"
"QListWidget::Item:selected\n"
"{\n"
"	font:Boid 14px;\n"
"	color:rgb(0,0,0);\n"
"\n"
"	border:0px;\n"
"	background:rgb(246,246,247);	\n"
"}"));
        listThree->setFrameShape(QFrame::NoFrame);
        listThree->setSpacing(4);
        listThree->setGridSize(QSize(11, 40));

        verticalLayout->addWidget(listThree);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        listone->raise();
        label_2->raise();
        listThree->raise();
        label->raise();
        listWidget->raise();

        gridLayout->addWidget(widget_2, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMouseTracking(true);
        tabWidget->setTabletTracking(true);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 130, 121, 71));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 100, 54, 12));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayout_3 = new QGridLayout(tab_8);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(9);
        gridLayout_3->setVerticalSpacing(6);
        gridLayout_3->setContentsMargins(9, 9, 0, -1);
        tabWidget_2 = new QTabWidget(tab_8);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setWeight(50);
        tabWidget_2->setFont(font3);
        tabWidget_2->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget_2->setStyleSheet(QString::fromUtf8("\n"
"/*QTabWidget \347\232\204\346\240\267\345\274\217*/\n"
"QTabWidget::pane\n"
"{\n"
"	top:10px;\n"
"    border: none;  \n"
"}\n"
"\n"
"QTabBar::tab\n"
"{ \n"
"	background:transparent;\n"
"	border-bottom: 3px solid rgb(255,255,255);\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font-size:16px;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	min-width: 85px;\n"
"	min-height:30px;		\n"
"}\n"
" \n"
"QTabBar::tab:selected\n"
"{\n"
"	border-bottom: 3px solid rgb(236,65,65);\n"
"	color: rgb(55,55,55);\n"
"	font-size:20px;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"\n"
"\n"
"/*\n"
"QTabWidget::pane\n"
"{\n"
"	top:10px;\n"
"    border: 0;  \n"
"	border-style:hidden;\n"
"}\n"
"\n"
"QTabBar::tab\n"
"{ \n"
"	background:transparent;\n"
"	border-bottom: 3px solid rgb(255,255,255);\n"
"	font-family:\"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font-size:16px;\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"	min-width: 85px;\n"
"	min-height:30px;	\n"
"}\n"
" \n"
"QTabBar::tab:s"
                        "elected\n"
"{\n"
"	padding-left:15px;\n"
"	border-bottom: 3px solid rgb(236,65,65);\n"
"	color: rgb(55,55,55);\n"
"	font-size:20px;\n"
"	font-weight: bold;\n"
"}\n"
"*/"));
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayout_2 = new QGridLayout(tab_9);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 9, -1, -1);
        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_3, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        btn_playAll = new QPushButton(tab_9);
        btn_playAll->setObjectName(QString::fromUtf8("btn_playAll"));
        btn_playAll->setMinimumSize(QSize(100, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(11);
        btn_playAll->setFont(font4);
        btn_playAll->setCursor(QCursor(Qt::PointingHandCursor));
        btn_playAll->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{		\n"
"	background-color: rgb(236, 65, 65);\n"
"	border-radius:15px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_10->addWidget(btn_playAll);

        btn_chooseMusic = new QPushButton(tab_9);
        btn_chooseMusic->setObjectName(QString::fromUtf8("btn_chooseMusic"));
        btn_chooseMusic->setMinimumSize(QSize(100, 30));
        btn_chooseMusic->setFont(font4);
        btn_chooseMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_chooseMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{		\n"
"	background-color: rgb(236, 65, 65);\n"
"	border-radius:15px;\n"
"	color: rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_10->addWidget(btn_chooseMusic);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_25);

        lineEdit_searchLocal = new QLineEdit(tab_9);
        lineEdit_searchLocal->setObjectName(QString::fromUtf8("lineEdit_searchLocal"));
        sizePolicy1.setHeightForWidth(lineEdit_searchLocal->sizePolicy().hasHeightForWidth());
        lineEdit_searchLocal->setSizePolicy(sizePolicy1);
        lineEdit_searchLocal->setMinimumSize(QSize(180, 35));
        lineEdit_searchLocal->setMaximumSize(QSize(201, 35));
        lineEdit_searchLocal->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(247, 247, 247);\n"
"border-radius: 14px;\n"
"padding: 0px 0px 0px 0px;\n"
"font-family: \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_10->addWidget(lineEdit_searchLocal);


        gridLayout_2->addLayout(horizontalLayout_10, 3, 0, 1, 1);

        tableWidget = new QTableWidget(tab_9);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setStyleSheet(QString::fromUtf8("/*\347\276\216\345\214\226\350\241\250\345\244\264*/\n"
"QHeaderView::section\n"
"{\n"
"    font-size:14px;\n"
"    background: transparent;\n"
"    border:none;\n"
"	padding-left:3px;\n"
"    margin-top: 5px;\n"
"    min-height:35px;\n"
"    max-height:35px;\n"
"}\n"
"/*\346\225\264\344\275\223\345\257\271tablewidget\347\276\216\345\214\226*/\n"
"QTableWidget\n"
"{\n"
"    font-size:14px;\n"
"    border: none;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"    color: black;\n"
"	alternate-background-color: rgb(250, 250, 250);\n"
"	\n"
"}\n"
"/*\345\257\271item\347\276\216\345\214\226*/\n"
"QTableWidget::item\n"
"{\n"
"    font-size:14px;\n"
"    color: black;\n"
"}\n"
"/*\351\274\240\346\240\207\346\202\254\346\265\256\344\272\216item\346\227\266*/\n"
"QTableWidget::item:hover\n"
"{\n"
"    background:#dddddd;\n"
"}\n"
"/*item\351\200\211\344\270\255\346\227\266*/\n"
"QTableWidget::item:selected\n"
"{  \n"
"    /* color: #2eb372; */\n"
"	color: rgb(236, 65, 65);\n"
"    background: #F6F6F6;\n"
"\n"
"}"));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::NoPen);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget->verticalHeader()->setMinimumSectionSize(30);

        gridLayout_2->addWidget(tableWidget, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_MusicCount = new QLabel(tab_9);
        label_MusicCount->setObjectName(QString::fromUtf8("label_MusicCount"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(10);
        label_MusicCount->setFont(font5);

        horizontalLayout_9->addWidget(label_MusicCount);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_22);

        pushButton_5 = new QPushButton(tab_9);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setFont(font5);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-style:hidden;\n"
"color: rgb(0, 85, 255);"));

        horizontalLayout_9->addWidget(pushButton_5);


        gridLayout_2->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 4, 0, 1, 1);

        tabWidget_2->addTab(tab_9, QString());

        gridLayout_3->addWidget(tabWidget_2, 0, 1, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(9, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_28, 0, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());

        gridLayout->addWidget(tabWidget, 1, 1, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 55));
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 9, -1, -1);
        label_musicImage = new QLabel(widget);
        label_musicImage->setObjectName(QString::fromUtf8("label_musicImage"));
        label_musicImage->setMinimumSize(QSize(51, 51));
        label_musicImage->setMaximumSize(QSize(51, 51));
        label_musicImage->setCursor(QCursor(Qt::PointingHandCursor));
        label_musicImage->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"border-image: url(:/titleImage/image/titleImage/headImage.jpg);\n"
""));
        label_musicImage->setFrameShape(QFrame::Box);

        horizontalLayout_8->addWidget(label_musicImage);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_musicName = new QLabel(widget);
        label_musicName->setObjectName(QString::fromUtf8("label_musicName"));
        label_musicName->setMinimumSize(QSize(100, 16));
        label_musicName->setMaximumSize(QSize(100, 16777215));
        label_musicName->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_4->addWidget(label_musicName);

        btn_like = new QPushButton(widget);
        btn_like->setObjectName(QString::fromUtf8("btn_like"));
        btn_like->setMinimumSize(QSize(20, 20));
        btn_like->setMaximumSize(QSize(20, 20));
        btn_like->setCursor(QCursor(Qt::PointingHandCursor));
        btn_like->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/like.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/like-hover.png);\n"
"}"));
        btn_like->setIconSize(QSize(13, 13));

        horizontalLayout_4->addWidget(btn_like);


        verticalLayout_2->addLayout(horizontalLayout_4);

        label_musicSinger = new QLabel(widget);
        label_musicSinger->setObjectName(QString::fromUtf8("label_musicSinger"));
        label_musicSinger->setMinimumSize(QSize(100, 15));
        label_musicSinger->setMaximumSize(QSize(100, 16777215));
        label_musicSinger->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(label_musicSinger);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_23);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_14 = new QSpacerItem(137, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        btn_playMode = new QPushButton(widget);
        btn_playMode->setObjectName(QString::fromUtf8("btn_playMode"));
        btn_playMode->setMaximumSize(QSize(19, 19));
        btn_playMode->setCursor(QCursor(Qt::PointingHandCursor));
        btn_playMode->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/list-loop.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;	\n"
"	border-image: url(:/statusImage/image/statusImage/list-loop-hover.png);\n"
"};"));

        horizontalLayout_7->addWidget(btn_playMode);

        horizontalSpacer_15 = new QSpacerItem(25, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);

        btn_lastMusic = new QPushButton(widget);
        btn_lastMusic->setObjectName(QString::fromUtf8("btn_lastMusic"));
        btn_lastMusic->setMaximumSize(QSize(20, 20));
        btn_lastMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_lastMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image:url(:/statusImage/image/statusImage/lastMusic.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image:url(:/statusImage/image/statusImage/lastMusic-hover.png);\n"
"};"));

        horizontalLayout_7->addWidget(btn_lastMusic);

        horizontalSpacer_17 = new QSpacerItem(25, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        btn_pauseMusic = new QPushButton(widget);
        btn_pauseMusic->setObjectName(QString::fromUtf8("btn_pauseMusic"));
        btn_pauseMusic->setMaximumSize(QSize(20, 24));
        btn_pauseMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_pauseMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/play.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	\n"
"};"));
        btn_pauseMusic->setIconSize(QSize(20, 20));
        btn_pauseMusic->setCheckable(true);
        btn_pauseMusic->setChecked(false);

        horizontalLayout_7->addWidget(btn_pauseMusic);

        horizontalSpacer_16 = new QSpacerItem(25, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_16);

        btn_nextMusic = new QPushButton(widget);
        btn_nextMusic->setObjectName(QString::fromUtf8("btn_nextMusic"));
        btn_nextMusic->setMaximumSize(QSize(20, 20));
        btn_nextMusic->setCursor(QCursor(Qt::PointingHandCursor));
        btn_nextMusic->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/nextMusic.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/nextMusic-hover.png);\n"
"};"));

        horizontalLayout_7->addWidget(btn_nextMusic);

        horizontalSpacer_18 = new QSpacerItem(25, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_18);

        btn_showlYRIC = new QPushButton(widget);
        btn_showlYRIC->setObjectName(QString::fromUtf8("btn_showlYRIC"));
        btn_showlYRIC->setMaximumSize(QSize(20, 20));
        btn_showlYRIC->setCursor(QCursor(Qt::PointingHandCursor));
        btn_showlYRIC->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/lyric.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/lyric-hover.png);\n"
"};"));

        horizontalLayout_7->addWidget(btn_showlYRIC);

        horizontalSpacer_21 = new QSpacerItem(97, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_21);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_19 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_19);

        label_currDuration = new QLabel(widget);
        label_currDuration->setObjectName(QString::fromUtf8("label_currDuration"));
        label_currDuration->setMaximumSize(QSize(16777215, 15));
        QFont font6;
        font6.setPointSize(8);
        label_currDuration->setFont(font6);
        label_currDuration->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(label_currDuration);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(350, 0));
        horizontalSlider->setMaximumSize(QSize(350, 15));
        horizontalSlider->setStyleSheet(QString::fromUtf8("/*\346\234\252\345\210\222\350\277\207\345\214\272\345\237\237\347\232\204\347\276\216\345\214\226*/ \n"
"QSlider::groove\n"
"{\n"
"	background: rgb(204, 204, 204);\n"
"	height:4px;\n"
"}\n"
"/*\345\267\262\345\210\222\350\277\207\345\214\272\345\237\237\347\232\204\347\276\216\345\214\226*/\n"
"QSlider::sub-page\n"
"{\n"
"	background-color: rgb(255,78,78);\n"
"	height:4px;\n"
"}\n"
"/*\346\273\221\345\235\227\347\232\204\347\276\216\345\214\226*/\n"
"QSlider::handle\n"
"{	\n"
"	border-image: url(:/statusImage/image/statusImage/handle3.png);	\n"
"	width:10px;\n"
"	margin:-3px -3px -3px -3px;	\n"
"}\n"
"\n"
""));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider);

        label_totalDuration = new QLabel(widget);
        label_totalDuration->setObjectName(QString::fromUtf8("label_totalDuration"));
        label_totalDuration->setMaximumSize(QSize(16777215, 15));
        label_totalDuration->setFont(font6);
        label_totalDuration->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(label_totalDuration);

        horizontalSpacer_20 = new QSpacerItem(110, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_20);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout_3);

        horizontalSpacer_24 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_24);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(13);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 0));
        pushButton->setMaximumSize(QSize(40, 25));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border:none;\n"
"	background:transparent;\n"
"}"));

        horizontalLayout_6->addWidget(pushButton);

        btn_volume = new QPushButton(widget);
        btn_volume->setObjectName(QString::fromUtf8("btn_volume"));
        btn_volume->setMaximumSize(QSize(25, 25));
        btn_volume->setCursor(QCursor(Qt::PointingHandCursor));
        btn_volume->setMouseTracking(true);
        btn_volume->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/volume.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/volume-hover.png);\n"
"};"));
        btn_volume->setCheckable(true);

        horizontalLayout_6->addWidget(btn_volume);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(25, 25));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/yinxiao.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/yinxiao-hover.png);\n"
"};"));

        horizontalLayout_6->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(25, 25));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/friend.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/friend-hover.png);\n"
"};"));

        horizontalLayout_6->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(25, 25));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/playlist.png);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	border-style:hidden;\n"
"	border-image: url(:/statusImage/image/statusImage/playlist-hover.png);\n"
"};"));

        horizontalLayout_6->addWidget(pushButton_6);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalSpacer_26 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_26);


        gridLayout->addWidget(widget, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1130, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(6);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_titleWYY->setText(QString());
#if QT_CONFIG(tooltip)
        tbn_backPage->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\215\350\277\233", nullptr));
#endif // QT_CONFIG(tooltip)
        tbn_backPage->setText(QString());
#if QT_CONFIG(tooltip)
        tbn_nextPage->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\216\351\200\200", nullptr));
#endif // QT_CONFIG(tooltip)
        tbn_nextPage->setText(QString());
        lineEdit_search->setText(QString());
        lineEdit_search->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\226\234\347\276\212\347\276\212\344\270\216\347\201\260\345\244\252\347\213\274", nullptr));
        pushButton_2->setText(QString());
        pushButton_7->setText(QString());
        tbn_login->setText(QCoreApplication::translate("MainWindow", "\346\234\252\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        btn_vip->setToolTip(QCoreApplication::translate("MainWindow", "VIP\344\274\232\345\221\230", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_vip->setText(QString());
#if QT_CONFIG(tooltip)
        btn_skin->setToolTip(QCoreApplication::translate("MainWindow", "\346\215\242\350\202\244", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_skin->setText(QString());
#if QT_CONFIG(tooltip)
        btn_set->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_set->setText(QString());
#if QT_CONFIG(tooltip)
        btn_message->setToolTip(QCoreApplication::translate("MainWindow", "\351\202\256\347\256\261", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_message->setText(QString());
        separate->setText(QString());
#if QT_CONFIG(tooltip)
        btn_mini->setToolTip(QCoreApplication::translate("MainWindow", "mini\346\250\241\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_mini->setText(QString());
#if QT_CONFIG(tooltip)
        btn_min->setToolTip(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_min->setText(QString());
        btn_max->setText(QString());
#if QT_CONFIG(tooltip)
        btn_quit->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_quit->setText(QString());

        const bool __sortingEnabled = listone->isSortingEnabled();
        listone->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listone->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\217\221\347\216\260\351\237\263\344\271\220", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listone->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\222\255\345\256\242", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listone->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listone->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\205\263\346\263\250", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listone->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "\347\233\264\346\222\255", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listone->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "\347\247\201\344\272\272FM", nullptr));
        listone->setSortingEnabled(__sortingEnabled);

        label->setText(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204\351\237\263\344\271\220", nullptr));

        const bool __sortingEnabled1 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(0);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled1);

        label_2->setText(QCoreApplication::translate("MainWindow", " \346\224\266\350\227\217\347\232\204\351\237\263\344\271\220", nullptr));

        const bool __sortingEnabled2 = listThree->isSortingEnabled();
        listThree->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem7 = listThree->item(0);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "\346\210\221\345\226\234\346\254\242\347\232\204\351\237\263\344\271\220", nullptr));
        listThree->setSortingEnabled(__sortingEnabled2);

        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "wwwwwwwwwwwwwwwwww", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btn_playAll->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\345\205\250\351\203\250", nullptr));
        btn_chooseMusic->setText(QCoreApplication::translate("MainWindow", "\345\214\271\351\205\215\351\237\263\344\271\220", nullptr));
        lineEdit_searchLocal->setText(QString());
        lineEdit_searchLocal->setPlaceholderText(QCoreApplication::translate("MainWindow", " \346\220\234\347\264\242\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\255\214\346\233\262\345\220\215\345\255\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\255\214\346\211\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\344\270\223\350\276\221", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        tableWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_MusicCount->setText(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\345\205\261\346\234\2110\351\246\226\346\255\214\346\233\262", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\233\256\345\275\225", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_musicImage->setText(QString());
        label_musicName->setText(QCoreApplication::translate("MainWindow", " \346\255\214\346\233\262\345\220\215", nullptr));
#if QT_CONFIG(tooltip)
        btn_like->setToolTip(QCoreApplication::translate("MainWindow", "\345\226\234\346\254\242", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_like->setText(QString());
        label_musicSinger->setText(QCoreApplication::translate("MainWindow", " \346\255\214\346\211\213\345\220\215", nullptr));
        btn_playMode->setText(QString());
#if QT_CONFIG(tooltip)
        btn_lastMusic->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_lastMusic->setText(QString());
#if QT_CONFIG(tooltip)
        btn_pauseMusic->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        btn_pauseMusic->setText(QString());
#if QT_CONFIG(tooltip)
        btn_nextMusic->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_nextMusic->setText(QString());
#if QT_CONFIG(tooltip)
        btn_showlYRIC->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\255\214\350\257\215", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_showlYRIC->setText(QString());
#if QT_CONFIG(tooltip)
        label_currDuration->setToolTip(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215 \350\277\233\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
        label_currDuration->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\227\266\351\227\264", nullptr));
#if QT_CONFIG(tooltip)
        label_totalDuration->setToolTip(QCoreApplication::translate("MainWindow", "\346\200\273\346\227\266\351\225\277", nullptr));
#endif // QT_CONFIG(tooltip)
        label_totalDuration->setText(QCoreApplication::translate("MainWindow", "\346\200\273\345\205\261\346\227\266\351\227\264", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
#if QT_CONFIG(tooltip)
        btn_volume->setToolTip(QCoreApplication::translate("MainWindow", "\351\237\263\351\207\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_volume->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("MainWindow", "\351\237\263\346\225\210", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QCoreApplication::translate("MainWindow", "\344\272\272\350\204\211", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
