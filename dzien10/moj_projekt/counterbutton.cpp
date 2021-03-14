#include "counterbutton.h"

CounterButton::CounterButton(QWidget *parent)
    : QPushButton{parent}, licznik{0}
{
    setText("0");
    connect(this, &QPushButton::clicked, this, &CounterButton::buttonPressed);
}

void CounterButton::buttonPressed()
{
    setText(QString::number(++licznik));
}

void CounterButton::resetCounter()
{
    setText(QString::number(licznik = 0));
}
