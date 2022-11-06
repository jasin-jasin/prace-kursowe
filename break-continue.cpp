

#include <iostream>

int main () {
    int i = 0;
//    std::cout << "Podaj ile wydrukować #: ";
//    std::cin >> n;
    
    while (i < 10)
    {
    i += 1;
    if (i == 2)
        continue; // kończymy obecny obrót i wracamy do sprawdzenia warunku (dla while')
    std::cout << i << "\n";
    if (i == 7)
    break;  // break przerywa działanie pętli w której się znajduje
    }
    std::cout << "------" << "\n";
    for (int k = 10; k < 20; k +=1) {
        if (k == 13 ) {
            continue; // w pętli for przerywa działanie i idzie do inkrementacji (3 pozycja), wykonuje i dopiero sprawdza warunek (2 pozycja) 
        }
        std::cout << k << "\n";
    }
}
