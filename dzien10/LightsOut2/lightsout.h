#ifndef LIGHTSOUT_H
#define LIGHTSOUT_H

#include <QWidget>

class LightsOut : public QWidget
{
    Q_OBJECT

public:
    LightsOut(QWidget *parent = nullptr);
    ~LightsOut();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *e) override;

private:
    void kolko(QPainter& malarz, int x, int y);
    void krzyzyk(QPainter& malarz, int x, int y);

    bool tab[5][5];
};
#endif // LIGHTSOUT_H
