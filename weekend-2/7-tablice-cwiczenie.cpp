// napisz program który przyjmie od użytkowanika 10 liczb
// i wypisze je w odwrotnej kolejności

# include <iostream>

int main () {
    const int rozmiar = 10;
    int tab [rozmiar]; 
    for  (int i = 0; i < rozmiar; i += 1) 
    {
        std::cout << "Podaj " << i+1 << " liczbę: " << "\n";
        std::cin >> tab[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab[0]
    }
    for  (int i = rozmiar - 1; i >= 0; i -= 1)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n"; // pętla przechodząca po polach tablicy i wypisujące kolejne wartości, ale już w odwrotnej kolejności
    }
    std::cout << "\n";
}
