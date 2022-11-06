// przyjmij liczbę N  a następnie przyjmij N liczb i wypisz największą z nich

#include <iostream>

int main () {
    int N = 0;
    int licznik = 1;
    int max = 0;
    int x = 0;
    std::cout << "Podaj ile liczb chcesz podać: ";
    std::cin >> N;
    for (; licznik <= N; licznik += 1 )
    {std::cout << "Podaj " << licznik << " liczbę: " << "\n";
    std::cin >> x;
    if (x > max)
        max = x;
    }
    std::cout << "Największa liczba z podanych to: " << max << " \n";
}
