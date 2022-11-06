// przyjmij liczbę i wypisz czy znajduje się ona w przedziale [10; 20) (10 należy, 20 nie)

#include <iostream>

int main () {
    int x = 0;
    int y = 0;
    std::cout << "Podaj zmienną x: ";
    std::cin >> x;
    std::cout << "Podaj zmienną y: ";
    std::cin >> y;
    
    // if (warunek) {to się wykona} 
    // else {to się wykona jeśli if nie był prawdziwy}
    
    // sprawdzenie przez zaprzeczenie
    if (x  >= 20) {
        std::cout << "Liczba jest większa albo równa 20.\n";
    }
    else if (x < 10)
        {std::cout << "Liczba jest mniejsza od 10\n";
        }
    else
        {std::cout << "Liczba jest w przedziale od [10 do 20) \n";
        }
 // podejście ze sprawdzenie obu warunków łącznie (lepsze - krótszy program)       
    if (y < 20) 
    if (y >= 10)
    
     std::cout << "Liczba jest w przedziale od [10 do 20) \n";
        
   // else
   // {
   // std::cout << "Liczba jest poza przedziałem \n";
   //

    // podejście trzecie - za pomocą funkcji logicznych
    
       if (x  < 20 && x >=10) {
        std::cout << "Liczba jest w przedziale od [10 do 20).\n";
    }
    else 
        {std::cout << "Liczba jest poza przedziałem. \n";
        } 
    
    
}
