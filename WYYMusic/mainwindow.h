#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMouseEvent>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDebug>
#include <QTableWidgetItem>
#include "volume.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initTitle();                          // 初始化标题栏
    void initTableWidget();                    // 初始化音乐信息tablewidget
    void initVolume();                         // 初始化volume类
    void initPlayer();                         // 初始化播放器等
    void changeMaxPix();                       // 改变最大化及还原图标
    void next_last_change(int num1);           // 上一首下一首切换后改变歌曲名等
    void insertToTableWidget(int rowNum,QString musicName,QString singer,QString collection,QString size);

signals:
    void sendNoVolume(int currVolume);
    void sendVolume();

protected:
    bool eventFilter(QObject *object, QEvent *event);

private slots:
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);

    void getVolume(int value);

    void on_btn_min_clicked();

    void on_btn_quit_clicked();

    void on_btn_max_clicked(bool checked);

    void on_btn_chooseMusic_clicked();

    void on_horizontalSlider_sliderReleased();

    void on_btn_pauseMusic_clicked(bool checked);

    void on_tableWidget_itemDoubleClicked(QTableWidgetItem *item);

    void on_btn_lastMusic_clicked();

    void on_btn_nextMusic_clicked();

    void on_btn_volume_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    volume *v;                    // 音量类
    QPoint dragPosition;          // 鼠标每次按下时的位置
    QMediaPlayer *player;         // 播放器
    QMediaPlaylist *playeList;    // 播放列表
    int volumeValue;              // 音量类发送来的值
    int currvolume;               // 保存当前音量值
    QString musicName;            // 音乐名
    QString singer;               // 歌手
    QString collection;           // 专辑
    QString totalTime;            // 音乐总时长
    QString currTime;             // 当前播放时长
    QString size;                 // 音乐大小
};
#endif // MAINWINDOW_H
