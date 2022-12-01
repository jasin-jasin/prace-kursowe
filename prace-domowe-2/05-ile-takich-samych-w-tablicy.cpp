// 5. Napisz funkcje ile_wspolnych(), ktora przyjmie 2 tablice liczb calkowitych (wraz z niezbednymi do ich przetworzenia informacjami), 
// po czym zwroci informacje ile elementow z pierwszej tablicy wystepuje w drugiej.

#include <iostream>

int ile_wspolnych (int* tab1, int* tab2, int rozmiar) 
    { int licznik = 0;
     for (int i = 0; i < rozmiar; i += 1) // przechodzimy po tablicy która ma n elementów
        {
	  for (int j = 0; j < rozmiar; j+=1) 
	  {
	    if (tab1[i] == tab2[j])
	      {
	      licznik += 1;
	      }
	  }  
	}    
    return licznik;
}

int main () {
    const int rozmiar1 = 5;
    const int rozmiar2 = 5;
    int tab1 [rozmiar1]; 
    int tab2 [rozmiar2];

    for  (int i = 0; i < rozmiar1; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę do tablicy pierwszej: " << "\n";
        std::cin >> tab1[i];  						 // robimy pętle, i przyjmujemy kolejne liczby do tablicy począwszy od tab[0]
        std::cout << "Podaj " << i+ 1 << " liczbę do tablicy drugiej: " << "\n";
        std::cin >> tab2[i];  					
    }
    std::cout << "Liczba elementów pierwszej tablicy występująca w drugiej tablicy: " << ile_wspolnych (tab1, tab2, rozmiar1) << "\n"; // tab - to jest przekazanie adresu tablicy
}  
  