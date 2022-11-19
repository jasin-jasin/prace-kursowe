// napisz funkcję, która policzy silnię z n
// n! = 1 *2 *3*..*n

#include <iostream>
    
int silnia (int x) {
    int wynik = 1;
    for (int n = 1; n <= x; n += 1){
    wynik   *= n;
    }
    return wynik;
}

int main () {
    int x = 0;
    std::cout << "Podaj liczbę: ";
    std::cin >> x;
    std::cout << "Silnia " << x << " wynosi " << silnia (x) << "\n";
}
