// napisz program który przyjmie od użytkowanika 10 liczb
// i wypisze je w odwrotnej kolejności

# include <iostream>

int main () {
    int tab [10]; 
    for  (int i = 9; i >=0; i -= 1) 
    {
        std::cout << "Podaj " << i << " liczbę: " << "\n";
        std::cin >> tab[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab[9]
    }
    for  (int i = 0; i <10; i += 1)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n"; // pętla przechodząca po polach tablicy i wypisujące kolejne wartości, ale już w normalnej kolejności
    }
    std::cout << "\n";
}
