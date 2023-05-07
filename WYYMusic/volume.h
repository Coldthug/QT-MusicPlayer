#ifndef VOLUME_H
#define VOLUME_H

#include <QWidget>

namespace Ui {
class volume;
}

class volume : public QWidget
{
    Q_OBJECT

public:
    explicit volume(QWidget *parent = nullptr);
    ~volume();
    int num;                     // 用于判定是否已经改变slider的值，若为0则设置默认音量25
    void setNoVolume(int vol);   // mainwindow类点击静音后发送信号，此类收到后将slider值设为0
    void setVolume();            // 静音后恢复音量并恢复slider的值

signals:
    void sendVolume(int value);  // slider值改变后将值发送给mainwindow类改变音量

protected:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_verticalSlider_valueChanged(int value);

private:
    Ui::volume *ui;
    int setvol;                 // mainwindow传来的当前音量值，用于静音后恢复音量
};

#endif // VOLUME_H
