// Przepisz klasę Prostokąt tak, aby dziedziczyła po klasie kwadrat

# include <iostream>

class Kwadrat {

public:
    Kwadrat (double x = 1.0); // wartosc domyslna jako obejscie problemu ze prostokat probuje wywolac konsktruktor bezargumentowy
    double policz_pole () const;
    double wypisz_bok () const;
    void nowy_bok (double x);
    
protected:    // takie pola są widoczne dla klas dziedziczących, a poza klasą zachowują się jak pola prywatne 
    double bok;
};


class Prostokat : public Kwadrat {

public:
    Prostokat (double x, double y);
    double policz_pole () const;
    double wypisz_bok_b () const;
    void nowy_bok_b (double x);
    
private: 
    double bok_b;
};  

Kwadrat::Kwadrat (double x) {
    nowy_bok(x);
}

Prostokat::Prostokat (double x, double y) {
    nowy_bok (x);
    nowy_bok_b (y);
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

     
double Prostokat::policz_pole () const {                 /// constami oznaczamy metody które nic nie modyfikują
        return bok*bok_b;
    }


double Prostokat::wypisz_bok_b () const {
        return bok_b;
    }
    
void Prostokat::nowy_bok_b (double x) {
    bok_b = x;
    }
    
    
int main () {
    double x;
    double y;
    std::cout << "Podaj długość pierwszego boku prostokąta: \n";
    std::cin >> x;
    std::cout << "Podaj długość drugiego boku prostokąta: \n";
    std::cin >> y;   
    Prostokat p{x, y};
    std::cout << "Długość pierwszego boku wynosi: " << p.wypisz_bok () << "\n";
    std::cout << "Długość drugiego boku wynosi: " << p.wypisz_bok_b () << "\n";    
    std::cout << "Pole tego prostokąta wynosi: " <<     p.policz_pole () << "\n";
    std::cout << "Podaj nową długość pierwszego boku prostokata: \n";
    std::cin >> x;
    p.nowy_bok(x);
    std::cout << "Nowa długość pierwszego boku wynosi: " << p.wypisz_bok () << "\n";
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
