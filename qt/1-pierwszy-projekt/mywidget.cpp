#include "mywidget.h"
#include "counterbutton.h"
#include <iostream>
#include <qboxlayout.h>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(640, 320); // ustawia rozmiar minimalny, poniżej tego nie da się zmienić ani resize, ani potem myszką po uruchomieniu aplikacji
    resize (400, 300); // ustawiamy rozmiar okienka a potem tworzymy button
/*
    przycisk1 = new CounterButton{this};  // this zgłasza, że ten button ma parenta w postaci QWidget
    przycisk1->move(100,100);
    przycisk2 = new CounterButton{this};
    przycisk2->move(200,200);
pierwszy argument to obiekt wysyłający sygnał
drugi argument - co wysyła
trzeci argument - obiekt odbierrający
czwarty argument - jak ma zareagowąć obiekt odbierający
*/
    CounterButton* tab [5][5];

    QHBoxLayout* poziomy = new QHBoxLayout{this};
    for (int i = 1; i<=5; i++) {
//   poziomy->addWidget(new CounterButton{});
    QVBoxLayout* pionowy = new QVBoxLayout{};
    poziomy->addLayout(pionowy);
        for (int j = 1; j<=5; j++){
            pionowy->addWidget(new CounterButton{});
        }
}

/* connect (tab[2][2], &QPushButton::clicked, tab[0][0], &CounterButton::przyciskWcisniety)

    for dla wiersza
        for dla klumny
             if wiersz > 0
                connect(tab[w][k], &QPushButton::clicked, tab [w-1][k],  &CounterButton::przyciskWcisniety)
             if kolumna > 0
                connect(tab[w][k], &QPushButton::clicked, tab [w][k-1],  &CounterButton::przyciskWcisniety)
             if wiersz+1 < 5
                connect(tab[w][k], &QPushButton::clicked, tab [w+1][k],  &CounterButton::przyciskWcisniety)
             if kolumna+1 < 5
                connect(tab[w][k], &QPushButton::clicked, tab [w][k+1],  &CounterButton::przyciskWcisniety)



    QVBoxLayout* pionowy = new QVBoxLayout{this};
    layout->addLayout(pionowy);
    pionowy->addWidget(new CounterButton{});
    pionowy->addWidget(new CounterButton{});
*/
}


MyWidget::~MyWidget()
{
}

/*
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
*/
