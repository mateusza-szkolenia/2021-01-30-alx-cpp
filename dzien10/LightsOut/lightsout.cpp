#include "lightsout.h"
#include "togglebutton.h"
#include <QBoxLayout>

LightsOut::LightsOut(QWidget *parent)
    : QWidget(parent)
{
    ToggleButton* buttons[5][5];

    QBoxLayout* layout = new QVBoxLayout{this};
    for (int i = 0; i < 5; i++) {
        QBoxLayout* horizontal = new QHBoxLayout{};
        layout->addLayout(horizontal);
        for (int j = 0; j < 5; j++) {
            ToggleButton* btn = new ToggleButton{};
            horizontal->addWidget(btn);
            connect(btn, &QPushButton::clicked, btn, &ToggleButton::toggle);
            buttons[i][j] = btn;
        }
    }

    const int COUNT = 4;
    const int NEIGHBOUR[COUNT][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < COUNT; k++) {
                const int new_i = i + NEIGHBOUR[k][0];
                const int new_j = j + NEIGHBOUR[k][1];
                if (new_i >= 0 && new_i < 5 && new_j >= 0 && new_j < 5) {
                    connect(buttons[i][j], &QPushButton::clicked, buttons[new_i][new_j], &ToggleButton::toggle);
                }
            }
        }
    }
}

LightsOut::~LightsOut()
{
}

