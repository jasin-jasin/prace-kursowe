// Przyjmij 2 liczby całkowite, oznaczające długości przyprostokątnych trójkąta prostokątnego, a następnie wypisz jego pole. Wersja trudniejsza: nie używaj zmiennych zmiennoprzecinkowych (tzn. float, double, long double).


#include <iostream>

int main () {
    int x = 0;
    int y = 0;
    int wynik = 0;
    std::cout << "Podaj długość pierwszej przyprostokątnej: ";
    std::cin >> x;
    std::cout << "Podaj długość drugiej przyprostokątnej: ";
    std::cin >> y;
//    std::cout << "Podaj zmienną z: ";
//    std::cin >> z;
    wynik = (x*y)/2;
    if (x % 2 != 0 && y % 2 != 0)
        {
        std::cout << "Pole trójkąta wynosi: " << wynik <<".5" << "\n";
        }
        else {
            std::cout << "Pole trójkąta wynosi: " << wynik << "\n";
        }
    }
