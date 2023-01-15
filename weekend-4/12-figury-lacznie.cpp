// Przepisz klasę Prostokąt tak, aby dziedziczyła po klasie kwadrat

# include <iostream>

class Figura {
    virtual double policz_pole () const = 0; // metoda czysto wirtualna, celowo chcemy żeby nie posiadała implementacji...
                                             // klasa, która posiada co najmniej jedną metodę pure virtual jest klasą abstrakcyjną
                                             // obiektów typu abstrakcyjnego nie można tworzyć
};

class Kwadrat : public Figura {

public:
    Kwadrat (double x); // wartosc domyslna jako obejscie problemu ze prostokat probuje wywolac konsktruktor bezargumentowy
    double policz_pole () const override;
    double wypisz_bok () const;
    void nowy_bok (double x);
    
private:
    double bok;
};


class Prostokat : public Kwadrat {

public:
    Prostokat (double x, double y);
    double policz_pole () const override;
    double wypisz_bok_b () const;
    void nowy_bok_b (double x);
    
private: 
    double bok_b;
};  

class Kolo : public Figura {

public:
    Kolo (double x); // wartosc domyslna jako obejscie problemu ze prostokat probuje wywolac konsktruktor bezargumentowy
    double policz_pole () const override;
    
protected:
    double promien;
};


class Elipsa : public Kolo {

public:
    Elipsa (double x, double y);
    double policz_pole () const override;
    
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

Kwadrat::Kwadrat (double x) 
{
    nowy_bok(x);
}

Prostokat::Prostokat (double x, double y) 
: Kwadrat{x}  // lista inicjalizacyjna - Prostokat jeden bok przyjmuje z Kwadaru i drgui tworzy
{
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
        return wypisz_bok()*bok_b;                      // korzystamy z metody wypisz_bok bo bok jest w klasie prywatnej
    }


double Prostokat::wypisz_bok_b () const {
        return bok_b;
    }
    
void Prostokat::nowy_bok_b (double x) {
    bok_b = x;
    }
    
double Kolo::policz_pole () const {                 /// constami oznaczamy metody które nic nie modyfikują
        return promien * promien * 3.14;
    }
    
double Elipsa::policz_pole () const {                 /// constami oznaczamy metody które nic nie modyfikują
        return promien * promien_2 * 3.14;                      // korzystamy z metody wypisz_bok bo bok jest w klasie prywatnej
    }
    
    
int main () {
    Kwadrat k{5};
    Prostokat p{3,7};
    Kolo o{10};
    Elipsa e{2,5};
    std::cout << "Pole tego prostokąta wynosi: " <<     p.policz_pole () << "\n";
}
