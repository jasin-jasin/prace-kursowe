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
// zamiast linii 26-28 można napisać:
// ulamek operator* (const ulamek& b) const {
//         std::cout << operator*(int)\n";
//         ( i dalej tak samo)
//         } => przeciążanie operatorów
// a jak chcemy mnożyć ułamek przez inta:
// ulamek operator* (int x) const {
//         std::cout << "operator*(int)\n";
//         ulamek c{licznik * x, mianownik};
//         return c;} 
// => przeciążanie operatorów
        
        
    
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
    
// dodawanie ułamków
// void operator+=(const ulamek& x) const {
//     licznik = licznik * x.mianownik + x.licznik * mianownik;
//     mianownik *= x.mianownik;
// }
    
// bool operator<(const ulamek& x) const {
//     return licznik * x.mianownik < x.licznik * mianownik;
// }
/*    
    bool operator>(const ulamek& x) {
        return x < *this;   => this daje nam obiekt, na ktorym zostałą wywołana metoda
        
    }
    */
};

ulamek operator* (int a, const ulamek& b) {
    return b * a;    
}
// powyższe jeśli chcemy pomnożyć stałą razy ułamek, bo wcześniej to mielismy ułamek * ułamek oraz ułamek oraz stała.

int main() {
    ulamek a{2,0};
    ulamek b{5,6};
//    a.mianownik = 0; // to się nie skompiluje, bo mianownik należy o klasy prywatnej; sięganie do pól prywatnych spoza metod klasy powodouje błąd
//    ulamek c = a * b ; => jak mamy przeciążanie operatorów to to zadziała
//     jest to zapis równoważny do a.operator(b);
    a.wypisz_ulamek ();
//  ulamek d = a * 5;
//  d.wypisz ();    
    
    
    
}
