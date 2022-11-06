// oblicz sumę z podanych przez użytkownika liczb
// przyjmuj liczby odpóki użytkownik nie poda 0


#include <iostream>

int main () {
    int x = 0; // liczba podawana przez użytkownika
    int suma = 0; // suma liczb podawanych przez użytkownika
    
    for (int i = 0; ;i +=1) {
        std::cout << "Podaj liczbę: ";
        std::cin >> x;
        if (x == 0)
            break;
    suma = suma +x; 
    }
    std::cout << "Suma liczb podanych przez użytkownika wynosi: " << suma << "\n";   
}
