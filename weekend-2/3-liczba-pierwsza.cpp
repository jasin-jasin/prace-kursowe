// napisz funkcję czy_pierwsza (), która sprawdzi czy podany argument jest liczbą pierwszą
// liczba pierwsza dzieli się przez siebie samą i przez 1

#include <iostream>
    
bool czy_pierwsza (int x) {
    bool wynik = true;
    if (x == 1) return false;
    for (int n = 2; n <= x /2; n += 1) { // alternatywny zapis (;; i +=1) oznacza że zwiększaj licznik i o 1; i+=2 - zwiększaj o 2; i +=-1 zmniejszaj o 1)
        if (x % n == 0)
        {wynik = false;
            return wynik;}
    }
    return wynik;
}

int main () {
    int x = 0;
    std::cout << "Podaj liczbę: ";
    std::cin >> x;
    if (czy_pierwsza (x) == true)
    {
    std::cout << "Liczba " <<  x << " jest liczbą pierwszą: ";
    }
    else 
    {
    std::cout << "Liczba " <<  x << " nie jest liczbą pierwszą: ";        
    }
    std::cout << "\n";
}
