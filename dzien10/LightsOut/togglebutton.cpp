#include "togglebutton.h"

ToggleButton::ToggleButton(QWidget* parent)
    : QPushButton{parent}, state{false}
{
    updateText();
}

void ToggleButton::toggle()
{
    state = !state;
    updateText();
}

void ToggleButton::updateText()
{
    setText(state ? "O" : "X");
}
