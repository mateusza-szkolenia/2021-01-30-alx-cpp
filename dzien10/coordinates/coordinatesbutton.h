#ifndef COORDINATESBUTTON_H
#define COORDINATESBUTTON_H

#include <QPushButton>
#include <QMouseEvent>

class CoordinatesButton : public QPushButton
{
public:
    CoordinatesButton(const QString& text, QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *e) override;
};

#endif // COORDINATESBUTTON_H
