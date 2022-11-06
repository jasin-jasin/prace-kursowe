// przyjmij trzy liczby i wypisz największą z nich

// przyjmij liczbę i wypisz czy znajduje się ona w przedziale [10; 20) (10 należy, 20 nie)

#include <iostream>

int main () {
    int x = 0;
    int y = 0;
    int z = 0;
    std::cout << "Podaj zmienną x: ";
    std::cin >> x;
    std::cout << "Podaj zmienną y: ";
    std::cin >> y;
    std::cout << "Podaj zmienną z: ";
    std::cin >> z;
    
    
    // if (warunek) {to się wykona} 
    // else {to się wykona jeśli if nie był prawdziwy}
    
    // sprawdzenie przez zaprzeczenie
    if (x  >= y && x >= z)     
    {
        std::cout << "Liczba x jest największa albo liczby, ktore są największe są równe sobie. \n";
    }
    else if (y >= z)
        {std::cout << "Liczba y jest największa albo liczby y i z są sobie równe \n";
        }
        else
        {
            std::cout << "Liczba z jest największa\n";
        }
}
