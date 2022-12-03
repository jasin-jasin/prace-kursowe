// zmienne znakowe
// char to tak naprawdę mały intg (1 bajt), więc możemy na nim wykonywać takie same dzialania jak na zwykłych intach

#include <iostream>

bool czy_mala_litera (char c) {
 return c >= 'a' && c <= 'z' ;
    
}

int main () {
    char znak = 'a';
    std::cout << znak << '\n';
    char c = 65;        // nie znak zakodowany pod 65 w tablicy ASCII
    std::cout << c << '\n';
    std::cout << "Wielkość: " << sizeof(char) << '\n';
    
    std::cout << "napis\n";
    
    char tab1[6] = {'a', 'b', 'c', 'd', 'e'};  // 5 elementów, bo 6 jest 0 kończące napis
    std::cout << tab1 << '\n';
    
    char tab2[6] = {'a', 'b', 'c', 'd', 'e', 'f'}; // a to z kolei jest unbehavied beahviour bo nie wiemy gdzie jest 0 kończące napis, więc wypisze nam śmietnik
    std::cout << tab2 << '\n';
    
    char tab3[] = "abcde"; // jeżeli inchalizujemy tablicę jakimiś wartościami, to możemy pominąć jej rozmiar w deklaracji []
    
 //   tab1[3]= G; ???
 //   std::cout << tab1 << '\n';
}
