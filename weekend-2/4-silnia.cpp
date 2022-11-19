// napisz funkcję, która policzy silnię z n
// n! = 1 *2 *3*..*n

/*
podejście rekurencyjne:
0! = 1
n! = n * (n-1)!
*/


#include <iostream>
    
int silnia (int x) {
    int wynik = 1;
    for (int n = 1; n <= x; n += 1){
    wynik   *= n;
    }
    return wynik;
}

/*
if (n == 0)
    return 1;
    return n * silnia (x -1);*/


int main () {
    int x = 0;
    std::cout << "Podaj liczbę: ";
    std::cin >> x;
    std::cout << "Silnia " << x << " wynosi " << silnia (x) << "\n";
}
