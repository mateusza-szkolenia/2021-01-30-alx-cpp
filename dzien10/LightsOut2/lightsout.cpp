#include "lightsout.h"

#include <QMouseEvent>
#include <QPainter>


LightsOut::LightsOut(QWidget *parent)
    : QWidget(parent)
{
    resize(1000, 1000);
    for (auto& row : tab)
        for (bool& b : row)
            b = false;
}

LightsOut::~LightsOut()
{
}

void LightsOut::paintEvent(QPaintEvent *event)
{
    QPainter malarz{this};
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 5; y++) {
            if (tab[y][x]) {
                krzyzyk(malarz, 200 * x, 200 * y);
            }
            else {
                kolko(malarz, 200 * x, 200 * y);
            }
        }
    }
}

void LightsOut::mousePressEvent(QMouseEvent *e)
{
    const int x = e->x() / 200;
    const int y = e->y() / 200;
    if (x > 5 || y > 5) return;
    tab[y][x] = !tab[y][x];
    update();
}

void LightsOut::kolko(QPainter &malarz, int x, int y)
{
    malarz.drawEllipse(x, y, 200, 200);
}

void LightsOut::krzyzyk(QPainter &malarz, int x, int y)
{
    malarz.drawLine(x, y, x + 200, y + 200);
    malarz.drawLine(x, y + 200, x + 200, y);
}

