// Napisz własną klasę wyjątków dziedziczącą po std::exception
// Wyjątek powinien zostać rzucony w moment próby stworzenia
// obiektu Ulamek z mianownikiem równym 0
// Zadbaj o odpowiedni komunikat w metodzie what ()

#include <exception>
#include <iostream>

class Ulamek {
public:
    Ulamek (int a, int b);
private:
    int licznik;
    int mianownik;
};

// class std::exception {
// public:
//     virtual int kod_wyjatku () const = 0; 
// };

class Wyjatek : public std::exception {
public:
    const char* what() const noexcept override {
    return "Tworzysz ułamek w którego mianowniku jest 0\n";
    }
};

Ulamek::Ulamek (int a, int b) {
    if (b == 0) {
        throw Wyjatek{};
    licznik = a;
    mianownik = b;
    }
}


int main () {
    int a;
    int b;
    std::cout << "Podaj licznik: " << '\n';
    std::cin >> a;
    std::cout << "Podaj mianownik: " << '\n';
    std::cin >> b;
    try {
    Ulamek u{a,b};
    }
    catch (Wyjatek w) {   
            std::cout << "Blad: " << w.what () << '\n';
    }
}
