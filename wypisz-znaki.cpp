// przyjmij liczbę N i wypisz wiesz złożony z N znaków #


#include <iostream>

int main () {
    int n = 0;
    int licznik = 1;
    std::cout << "Podaj ile wydrukować #: ";
    std::cin >> n;
    
    while (licznik <= n)
    {std::cout << "#";
    licznik = licznik + 1;    
    }
    std::cout << "\n";
}
