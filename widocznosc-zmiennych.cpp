#include <iostream>

// zmienna istnieje dopóki nie skończy si blok (klamerki), w którym została zadeklarowana
// zmienna globalna jest zawsze inicjalizowana na 0

int main () {
    int x = 13; 
        std::cout << "X wynosi: " << x << "\n"; 
        {
        int y = 7;
        int x = 15;
          std::cout << "Y wynosi: " << y << "\n";
          std::cout << "X wynosi: " << x << "\n";
        }
    
    std::cout << "X wynosi: " << x << "\n"; // tutaj wypisze X zadeklarowanego globalnie; X =15 konczy życie wewnątrz {}; to się nazywa przesłanianie zmiennych
        
//    std::cout << "Y wynosi: " << y << "\n";         to nie zadziała, bo tu już Y nie istnieje
    }
