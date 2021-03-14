#include "coordinatesbutton.h"

CoordinatesButton::CoordinatesButton(const QString &text, QWidget *parent)
    : QPushButton{text, parent}
{

}

void CoordinatesButton::mousePressEvent(QMouseEvent *e)
{
    setText(QString::number(e->x()) + " " + QString::number(e->y()));

    QPushButton::mousePressEvent(e);
}
