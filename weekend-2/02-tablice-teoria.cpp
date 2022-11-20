// tablice dają nam możliwość stworzenia całego zbioru zmiennych
// tworzymy je jak zwykłe zmienne
// ale po nazwie stawiamy [] i mówimy jakiego rozmiaru ma być tablica
// w C++ rozmiar tablicy MUSI być stały i znany i etapie kompilacji

# include <iostream>

int main () {
    const int rozmiar = 10; // const nie pozwala na zmianę wartości zmiennej rozmiar
    int tab [10]; // stworzyliśmy 10 intów od które nazwyją się tab[0] do tab[9]
                  // w nawiasach może się znaleźć zmienna !!!
    std::cin >> tab[0] >> tab [1]; // tu wpisuje tylko 2 pierwsze pola tablicy, dlatego w 14 linii wypisuje śmietnik
    for  (int i = 0; i <10; i += 1)
    {
        std::cout << "tab[" << i << "] = " << tab[i] << "\n"; // pętla przechodząca po polach tablicy i wypisujące kolejne wartości
    }
    std::cout << "\n";
    for  (int i = 2; i <10; i=1) 
    {
     std::cin >> tab[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab[2]
    }
}
