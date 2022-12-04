// metody to funkcje umieszczone wewnątrze jakiejś struktury albo klasy

#include <iostream>

struct punkt {
    int x;
    int y; 
    
    void metoda (){
         std::cout << "Metoda to funkcja wewnątrz struktury \n";
         std::cout << "Metoda ma zawsze dostęp do obiektu, na która została wywołana \n";
         std::cout << "x = " << x << '\n'; // ten x odnosi się do pola x w punckie, na którym wywołaliśmy metodę
         wypisz (); // wywołanie metody wewnątrz metody jest zawsze na tym samym obiekcie
    }
    
    void wypisz () {
         std::cout << x  << " , " << y << '\n';
        
    }
    
};

int main () {
    punkt p;
    p.x = 10;
    p.y = 20;
    p.metoda();
}
