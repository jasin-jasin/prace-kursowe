// napisz klasę kwadrat, która będzie przechowywała informację o długości boku kwadratu (double) oraz będzie posiadać metodę polę zwracającą pole powierchni tego kwadratu
// dodatkowo napisz metodę get, która wypisuje długość boku kwadratu oraz metodę set, która pozwala ustawić tą długość.

// Napisz klasę Prostokąt, która będzie zaiweirać informacje o długościach boków prostokąta (double), będzie posiadać metodę polę, oraz gettery i settery do boków


# include <iostream>

class Kwadrat {

public:
    Kwadrat (double x);
    double policz_pole () const;
    double wypisz_bok () const;
    void nowy_bok (double x);
    
private: 
    double bok;
};     

Kwadrat::Kwadrat (double x) {
    nowy_bok(x);
}
     
double Kwadrat::policz_pole () const {                 /// constami oznaczamy metody które nic nie modyfikują
        return bok*bok;
    }
    
double Kwadrat::wypisz_bok () const {
        return bok;
    }

void Kwadrat::nowy_bok (double x) {
    bok = x;
    }

    
int main () {
    double x;
    double y;
    std::cout << "Podaj długość boku kwadratu: \n";
    std::cin >> x;
    Kwadrat k{x};
    std::cout << "Długość boku wynosi: " << k.wypisz_bok () << "\n";
    std::cout << "Pole tego kwadratu wynosi: " <<     k.policz_pole () << "\n";
    std::cout << "Podaj nową długość boku kwadratu: \n";
    std::cin >> y;
    k.nowy_bok(y);
    std::cout << "Nowa długość boku wynosi: " << k.wypisz_bok () << "\n";
    std::cout << "Pole nowego kwadratu wynosi: " <<     k.policz_pole () << "\n";
    
}
