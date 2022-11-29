// 3. Napisz funkcję srednia(), która przyjmie jako argumenty tablicę liczb całkowitych i jej rozmiar, po czym zwróci średnią arytmetyczną elementów w tej tablicy


// rozwiązanie koszerne - z funkcją

#include <iostream>

double srednia (int* tab, int n) 
    {
    double srednia = 0;
    double suma = 0;
    for (int i = 0; i < n; i += 1) // przechodzimy po tablicy która ma n elementów
        {
           suma += tab[i];
        }    
    srednia = suma / n;
    return srednia;
    }

int main () {
    const int rozmiar = 5;
    int tab [rozmiar]; 
    for  (int i = 0; i < rozmiar; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę: " << "\n";
        std::cin >> tab[i];   // robimy pętle, i przyjmujemy kolejne liczby do tablicy począwszy od tab[0]
    }
    std::cout << "Średnia elementów w tabilcy to: " << srednia (tab, rozmiar) << "\n"; // tab - to jest przekazanie adresu tablicy
}  
  






// == rozwiązanie chu.e - bez funkcji ===
// 
// #include <iostream>
// 
// int main () {
//     const int rozmiar = 10;
//     int tab [rozmiar]; 
//     double suma = 0;
//     double srednia = 0;
//     for  (int i = 0; i < rozmiar; i += 1) 
//     {
//         std::cout << "Podaj " << i+ 1 << " liczbę: " << "\n";
//         std::cin >> tab[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab[0]
// 	suma += tab[i];
// 	std::cout << "Suma: " << suma << "\n"; 
//     }
//     srednia = suma / rozmiar;
//     std::cout << "Średnia z elementów tablicy wynosi: " << srednia << "\n"; 
// }
//  
