#ifndef QTEXTSCROLL_H
#define QTEXTSCROLL_H

#include <QLabel>

class QTextScroll : public QLabel
{
    Q_OBJECT
public:
    explicit QTextScroll(QWidget *parent = nullptr);   
    void showScrollText(QString text);
    void getMusicName(QString name);

private:
    int stepWidth;
    int stepTime;
    int curIndex;
    QString showText;
    QTimer *scrollTimer;

private slots:
    void updateIndex();

protected:
    void paintEvent(QPaintEvent *event);

signals:

};

#endif // QTEXTSCROLL_H
