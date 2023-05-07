#ifndef CHANGECOLOR_H
#define CHANGECOLOR_H

#include <QWidget>

namespace Ui {
class changeColor;
}

class changeColor : public QWidget
{
    Q_OBJECT

public:
    explicit changeColor(QWidget *parent = nullptr);
    ~changeColor();

private:
    Ui::changeColor *ui;
};

#endif // CHANGECOLOR_H
