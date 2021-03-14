#include "widget.h"
#include "coordinatesbutton.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    CoordinatesButton* btn = new CoordinatesButton{"P O T E Z N Y  PRZYCISK", this};
    btn->resize(500, 500);
    btn->move(50, 50);
}

Widget::~Widget()
{
}

