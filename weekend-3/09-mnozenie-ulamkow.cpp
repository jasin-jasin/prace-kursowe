// Stworz strukturę Ulamek (licznik i mianownik) oraz napisz funkcje:
//     - void wypisz(const Ulamek& u)
//     - Ulamek stworz(int a, int b) - tworzy Ulamek o liczniku a i mianowniku b
//     - Ulamek mnoz(const Ulamek& a, const Ulamek& b) - zwraca wynik możenia Ulamkow a i b
#include <iostream>

struct ulamek {
    int licznik;
    int mianownik;      
    void wypisz_ulamek () const {     // to staje się metodą
    // const po nawiasach oznacza, że ta metoda nie modyfikuje obiketu, na którym jest wywoływana
    // na const obiektach można wywoływać tylko const metody
    std::cout << "(" << licznik << "/" << mianownik << ")" << '\n';
    }
    void inicjalizuj (int a, int b) 
    {
    licznik = a;
    mianownik = b;
    }
    ulamek ulamek_mnoz(const ulamek& b) const {  
        // metoda ma dostęp do obiektu, na który m jest wywoływana, więc może przyjąc tylko jeden argument (przy dwóch ułamkach, przy trzech - musiała by przyjąc dwa argumenty
        ulamek c;
        c.inicjalizuj (licznik * b.licznik, mianownik * b.mianownik);
        return c;
    }
};

// void wypisz_ulamek (const ulamek& u) {
//     std::cout << "(" << u.licznik << "/" << u.mianownik << ")" << '\n';
// }

// ulamek ulamek_stworz(int a, int b) {
//     ulamek u;
//     u.licznik = a;
//     u.mianownik = b;
//     return u;
// }

// ulamek ulamek_mnoz(const ulamek& a, const ulamek& b) {
//         ulamek c = ulamek_stworz (a.licznik * b.licznik, a.mianownik * b.mianownik);
//         return c;
// }

int main() {
       ulamek a;
       a.inicjalizuj(1,2);
       ulamek b;
       b.inicjalizuj(3,4);
//     ulamek a = ulamek_stworz (1, 2);
//     ulamek b = ulamek_stworz (3, 4);
//     wypisz_ulamek (a);                // podejście standardowe
//     wypisz_ulamek (b);
//     wypisz_ulamek (ulamek_mnoz(a,b));
    a.wypisz_ulamek ();
    b.wypisz_ulamek ();
//    ulamek_mnoz(a,b).wypisz_ulamek ();
        ulamek c = a.ulamek_mnoz (b);
        c.wypisz_ulamek();
}
