// ile pamięci zajmują struktury ???

#include <iostream>

struct A {
    int a;
};

struct B {
    int a;
    int b;
};

struct C {     // struktura z różnych 2 typów zmiennych
    int a;
    bool b;
};

struct D {     // struktura z różnych 3 typów zmiennych
    int a;
    double c;
    bool b;  // kolejność elemetów w strukturze może mieć wpływ na jej rozmiar.
};

struct E {     // struktura z różnych 3 typów zmiennych
    int a;
    bool c;
    double b;  // kolejność elemetów w strukturze może mieć wpływ na jej rozmiar.
};

struct F {     // struktura z różnych 3 typów zmiennych
    C a;       // zmienna a jest strukturą C, w której jest double (8)
    int b;
};

struct G {
    G* b; // zmienna typu wskaźnikowego, wskaźnik na niekompletny typ, bo rozmiar typu wskaźnikowego jest zawsze taki sam - gryby było samo G - to wtedy to nie zadziała
    int a;
    
};


int main () {
        std::cout << sizeof(int) << '\n'; // 4 - tyle przydzielono na inta
        std::cout << sizeof (A) << '\n'; // 4 - sam struct z jednego int nie zajmie więcej pamięci
        std::cout << sizeof (B) << '\n'; // 8 - struct z dwóch intów zajmie 8
        std::cout << sizeof (bool) << '\n'; // 1 - tyle zajmuje bool w pamięci
        std::cout << sizeof (double) << '\n'; // 8 - zmienna typu double tyle zajmi w pamięci
        std::cout << sizeof (C) << '\n'; // 8 a nie 5, bo struktra alokuje wielokrotność pamięci potrzebnej do największego elementu struktury
        std::cout << sizeof (D) << '\n'; // 24  - bo double jest na drugim miejscu, więc bool na 3-cim też zajmie 8  (int 4, double 8, bool 8)
        std::cout << sizeof (E) << '\n'; // 16 (KOLEJNOŚĆ MA ZNACZENIE: int 4, bool 4, double 8)_
        std::cout << sizeof (F) << '\n'; // 16 (KOLEJNOŚĆ MA ZNACZENIE: struktra c zajmie 8, więc int też musi 8 (najmniejsza wielokrotność) )_
        std::cout << sizeof (G) << '\n';
    
    
}
