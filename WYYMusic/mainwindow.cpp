/*
version: 1.0
时间：2022年5月24日
已实现功能：UI初步美化设计、重绘标题栏、音频导入、音频播放、音量控制，进度条显示
待开发功能：界面换肤、歌曲名过长时滚动显示、歌词解析显示、右下角播放列表、其余页面设计、轮播图、
           搜索本地音乐、响应按键控制
注：项目并非完美，可能有少许bug和不足之处
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QBitmap>
#include <QDesktopWidget>
#include <QDebug>
#include <QFileDialog>
#include <QPoint>
#include <QTimer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initVolume();
    initTitle();
    initTableWidget();
    initPlayer();
    // 无边框
    this->setWindowFlag(Qt::FramelessWindowHint);
    // 为音量buttom添加事件过滤器：鼠标放置上面则出现音量调节页面
    ui->btn_volume->installEventFilter(this);
    // 隐藏tabwidget头部
    ui->tabWidget->tabBar()->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 初始化标题栏部分
void MainWindow::initTitle()
{
    // 为标题部分添加过滤器：用于双击最大化及还原
    ui->titleWidget->installEventFilter(this);
    // 为搜索框添加搜索图标
    QAction *action = new QAction(this);
    action->setIcon(QIcon(":/titleImage/image/titleImage/searchImage.png"));
    ui->lineEdit_search->addAction(action,QLineEdit::LeadingPosition);
}

// 初始化音乐信息tablewidget
void MainWindow::initTableWidget()
{
    // 本地音乐界面搜索框
    QAction *action2 = new QAction(this);
    action2->setIcon(QIcon(":/image/serach_local.png"));
    ui->lineEdit_searchLocal->addAction(action2,QLineEdit::TrailingPosition);

    // 隐藏网格线
    ui->tableWidget->setShowGrid(false);
    // 去除纵向表头
    ui->tableWidget->verticalHeader()->hide();
    // 去除边框
    ui->tableWidget->setFrameShape(QFrame::NoFrame);
    // 不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 隐藏滚动条
    ui->tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    // 取消焦点
    ui->tableWidget->setFocusPolicy(Qt::NoFocus);
    // 设置行选择
    ui->tableWidget->setSelectionBehavior(QTableWidget::SelectRows);
    // 单元格延伸后实现单元格平分
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    // 设置水平表头文字垂直居左
    ui->tableWidget->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    // 设置垂直表头文字垂直居右
    ui->tableWidget->verticalHeader()->setDefaultAlignment(Qt::AlignRight | Qt::AlignVCenter);
    // 设置水平表头高度
    ui->tableWidget->horizontalHeader()->setFixedHeight(40);
    // 设置行高，与表头高度无关
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(40);
    // 设置背景色交替
    ui->tableWidget->setAlternatingRowColors(true);
    // 设置点击表时不对水平表头进行高亮（获得焦点）
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);
    //  设置每行默认高度
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(35);
}

// 初始化音量类
void MainWindow::initVolume()
{
    v = new volume(this);
    v->hide();
    // 为其添加事件过滤器
    v->installEventFilter(this);
    // 当音量类slider改变后发送信号，此类改变音量大小
    connect(v,&volume::sendVolume,this,&MainWindow::getVolume);
    // 点击静音后发送信号
    connect(this,&MainWindow::sendNoVolume,v,&volume::setNoVolume);
    // 发送静音前的音量给音量类，用于恢复音量
    connect(this,&MainWindow::sendVolume,v,&volume::setVolume);
}

// 初始化播放器等
void MainWindow::initPlayer()
{
    // 播放器
    player = new QMediaPlayer(this);
    // 播放列表
    playeList = new QMediaPlaylist(this);
    // 为播放器设置播放列表
    player->setPlaylist(playeList);
    // 设置播放列表播放模式：循环播放
    playeList->setPlaybackMode(QMediaPlaylist::Loop);
    // 当媒体文件变化时发射durationChanged信号：用于获取媒体总时长
    connect(player,&QMediaPlayer::durationChanged,this,&MainWindow::onDurationChanged);
    // 当前媒体文件进度发生变化时发射此信号：用于实时获取播放进度
    connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::onPositionChanged);
}

// 事件过滤器：双击最大化还原、静音，音量类显示
bool MainWindow::eventFilter(QObject *object, QEvent *event)
{
    // 针对标题栏
    if(object == ui->titleWidget)
    {
        // 判断事件类型，当鼠标按下时记录鼠标位置
        if(event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent *e = (QMouseEvent*)event;         // 转化为鼠标事件
            if(e->buttons() == Qt::LeftButton)            // 判断鼠标按键是左键
            {
                dragPosition = e->globalPos();            // 记录鼠标位置
            }
        }
        // 鼠标移动时
        if(event->type() == QEvent::MouseMove)
        {
            // 最大化时不响应拖动事件
            if(this->windowState() == Qt::WindowMaximized)
            {
                return false;
            }

            QMouseEvent *e = (QMouseEvent*)event;
            if(e->buttons() == Qt::LeftButton)
            {
                // 窗口移动原理：鼠标移动多少窗口就移动多少，最后再将鼠标按下时的位置更新后松开后的位置，攻下一次移动使用
                QPoint tempPos = e->globalPos()-dragPosition;
                move(this->pos()+tempPos);
                dragPosition = e->globalPos();
            }
        }

        // 双击标题栏实现最大化和还原
        if(event->type() == QEvent::MouseButtonDblClick)
        {
            QMouseEvent *e = (QMouseEvent*)event;
            if(e->buttons() == Qt::LeftButton)
            {
                // 如果窗口状态是正常状态则执行最大化函数，并改变相应图标样式
                if(this->windowState() == Qt::WindowNoState)
                {
                    this->showMaximized();
                    changeMaxPix();
                    ui->btn_max->setChecked(true);
                }
                else
                {
                    this->showNormal();
                    changeMaxPix();
                    ui->btn_max->setChecked(false);
                    // 获取当前屏幕大小信息，将窗口移动到屏幕中间
                    QDesktopWidget *desk = QApplication::desktop();
                    this->move(desk->width()/2-1130/2,desk->height()/2-592/2);
                }
            }
        }
    }
    // 针对音量键
    if(object == ui->btn_volume)
    {
        if(event->type() == QMouseEvent::Enter)
        {
            // 正常状态下音量界面出现的位置
            if(this->windowState() == Qt::WindowNoState)
            {
                v->move(ui->btn_volume->x()-10,ui->btn_volume->y()+420);
                v->show();
            }
            // 最大化时出现的位置
            else if(this->windowState() == Qt::MaximumSize)
            {
                v->move(ui->btn_volume->x()-10,ui->btn_volume->y()+555);
                v->show();
            }
        }
        if(event->type() == QMouseEvent::Leave)
        {
            // 如果鼠标不在音量窗体上则关闭音量窗体
            if(!v->geometry().contains(this->mapFromGlobal(QCursor::pos())))
            {
                v->close();
            }
        }
    }
    // 针对音量控制类对象：如果鼠标离开了音量控制类界面则关闭
    if(object == v)
    {
        if(event->type() == QMouseEvent::Leave)
        {
            v->close();
        }
    }
    return QMainWindow::eventFilter(object,event);
}

// 最小化
void MainWindow::on_btn_min_clicked()
{
    this->showMinimized();
}

// 退出
void MainWindow::on_btn_quit_clicked()
{
    this->close();
}

// 最大化及还原
void MainWindow::on_btn_max_clicked(bool checked)
{
    // 最开始checked==false，点击后checked==true
    if(checked)
    {
        this->showMaximized();
        changeMaxPix();
    }
    else if(checked == false)
    {
        this->showNormal();
        changeMaxPix();
        QDesktopWidget *desk = QApplication::desktop();
        this->move(desk->width()/2-1130/2,desk->height()/2-592/2);
    }
}

// 改变最大化按钮图标
void MainWindow::changeMaxPix()
{
    ui->btn_max->setIconSize(QSize(17,17));
    if(this->windowState() == Qt::WindowMaximized)
    {
        ui->btn_max->setToolTip("还原");
        ui->btn_max->setStyleSheet("QPushButton{"
                                   "border-image:url(:/titleImage/image/titleImage/restore.png);"
                                   "border-style:hidden;"
                                   "}"

                                   "QPushButton:hover{"
                                   "border-image:url(:/titleImage/image/titleImage/restoreHover.png);"
                                   "border-style:hidden;"
                                   "}"
                                   );
    }
    if(this->windowState() == Qt::WindowNoState)
    {
        ui->btn_max->setToolTip("最大化");
       ui->btn_max->setStyleSheet("QPushButton:hover{"
                                   "border-image:url(:/titleImage/image/titleImage/maxHover.png);"
                                   "border-style:hidden;"
                                   "}"

                                   "QPushButton{"
                                   "border-image:url(:/titleImage/image/titleImage/max.png);"
                                   "border-style:hidden;"
                                   "}"
                                   );
    }
}

// 将音乐信息导入tablewidget中
// 对每一行的每一列item进行添加
// 行数 音乐名 歌手名 专辑名(音乐名) 大小
void MainWindow::insertToTableWidget(int rowNum, QString musicName, QString singer, QString collection, QString size)
{
    QTableWidgetItem *item = new QTableWidgetItem(musicName);
    item->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    item->setToolTip(musicName);
    ui->tableWidget->setItem(rowNum,0,item);

    item = new QTableWidgetItem(singer);
    item->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    item->setToolTip(singer);
    ui->tableWidget->setItem(rowNum,1,item);

    item = new QTableWidgetItem(collection);
    item->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    item->setToolTip(collection);
    ui->tableWidget->setItem(rowNum,2,item);

    item = new QTableWidgetItem(size);
    item->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNum,3,item);
}

// 获取文件总长度（当媒体文件发生变化时，用于获取总时长）
void MainWindow:: onDurationChanged(qint64 duration)
{
    // 将进度条最大值设定为文件总时长
    ui->horizontalSlider->setMaximum(duration);
    int secs =duration/1000;
    int mins = secs/60;
    secs = secs%60;
    totalTime = QString::asprintf("%d分%d秒",mins,secs);        // 总时长
    ui->label_totalDuration->setText(totalTime);
    //qDebug()<<totalTime;
}

// 播放进度发生变化时（当前媒体文件进度发生变化时，用于获取实时进度）
void MainWindow:: onPositionChanged(qint64 position)
{
    ui->horizontalSlider->setValue(position);
    if(ui->horizontalSlider->isSliderDown())
    {
        return;
    }
    int secs = position/1000;
    int mins = secs/60;
    secs = secs%60;
    currTime = QString::asprintf("%d：%d",mins,secs);        // 当前播放时长
    ui->label_currDuration->setText(currTime);
}

// 调整音量
void MainWindow::getVolume(int value)
{
    volumeValue = value;                   // 音量值
    player->setVolume(volumeValue);
    if(volumeValue == 0)
    {
        ui->btn_volume->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/novolume.png);}"
                                      "QPushButton:hover{border-image:url(:/statusImage/image/statusImage/novolume-hover.png)}");
    }
    else
    {
        ui->btn_volume->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/volume.png);}"
                                      "QPushButton:hover{border-image:url(:/statusImage/image/statusImage/volume-hover.png)};");
    }
}

// 选择音乐
void MainWindow::on_btn_chooseMusic_clicked()
{
    QString filter = "(*.mp3);;(*.wav);;(*.wma)";
    // 获取程序当前路径
    QString currDir = QCoreApplication::applicationDirPath();
    QStringList musicNames = QFileDialog::getOpenFileNames(this,"选择音乐",currDir,filter);
    if(musicNames.count() == 0)
    {
        return;
    }
    ui->label_MusicCount->setText(QString("本地共有%1首歌曲").arg(musicNames.count()));
    ui->tableWidget->setRowCount(musicNames.count());
    QStringList strlist;
    int index;
    for(int i=0;i<musicNames.count();i++)
    {
        // 将音频文件添加到播放列表中
        playeList->addMedia(QUrl::fromLocalFile(musicNames.at(i)));

        // 字符串分割截取音乐名和歌手名 ---         赵雷-鼓楼.mp3
        QFileInfo info(musicNames.at(i));
        strlist = info.fileName().split("-");    // 分割后：[0]赵雷   [1]鼓楼.mp3
        singer = strlist[0].trimmed();
        index = strlist[1].lastIndexOf(".");
        // 音乐名
        musicName = strlist[1].mid(0,index);
        // 音乐大小
        size = QString::number(info.size()/1024/1024.00,'f',1)+"M";
        // 调用函数插入tablewidget中
        insertToTableWidget(i,musicName,singer,musicName,size);

        // 如果并没有音乐播放则播放添加的第一首音乐
        if(player->state() != QMediaPlayer::PlayingState)
        {
            playeList->setCurrentIndex(0);
            player->play();
            // 因为设置了tablewidget为行选择，所以只需看行就行了，无需管多少列
            ui->tableWidget->setCurrentCell(0,0);
            // 如果刚打开软件并未改变slider音量值则按照默认音量执行
            if(v->num == 0)
            {
                player->setVolume(25);
            }
            else
            {
                player->setVolume(volumeValue);
            }

            ui->btn_pauseMusic->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/pause.png)}");
            ui->label_musicName->setText(musicName);
            ui->label_musicName->setToolTip(musicName);
            ui->label_musicSinger->setText(singer);
        }
    }
}

// 滑动进度条改变播放进度
void MainWindow::on_horizontalSlider_sliderReleased()
{
    int value = ui->horizontalSlider->value();
    player->setPosition(value);
}

// 暂停播放
void MainWindow::on_btn_pauseMusic_clicked(bool checked)
{
    // 没有音乐时不响应点击暂停播放
    if(playeList->mediaCount()== 0)
    {
        return;
    }
    if(checked)
    {
        ui->btn_pauseMusic->setToolTip("暂停");
        player->pause();
        ui->btn_pauseMusic->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/play.png)}");
    }
    else if(checked == false)
    {
        ui->btn_pauseMusic->setToolTip("播放");
        player->play();
        ui->btn_pauseMusic->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/pause.png)}");
    }
}

// 双击tablewidget更改播放歌曲及更改音乐名和歌手名显示
void MainWindow::on_tableWidget_itemDoubleClicked(QTableWidgetItem *item)
{
    int row_index = item->row();
    playeList->setCurrentIndex(row_index);
    player->play();
    ui->label_musicName->setText(ui->tableWidget->item(row_index,0)->text());
    ui->label_musicSinger->setText(ui->tableWidget->item(row_index,1)->text());
    ui->label_musicName->setToolTip(musicName);
}

// 上一首
void MainWindow::on_btn_lastMusic_clicked()
{
    if(playeList->mediaCount() == 0)
    {
        return;
    }
    // 当前行index(从0开始)
    int index = ui->tableWidget->currentRow();
    // 总行数
    int count = ui->tableWidget->rowCount();
    // 当上一首大于等于第一首Index则继续，否则播放最后一首
    if(index-1>=0)
    {
        next_last_change(index-1);
    }
    else
    {
        next_last_change(count-1);
    }
    // 同步更新播放键图标
    ui->btn_pauseMusic->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/pause.png)}");
    ui->btn_pauseMusic->setChecked(false);
}

// 下一首
void MainWindow::on_btn_nextMusic_clicked()
{
    if(playeList->mediaCount()== 0)
    {
        return;
    }

    int index = ui->tableWidget->currentRow();
    int count = ui->tableWidget->rowCount();
    if(index+1<=count-1)
    {
        next_last_change(index+1);
    }
    else
    {
        next_last_change(0);
    }
    ui->btn_pauseMusic->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/pause.png)}");
    ui->btn_pauseMusic->setChecked(false);
}
void MainWindow::next_last_change(int num1)
{
    // 播放列表设置当前播放项
    playeList->setCurrentIndex(num1);
    // 播放器调用play()方法播放播放列表的当前项
    player->play();
    ui->tableWidget->setCurrentCell(num1,0);
    ui->label_musicSinger->setText(ui->tableWidget->item(num1,1)->text());
    ui->label_musicName->setText(ui->tableWidget->item(num1,0)->text());
    ui->label_musicName->setToolTip(ui->tableWidget->item(num1,0)->text());
}

// 音量键翻转：实现静音及恢复音量
void MainWindow::on_btn_volume_clicked(bool checked)
{
    if(checked)
    {
        // 如果音量调并未进行调整则采用默认音量25
        if(v->num == 0)
        {
            currvolume = 25;
        }
        // 保存当前音量值
        currvolume = volumeValue;
        // 发送信号给音量控制类，并将当前音量值一起发送便于恢复音量
        emit sendNoVolume(currvolume);
        ui->btn_volume->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/novolume.png);}"
                                      "QPushButton:hover{border-image:url(:/statusImage/image/statusImage/novolume-hover.png)}");
    }
    else if (checked == false)
    {
        // 发送信号告诉volume类恢复音量
        emit sendVolume();
        ui->btn_volume->setStyleSheet("QPushButton{border-image:url(:/statusImage/image/statusImage/volume.png);}"
                                      "QPushButton:hover{border-image:url(:/statusImage/image/statusImage/volume-hover.png)};");
    }
}
