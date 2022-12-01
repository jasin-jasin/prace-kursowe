// 4. Napisz funkcję ile wiekszych(), która przyjmie jako argumenty tablicę liczb całkowitych, jej rozmiar i liczbę n,
// po czym zwróci informację ile elementów w tablicy jest większych od n.

#include <iostream>

int ile_wiekszych (int* tab, int rozmiar, int n) 
    { int licznik = 0;
     for (int i = 0; i < rozmiar; i += 1) // przechodzimy po tablicy która ma n elementów
        {  if (tab[i] > n)
	  {
            licznik += 1;
	  }
         }    
    return licznik;
}

int main () {
    const int rozmiar = 5;
    int tab [rozmiar]; 
    int n = 0;
    for  (int i = 0; i < rozmiar; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę do tablicy: " << "\n";
        std::cin >> tab[i];   // robimy pętle, i przyjmujemy kolejne liczby do tablicy począwszy od tab[0]
    }
    std::cout << "Podaj liczbę, którą chcesz sprawdzić: " << "\n";
    std::cin >> n;
    std::cout << "Liczba elementów w tablicy większych niż: " << n << " to: " << ile_wiekszych (tab, rozmiar, n) << "\n"; // tab - to jest przekazanie adresu tablicy
}  
  
