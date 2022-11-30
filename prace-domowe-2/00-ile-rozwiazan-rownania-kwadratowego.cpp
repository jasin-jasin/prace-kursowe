// 1. Napisz funkcje
// 	int rownanie_kwadratowe(double a, double b, double c, double* rozw1, double* rozw2)
// ktora zwroci informacje ile rozwiazan ma rownanie postaci
// 	0 = a * x^2 + b * x + c
// Jesli rozwiazan jest 1 lub 2 to powinny one zostac zapisane pod adresami rozw1 i rozw2 (analogicznie do przerabianej na zajeciach funkcji rownanie_liniowe).
// Do policzenia pierwiastka sluzy funkcja std::sqrt() dostepna w naglowku <cmath>.
// https://www.math.edu.pl/rownania-kwadratowe

#include <iostream>
#include <cmath>

int rownanie_liniowe (double a,  double b, double c, double* rozw1, double* rozw2)
    { double wyroznik = 0.0;
    if (a == 0)   			// jeśli a jest 0 to nie jest równanie kwadratowe, tylko liniowe.
        return -2;
    else {   // równanie kwadratowe zupełne
        wyroznik = (b * b) - (4 * a * c);  // jeśli a różne 0, to liczymy wyróżnik równania kwadaratowego
        if (wyroznik < 0)
        return -1;
        if (wyroznik == 0) {
        *rozw1 = (-1 * b) / (2 * a);
        return 1;
        }
        else {
        *rozw1 = ((-1 * b) - sqrt(wyroznik))/ (2 * a); // dereferencja, pod adres rozw1 wpisujemy pierwsze rozwiązanie rówania kwadratowego
        *rozw2 = ((-1 * b) + sqrt(wyroznik))/ (2 * a); // dereferencja, pod adres rozw2 wpisujemy drugie rozwiązanie rówania kwadratowego
        return 2;
            }
        }
}


int main () {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double rozw1 = 0.0;
    double rozw2 = 0.0;
    int ile = 0;
    std::cout << "Program sprawdza liczbę rozwiązań równania 0 = a * x^2 + b * x + c i jeśli istnieją to podaje te rozwiązania \n";
    std::cout << "Podaj liczbę a: ";
    std::cin >> a;
    std::cout << "Podaj liczbę b: ";
    std::cin >> b;
    std::cout << "Podaj liczbę c: ";
    std::cin >> c;
    ile = rownanie_liniowe (a, b, c, &rozw1, &rozw2); // przekazujemy adresy obu rozwiązań
    if (ile == -2)
     {
     std::cout << "To nie jest równanie kwadratowe tylko liniowe \n" ;
    }
    if (ile == -1)
    {
     std::cout << "Równanie kwadratowe nie rozwiązań / ma nieskończenie wiele rozwiązań \n" ;
    }
    if (ile == 1)
    {
    std::cout << "Równanie kwadratowe ma jedno rozwiązanie i wynosi ono: " << rozw1 << "\n";
    }
    if (ile == 2)
    std::cout << "Liczba rozwiązań równania kwadratowego wynosi: " << ile << " i są one następujące " << rozw1 << " oraz " << rozw2 << "\n"; // wyciaganie rozwiazanie, ktore funkcja wpisała pod wskzany adres
}
