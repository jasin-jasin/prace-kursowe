// przyjmij liczbę N i wypisz na ekran trójkąt o wysokości N, złożony ze znaków #
// wersja kwadrat
//
// trojkat łatwy
// #
// ##
// ###
// ####
//
// trojkat choika (trudny)


#include <iostream>

int main () {
    int n = 0;
    int licznik_dopoki = 1;
    int licznik_petli = 1;
    std::cout << "Podaj ile wydrukować #: ";
    std::cin >> n;
    
    for (licznik_petli; licznik_petli <= n; licznik_petli += 1) // w liczniku pętli zewnętrzenej przechowujemy numer wiersza, którym się znajdujemy
    {
        licznik_dopoki = 1;
        for (licznik_dopoki; licznik_dopoki <= licznik_petli; licznik_dopoki +=1) // ponieważ w liczniku petli przechowujemy wiersz, w którym się znajdujemy, to ten for wykona się tyle razy; dlatego w 2 rzędzie mamy 2 #
        {
            std::cout << "#";
        }   
        std::cout << "\n";
    }
}
