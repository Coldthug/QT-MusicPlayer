/*
实现目标：自定义的Qt设计师类，改变slider值（音量）发送信号给mainwindow改变音量
目前进度：已实现
*/
#include "volume.h"
#include "ui_volume.h"
#include <QBitmap>
#include <QPainter>

volume::volume(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::volume)
{
    ui->setupUi(this);
    // 无边框
    setWindowFlag(Qt::FramelessWindowHint);
    // 背景透明
    setAttribute(Qt::WA_TranslucentBackground);
    // 设置窗口大小为背景图大小，且设置遮罩层
    QPixmap pix;
    pix.load(":/image/myMusic/Untitled1 (2).png");
    // 将窗口大小设置为图片的大小
    resize(pix.size());
    // 为窗口设置遮罩层：使用图片背景的透明区域作为窗口的透明区域
    setMask(pix.mask());

    num = 0;
}

volume::~volume()
{
    delete ui;
}

void volume::setNoVolume(int vol)
{
    setvol = vol;         // 保存当前的音量值
    ui->verticalSlider->setValue(0);
}

// 恢复音量和slider值
void volume::setVolume()
{
    // 将音量恢复为静音前的值
    ui->verticalSlider->setValue(setvol);
}

// 绘画背景图
void volume::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    QPainter painter(this);
    // 画家画图片（从哪个位置画什么图片）
    painter.drawPixmap(0,0,QPixmap(":/image/myMusic/Untitled1 (2).png"));
}

void volume::on_verticalSlider_valueChanged(int value)
{
    num ++;                         // 若已经改变slider的值则num不再为0
    emit sendVolume(value);         // 将现在值发送给mainwindow
}
