// 2. Napisz program, który przyjmie 10 liczb całkowitych i wypisze z nich najpierw parzyste, a potem nieparzyste.


#include <iostream>

int main () {
    const int rozmiar = 10;
    int tab [rozmiar]; 
    for  (int i = 0; i < rozmiar; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę: " << "\n";
        std::cin >> tab[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab[0]
    }
    for  (int i = 0; i <= rozmiar-1; i += 1)
      {
	if (tab [i] % 2 == 0)
	{
	  std::cout << "tab[" << i << "] = " << tab[i] << " jest liczbą parzystą " << "\n"; // pętla przechodząca po polach tablicy i wypisujące kolejne wartości, ale już w odwrotnej kolejności
	}
	else
	{
	  std::cout << "tab[" << i << "] = " << tab[i] << " jest liczbą nieparzystą " << "\n"; 
	}
      }
    std::cout << "\n";
}