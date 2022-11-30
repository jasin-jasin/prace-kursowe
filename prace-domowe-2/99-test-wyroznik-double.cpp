#include <iostream>
#include <cmath>

int main () {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double wyroznik = 0.0;
    double rozwiazanie = 0.0;
    int ile = 0;
    std::cout << "Program sprawdza wyróżnik równania 0 = a * x^2 + b * x + c i jeśli istnieją to podaje te rozwiązania \n";
    std::cout << "Podaj liczbę a: ";
    std::cin >> a;
    std::cout << "Podaj liczbę b: ";
    std::cin >> b;
    std::cout << "Podaj liczbę c: ";
    std::cin >> c;
    wyroznik = (b * b) - (4 * a * c);
    std::cout << "wyróżnik wynosi: " << wyroznik << "\n";
    rozwiazanie = ((-1 * b) - sqrt(wyroznik))/ (2 * a);
    std::cout << "Przykładowe rozwiązanie wynosi: " << rozwiazanie << "\n";
}
