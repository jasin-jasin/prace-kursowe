// 4. Przyjmij liczby A i B, a następnie wpisz liczby podzielne przez 3 lub przez 5 z przedziału [A; B).
// A [ należy], B ) nie należy


#include <iostream>

int main () {
    int A = 0;
    int B = 0;
    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> A;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> B;
    while (A < B)
    { if (A % 3 == 0 || A % 5 == 0)
        {
         std::cout << "Liczba " << A << " jest podzielna przez 3 lub 5 \n";
        }
    A = A+1;
    }
}
