// KLASY teoria

#include <iostream>

// jedyną różnicą pomiędzy struktorą a klasą jest taka, że w klasie domyślnie wszystkie prywatne
// w struktorach wszystkie pola są domyślnie publiczne

class mojaklasa {
    int a;
};

struct mojastruktura {
    int a;
};

int main () {
    mojaklasa k;
//    std::cin >> k.a;   // to się nie wykona, bo jest prywatne
    mojastruktura s;
    std::cin >> s.a;
}
