// 3. Napisz funkcję srednia(), która przyjmie jako argumenty tablicę liczb całkowitych i jej rozmiar, po czym zwróci średnią arytmetyczną elementów w tej tablicy

#include <iostream>

// double srednia (cos tam, cos tam) {
//    double srednia = 0;
//    return srednia;
//    }
// }


int main () {
    const int rozmiar = 10;
    int tab [rozmiar]; 
    double suma = 0;
    double srednia = 0;
    for  (int i = 0; i < rozmiar; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę: " << "\n";
        std::cin >> tab[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab[0]
	suma += tab[i];
	std::cout << "Suma: " << suma << "\n"; 
    }
    srednia = suma / rozmiar;
    std::cout << "Średnia z elementów tablicy wynosi: " << srednia << "\n"; 
}
 
