#include "qtextscroll.h"

#include <QPainter>
#include <QTimer>

QTextScroll::QTextScroll(QWidget *parent) : QLabel(parent)
{   
    stepTime = 20;
    stepWidth = 1;
    curIndex = 0;
    scrollTimer = new QTimer();
    connect(scrollTimer, SIGNAL(timeout()), this, SLOT(updateIndex()));
}

void QTextScroll::showScrollText(QString text)
{
    if(scrollTimer->isActive())
        scrollTimer->stop();
    showText = text;
    scrollTimer->start(stepTime);
}

void QTextScroll::getMusicName(QString name)
{
    showText = name;
}

void QTextScroll::updateIndex()
{
    update();
    curIndex++;
    if (curIndex*stepWidth > width())
        curIndex = 0;
}

void QTextScroll::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.drawText(0-stepWidth*curIndex, 100, showText);
    painter.drawText(width() - stepWidth*curIndex, 100, showText.left(curIndex));
}
