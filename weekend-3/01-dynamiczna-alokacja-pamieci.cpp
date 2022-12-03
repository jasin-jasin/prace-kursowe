// teoria
// możemy wysłać zapytanie do systemy, że chcę przechować coś pamięcui,


#include <iostream>

int main () {
    int* p = new int;  // operator new zwraca nam adres przydzielonej pamięci
                        // DYNAMICZNA ALOKACJA PRZYDZIELA PAMIĘC NA STERCIE A NIE NA STOSIE
    std::cout << p << '\n';
    std::cout << (new int) << '\n';  
    // wypisze nam adres komórki pamięci przydzielonej pod nowego inta
    delete p;       
    // opeartor delete - zwalniamy pamięć pod adresem p, ale wskaźnik zostaje
    // żeby nie mieć wycieków pamięci, to każde new powinno iśc w parze z delete
    
    // jest sposób, żeby sprawdzić, czy nasz program nie zawiera wycieków pamięci
    p = new int;
    std::cout << p << '\n';
    // pakiet valgrind pod konsolą 
}
