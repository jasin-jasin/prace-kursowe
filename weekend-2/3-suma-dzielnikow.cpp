// napisz funkcję suma dzielnikow, która policzy sumę dzielników podanego argumentu mniejszych od niego samego
// np. suma_dzielnikow (8) = 7 (1 + 2 +4 );
// 
// 

#include <iostream>
    
int suma_dzielnikow (int x) {
    int suma = 0;
    for (int n = 1; n < x; n = n+1) {
        if (x % n == 0)
        suma = n + suma;
    }
    return suma;
}



int main () {
    int x = 0;
    std::cout << "Podaj jakiej liczby chcesz sprawdzić sumę dzielników: ";
    std::cin >> x;
    std::cout << "Suma dzielników wynosi: " << suma_dzielnikow (x) << "\n";
}
