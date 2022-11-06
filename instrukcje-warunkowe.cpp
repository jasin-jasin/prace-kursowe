#include <iostream>

int main () {
    bool prawda = true;
    bool falsz = false;
    // std::cout << (5<7) << "\n";
    
    // operatory logiczne /porównania jest ich 6: <, >, ==, !=, <=, >=
    int a = 0;
    // int b = 0; predefiniowana na zapas
    
    // std::cout << a << " < " << b << " = " <<  (a < b) << "\n";
    // std::cout << a << " <= " << b << " = " <<  (a <= b) << "\n";
    // std::cout << a << " > " << b << " = " <<  (a > b) << "\n";
    // std::cout << a << " >= " << b << " = " <<  (a >= b) << "\n";
    // std::cout << a << " == " << b << " = " <<  (a == b) << "\n";
    // std::cout << a << " != " << b << " = " <<  (a != b) << "\n";
    
    std::cout << "Podaj zmienną a: ";
    std::cin >> a;
    // std::cout << "Podaj zmienną b: ";
    // std::cin >> b;
    
    
    // if (warunek) {to się wykona} 
    // else {to się wykona jeśli if nie był prawdziwy}
    
    if (a  == 0) {
        std::cout << "Liczba jest równa 0\n";
    }
    else if ( a > 0)
        {std::cout << "Liczba jest większa od 0\n";
        }
    else
        {std::cout << "Liczba jest mniejsza od 0\n";
        }
}
