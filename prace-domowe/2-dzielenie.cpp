// Przyjmij 2 liczby N i K, a następnie wypisz, czy N jest podzielne przez K. Pamiętaj, że nie chcemy dzielić przez 0! ;)
// jasin: dorozumianie zakładam, że działamy na liczbach całkowitych

#include <iostream>

int main () {
    int N = 0;
    int K = 0;
    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> N;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> K;
    if (K == 0)
        {
        std::cout << "Nie dzielimy przez 0! \n";
        }
    else if (N % K == 0)
        {
        std::cout << "Liczba N dzieli się przez K \n";
        }
        else {
            std::cout << "Liczba N nie dzieli się przez K \n";
        }
    }
