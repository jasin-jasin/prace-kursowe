// Stworz strukturę Ulamek (licznik i mianownik) oraz napisz funkcje:
//     - void wypisz(const Ulamek& u)
//     - Ulamek stworz(int a, int b) - tworzy Ulamek o liczniku a i mianowniku b
//     - Ulamek mnoz(const Ulamek& a, const Ulamek& b) - zwraca wynik możenia Ulamkow a i b
#include <iostream>

struct ulamek {
    int licznik;
    int mianownik;
    void wypisz_ulamek () // to staje się metodą
    {
    std::cout << "(" << licznik << "/" << mianownik << ")" << '\n';
    }
};

// void wypisz_ulamek (const ulamek& u) {
//     std::cout << "(" << u.licznik << "/" << u.mianownik << ")" << '\n';
// }

ulamek ulamek_stworz(int a, int b) {
    ulamek u;
    u.licznik = a;
    u.mianownik = b;
    return u;
}

ulamek ulamek_mnoz(const ulamek& a, const ulamek& b) {
        ulamek c = ulamek_stworz (a.licznik * b.licznik, a.mianownik * b.mianownik);
        return c;
}

int main() {
    ulamek a = ulamek_stworz (1, 2);
    ulamek b = ulamek_stworz (3, 4);
//     wypisz_ulamek (a);                // podejście standardowe
//     wypisz_ulamek (b);
//     wypisz_ulamek (ulamek_mnoz(a,b));
    a.wypisz_ulamek ();
    b.wypisz_ulamek ();
    ulamek_mnoz(a,b).wypisz_ulamek ();
    
}
