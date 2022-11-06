// latami przestępnymi są te, ktorych numeracja jest podzielna przez 4 i niepodzielna przez 100 lub jest podzielna przez 400

#include <iostream>

int main () {
    int x = 0;
    std::cout << "Podaj rok: ";
    std::cin >> x;

    // podejście trzecie - za pomocą funkcji logicznych
    
       if (x  % 4 == 0 && x % 100 != 0 || x % 400 == 0) {
        std::cout << "Rok jest przestępny.\n";
    }
    else 
        {std::cout << "Rok nie jest przestępny. \n";
        } 
    
    
}
