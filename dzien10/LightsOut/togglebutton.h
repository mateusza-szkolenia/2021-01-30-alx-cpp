#ifndef TOGGLEBUTTON_H
#define TOGGLEBUTTON_H

#include <QPushButton>

class ToggleButton : public QPushButton
{
public:
    ToggleButton(QWidget* parent = nullptr);

public slots:
    void toggle();

private:
    void updateText();

    bool state;
};

#endif // TOGGLEBUTTON_H
