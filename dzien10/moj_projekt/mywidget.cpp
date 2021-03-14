#include "mywidget.h"
#include "counterbutton.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    QBoxLayout* layout = new QVBoxLayout{this};


//    QPushButton* reset_btn = new QPushButton{"Reset"};
//    layout->addWidget(reset_btn);
////    reset_btn->resize(100, 25);
////    reset_btn->move(0, 50);
//    CounterButton* przycisk = new CounterButton{};
//    layout->addWidget(przycisk);
//    connect(reset_btn, &QPushButton::clicked, przycisk, &CounterButton::resetCounter);
////    przycisk->resize(50, 50);
////    przycisk->move(50, 0);
//    przycisk = new CounterButton{};
//    layout->addWidget(przycisk);
//    connect(reset_btn, &QPushButton::clicked, przycisk, &CounterButton::resetCounter);
////    przycisk->resize(50, 50);

    QPushButton* reset_btn = new QPushButton{"Reset"};
    for (int i = 0; i < 5; i++) {
        QBoxLayout* horizontal = new QHBoxLayout{};
        layout->addLayout(horizontal);
        for (int j = 0; j < 5; j++) {
            CounterButton* counter_btn = new CounterButton{};
            horizontal->addWidget(counter_btn, j+1);
            connect(reset_btn, &QPushButton::clicked, counter_btn, &CounterButton::resetCounter);
        }
    }
    layout->addWidget(reset_btn, 0, Qt::AlignCenter);
}

MyWidget::~MyWidget()
{
}
