// 7. Przyjmij liczbę N, a następnie wypisz na ekran kwadrat złożony z // zer i jedynek ułożonych tak, jak czarne i białe pola na szachownicy.
// Dla N = 4 wynikiem powinno być:
//
// 0101
// 1010
// 0101
// 1010
//
//

#include <iostream>

int main () {
    int n = 0;
    int licznik_wierszy = 1;
    int licznik_wewn_1 = 1;
    int licznik_wewn_2 = 1;
    std::cout << "Podaj o jakim boku zrobić kwadrat: ";
    std::cin >> n;

    while (licznik_wierszy <=n)
    {
        if (licznik_wierszy % 2 !=0)
        {
            while (licznik_wewn_1 <= n)  // rysuje wiersze nieparzyste
            {
            if (licznik_wewn_1 % 2 == 0)
            {
            std::cout << "1";
            }
        else
            {
            std::cout << "0";
            }
        licznik_wewn_1 = licznik_wewn_1 + 1;    // licznik += 1;
            }
        licznik_wewn_1 = 1;
        std::cout << "\n";
        licznik_wierszy = licznik_wierszy+1;
        }
        else {

            while (licznik_wewn_2 <= n)  // rysuje wiersze parszyste
            {
                if (licznik_wewn_2 % 2 != 0)
                {
                std::cout << "1";
                }
                else
                {
                std::cout << "0";
                }
        licznik_wewn_2 = licznik_wewn_2 + 1;    // licznik += 1;
            }
        licznik_wewn_2 = 1;
        std::cout << "\n";
        licznik_wierszy = licznik_wierszy+1;
        }
    }
}
