// napisz funckję która przyjmie tablicę i jej rozmiar
// i zwróci największy element z tablicy intów

# include <iostream>

// funkcja przyjmuje adres, gdzie zaczyna się tablica, oraz ile elementów zawiera tablica

int wypisz_najwiekszy (int* tab, int n) 
    {
    int max = 0;
    for (int i = 0; i < n; i += 1) // przechodzimy po tablicy która ma n elementów
        {
            if (tab[i] > max) 
                {
                max = tab[i];
                }
        }    
    return max;
    }

int main () {
    const int rozmiar = 5;
    int tab [rozmiar]; 
    for  (int i = 0; i < rozmiar; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę: " << "\n";
        std::cin >> tab[i];   // robimy pętle, i przyjmujemy kolejne liczby do tablicy począwszy od tab[0]
    }
    std::cout << "Nawiększy element w tabilcy to: " << wypisz_najwiekszy (tab, rozmiar) << "\n"; // tab - to jest przekazanie adresu tablicy
}
