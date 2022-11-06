#include <iostream>

int main () {
    int a = 0; // zmienna przechowująca godziny
    int b = 0; // zmiennna przechowująca minuty
    int c = 0; // deklaracja zmiany minut
    std::cout << "Podaj która jest teraz godzina: ";
    std::cin >> a;
    std::cout << "Podaj która jest teraz minuta: ";
    std::cin >> b;
    std::cout << "Za ile minut chcesz wiedzieć jaki będzie czas: ";
    std::cin >> c;
    int suma_minut = b + c;
    int nowe_minuty = suma_minut % 60;
    int nowe_godziny = a + suma_minut / 60;
    nowe_godziny = nowe_godziny % 24;
    std::cout << "Obecnie mamy godzinę " << a << " : " << b << "\n";
    std::cout << "Za " << c << " minut będzie godzina " << nowe_godziny << " : " << nowe_minuty << "\n";
}
