// napisz klasę kwadrat, która będzie przechowywała informację o długości boku kwadratu (double) oraz będzie posiadać metodę polę zwracającą pole powierchni tego kwadratu
// dodatkowo napisz metodę get, która wypisuje długość boku kwadratu oraz metodę set, która pozwala ustawić tą długość.

// Napisz klasę Prostokąt, która będzie zaiweirać informacje o długościach boków prostokąta (double), będzie posiadać metodę polę, oraz gettery i settery do boków


# include <iostream>

class Prostokat {

public:
    Prostokat (double x, double y);
    double policz_pole () const;
    double wypisz_bok_a () const;
    double wypisz_bok_b () const;
    void nowy_bok_a (double x);
    void nowy_bok_b (double x);
    
private: 
    double bok_a;
    double bok_b;
}; 

class Kwadrat {

public:
    Kwadrat (double x);
    double policz_pole () const;
    double wypisz_bok () const;
    void nowy_bok (double x);
    
private: 
    double bok;
}; 


Prostokat::Prostokat (double x, double y) {
    nowy_bok_a (x);
    nowy_bok_b (y);
}
     
double Prostokat::policz_pole () const {                 /// constami oznaczamy metody które nic nie modyfikują
        return bok_a*bok_b;
    }
    
double Prostokat::wypisz_bok_a () const {
        return bok_a;
    }

double Prostokat::wypisz_bok_b () const {
        return bok_b;
    }

void Prostokat::nowy_bok_a (double x) {
    bok_a = x;
    }
    
void Prostokat::nowy_bok_b (double x) {
    bok_b = x;
    }

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
    std::cout << "Podaj długość pierwszego boku prostokąta: \n";
    std::cin >> x;
    std::cout << "Podaj długość drugiego boku prostokąta: \n";
    std::cin >> y;   
    Prostokat p{x, y};
    std::cout << "Długość pierwszego boku wynosi: " << p.wypisz_bok_a () << "\n";
    std::cout << "Długość drugiego boku wynosi: " << p.wypisz_bok_b () << "\n";    
    std::cout << "Pole tego prostokąta wynosi: " <<     p.policz_pole () << "\n";
    std::cout << "Podaj nową długość pierwszego boku prostokata: \n";
    std::cin >> x;
    p.nowy_bok_a(x);
    std::cout << "Nowa długość pierwszego boku wynosi: " << p.wypisz_bok_a () << "\n";
    std::cout << "Podaj nową długość drugiego boku prostokata: \n";
    std::cin >> x;
    p.nowy_bok_b(x);
    std::cout << "Nowa długość drugiego boku wynosi: " << p.wypisz_bok_b () << "\n";    
    std::cout << "Pole nowego prostokąta wynosi: " <<     p.policz_pole () << "\n";
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
