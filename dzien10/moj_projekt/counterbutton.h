#ifndef COUNTERBUTTON_H
#define COUNTERBUTTON_H

#include <QPushButton>

class CounterButton : public QPushButton
{
public:
    CounterButton(QWidget *parent = nullptr);

public slots:
    void buttonPressed();
    void resetCounter();

private:
    unsigned licznik;
};

#endif // COUNTERBUTTON_H
