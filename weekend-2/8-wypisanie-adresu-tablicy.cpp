#include <iostream>

int main () {
        int tab [5] = {10,20,30,40,50};
        std::cout  << tab << "\n";    // wypisze adres tablice czyli de facto pierwszego elementu
        std::cout << &tab[0] << "\n"; // adres pierwszego elementy tablicy
}
