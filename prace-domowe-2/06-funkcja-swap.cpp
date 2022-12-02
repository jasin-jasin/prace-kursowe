// 6. Napisz funkcje swap(), ktora zamieni wartosci 2 zmiennych miejscami. Przykladowe uzycie:
// 	int a = 5, b = 10;
// 	swap(&a, &b);
// 	std::cout << a << std::endl; //powinno wypisac 10
// 	std::cout << b << std::endl; //powinno wypisac 5

#include <iostream>

void swap (int* x, int* y, int a, int b)
    {
    *x = b;
    *y = a;
    }


int main () {
    int a = 0;
    int b = 0;
    std::cout << "Podaj pierwszą liczbe: ";
    std::cin >> a;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> b;
    swap (&a, &b, a , b);
    std::cout << "Licza a wynosi: " << a << " a liczba b wynosi: " << b << "\n";
}
