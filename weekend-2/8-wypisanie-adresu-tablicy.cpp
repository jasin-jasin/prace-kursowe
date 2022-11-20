#include <iostream>

void wypisz_tablice (int* tab, int n) // funkcja przyjmuje adres, gdzie zaczyna się tablica, oraz ile elementów zawiera tablica
    {
    std::cout << "[" ;
    for (int i = 0; i < n; i += 1) // przechodzimy po tablicy która ma n elementów
        {
            if (i > 0) 
                {std::cout << ",";}
        std::cout << tab[i]; 
        }
    std::cout << "]" ;    
    }


int main () {
        int tab [5] = {10,20,30,40,50};
        std::cout  << tab << "\n";    // wypisze adres tablice czyli de facto pierwszego elementu
        std::cout << &tab[0] << "\n"; // adres pierwszego elementy tablicy
        std::cout << &tab[1] << "\n"; // adres drugiego elementu tablicy, czyli o rozmiar inta, czyli tu 4 bajty
        std::cout << tab +1 << "\n"; // wypisze adres 2-ego elementu, patrz wiersz 5-ty
        
        // de facto tba[i] jest ty samym co *(tab+1)
        std::cout << &tab[2] << "\n";
        std::cout << *(tab + 2) << "\n";
        
        wypisz_tablice (tab, 5);
        std::cout << "\n";
}
