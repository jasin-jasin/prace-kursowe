#include "mywidget.h"
#include <iostream>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    licznik1 = 0;
    licznik2 = 0;
    setMinimumSize(640, 320); // ustawia rozmiar minimalny, poniżej tego nie da się zmienić ani resize, ani potem myszką po uruchomieniu aplikacji
    resize (400, 300); // ustawiamy rozmiar okienka a potem tworzymy button
    przycisk1 = new QPushButton{"0", this};  // this zgłasza, że ten button ma parenta w postaci QWidget
    przycisk1->move(100,100);
    connect (przycisk1, &QPushButton::clicked, this, &MyWidget::przycisk1Wcisniety);
    przycisk2 = new QPushButton{"0", this};
    przycisk2->move(200,200);
    connect (przycisk2, &QPushButton::clicked, this, &MyWidget::przycisk2Wcisniety);
// pierwszy argument to obiekt wysyłający sygnał
// drugi argument - co wysyła
// trzeci argument - obiekt odbierrający
// czwarty argument - jak ma zareagowąć obiekt odbierający

}

MyWidget::~MyWidget()
{
}

void MyWidget::przycisk1Wcisniety()
{
    licznik1 +=1;
    std::cout << licznik1 << std::endl;
    przycisk1->setText(QString::number(licznik1));
}

void MyWidget::przycisk2Wcisniety()
{
    licznik2 +=1;
    std::cout << licznik2 << std::endl;
    przycisk2->setText(QString::number(licznik2));
}
