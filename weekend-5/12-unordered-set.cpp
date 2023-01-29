#include <iostream>
#include <unordered_set>

int main () {
    std::unordered_set<int> zbior 
    for (int i = 0; i < 100; i+=1) {
        int x = i * 10;
        zbior.insert (x);
        for (int k : zbior)
            std::cout << k << ' ';
        std::cout << '\n';
    }
}

/*

Dostaje tablicę liczb roaz jakąś liczbę N
Chcemy odpowiedzieć na pytanie czy jakieś 2 liczby w tej tablicy sumują się do N
1. Sprawdzenie wszystkich par - 0(n^2)

Inne postawienie tego pytania:
czy dla pewnego X tablica zawiera liczbę (N-X)?

2. Sortujemy (O(nlogn)) i sprawdzamy obecność (N-X) dla każdego X w czasie Ologn (binsearch)

3. Tworzymy unordered_set (ZBIOR) i dla każdego X sprawdzimy czy ZBIOR zawiera (N-X) .
Jeśli tak - to mamy parę
Jeśli nie to dodajemy X do ZBIORu i przechodzimy do następnej liczby

*/
