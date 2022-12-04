#include <iostream>

struct ulamek {
    int licznik;
    int mianownik;      
    void wypisz_ulamek () const {
    std::cout << "(" << licznik << "/" << mianownik << ")" << '\n';
    }
    ulamek (int a, int b) 
    {
    licznik = a;
    mianownik = b;
    if (mianownik == 0)
        mianownik = 1;
    }
    ulamek ulamek_mnoz(const ulamek& b) const { 
        ulamek c {licznik * b.licznik, mianownik * b.mianownik};
        return c;
    }
};

int main() {
       ulamek a{2,0};
       ulamek b{3,5};
    a.wypisz_ulamek ();
    b.wypisz_ulamek ();
//    ulamek_mnoz(a,b).wypisz_ulamek ();
        ulamek c = a.ulamek_mnoz (b);
        c.wypisz_ulamek();
}
