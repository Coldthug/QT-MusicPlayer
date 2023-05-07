/*
实现目标：加载qss文件改变皮肤颜色
目前进度：初步实现UI设计
*/
#include "changecolor.h"
#include "ui_changecolor.h"

changeColor::changeColor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changeColor)
{
    ui->setupUi(this);
}

changeColor::~changeColor()
{
    delete ui;
}
