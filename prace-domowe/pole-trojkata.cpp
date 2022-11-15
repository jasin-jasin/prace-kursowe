// Przyjmij 2 liczby całkowite, oznaczające długości przyprostokątnych trójkąta prostokątnego, a następnie wypisz jego pole. Wersja trudniejsza: nie używaj zmiennych zmiennoprzecinkowych (tzn. float, double, long double).


#include <iostream>

int main () {
    double x = 0;
    double y = 0;
    double wynik = 0;
    std::cout << "Podaj długość pierwszej przyprostokątnej: ";
    std::cin >> x;
    std::cout << "Podaj długość drugiej przyprostokątnej: ";
    std::cin >> y;
//    std::cout << "Podaj zmienną z: ";
//    std::cin >> z;
    wynik = (x*y)/2;
    std::cout << "Pole trójkąta wynosi: " << wynik << "\n";

}
