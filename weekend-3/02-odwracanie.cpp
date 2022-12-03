// przyjmij wartość N, zaalokuj pamięć na N wartości double
// a nastę przyjmij N wartości i wypisz je w odwrotniej kolejności
// zadbaj o brak wycieku pamięci

#include <iostream>

int main () {
    int N = 0;
    std::cout << "Podaj ile liczb chcesz podać: " << "\n";
    std::cin >> N;
    
    double* tab = new double [N]; 
    
    for  (int i = 0; i < N; i += 1) {
        std::cout << "Podaj " << i+ 1 << " liczbę: " << "\n";
        std::cin >> tab[i]; 
    }
    for  (int i = N - 1; i >= 0; i -= 1) {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n";
    }
    
    std::cout << "\n";
    delete[] tab;
}
