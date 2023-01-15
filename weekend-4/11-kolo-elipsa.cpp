// Napisz klasy Kolo i Elipsa, zawierające promień / promienie i metodę pole ().
// Zachowaj sensowaną hierarchię dziedziczenia
// zakładamy że pi = 3.14
// pole elipsy pi * r * r2

# include <iostream>

class Kolo {

public:
    Kolo (double x); // wartosc domyslna jako obejscie problemu ze prostokat probuje wywolac konsktruktor bezargumentowy
    double policz_pole () const;
    
protected:
    double promien;
};


class Elipsa : public Kolo {

public:
    Elipsa (double x, double y);
    double policz_pole () const;
    
private: 
    double promien_2;
};  

Kolo::Kolo (double x) 
{
    promien = x;
}

Elipsa::Elipsa (double x, double y) 
: Kolo{x}  // lista inicjalizacyjna - Prostokat jeden bok przyjmuje z Kwadaru i drgui tworzy
{
    promien_2 = y;
}

double Kolo::policz_pole () const {                 /// constami oznaczamy metody które nic nie modyfikują
        return promien * promien * 3.14;
    }
    
double Elipsa::policz_pole () const {                 /// constami oznaczamy metody które nic nie modyfikują
        return promien * promien_2 * 3.14;                      // korzystamy z metody wypisz_bok bo bok jest w klasie prywatnej
    }
    
int main () {
    double x;
    double y;
    std::cout << "Podaj długość promienia koła: \n";
    std::cin >> x;
    std::cout << "Podaj długość drugiego promienia dla elipsy: \n";
    std::cin >> y;   
    Kolo o{x};
    Elipsa e{x,y};   
    std::cout << "Pole koła wynosi: " <<     o.policz_pole () << "\n";
    std::cout << "Pole elipsy wynosi: " <<     e.policz_pole () << "\n";
    
}
