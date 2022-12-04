#include <iostream>

// Do sekcji publicznej mają dostęp wszyscy
// Do sekcji pwywatnej mają dostęp TYLKO metody z danej metody


struct ulamek {
private:  
    // wszystko poniżej tego znacznika znajduje się w sekcji prywatnej albo do znacznika, który twierdzi inaczej 
    int licznik;
    int mianownik;

public: // wszystko poniżej tego znacznik znajduje się w sekcji publicznej
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
    // getter
    int getMianownik () const {
        return mianownik;
    }
        
    // setter
    int setMianownik (int x) {
        if (x==0)
            x=1;
        return mianownik;
    }
    
    
};

int main() {
    ulamek a{2,0};
//    a.mianownik = 0; // to się nie skompiluje, bo mianownik należy o klasy prywatnej; sięganie do pól prywatnych spoza metod klasy powodouje błąd
    a.wypisz_ulamek ();
}
