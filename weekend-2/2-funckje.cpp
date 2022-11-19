// 1. Napisz funkcje, która zwróci wartość wartość bezwględna z argumentu x
// funkcja (x) == x;
// funkcja (-x) == x;
//
// 2. napisz funkcje, ktora zwróci większy spośród argumentów
// 
// funckja (5, 3) == 5;
// funkcja (3, 5) == 5;
// funkcja (5, 5) == 5);

#include <iostream>
    
int wartosc_bezwzgledna (int x) {
    if (x < 0) {
        return -x;
    }
    else
    {
        return x;
    }
}

int maks (int a, int b) {
    if (a > b) {
        return a;
    }
    else
    {
        return b;
    }
}

int main () {
    int a = 0, b= 0, x = 0;
    std::cout << "Podaj wartość x: ";
    std::cin >> x;
    std::cout << "Podaj wartość a: ";
    std::cin >> a;    
    std::cout << "Podaj wartość b: ";
    std::cin >> b;    
    std::cout << "Wartość bezględna x wynosi: " << wartosc_bezwzgledna (x) << "\n";
    std::cout << "Większa z liczb a: " << maks (a, b) << "\n";
}
