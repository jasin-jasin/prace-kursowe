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

// wersja prostsza if (x<0) return x;
//                      return -x;
// wersja z jednym returnem
// if (x<0) 
// x = -x;
// return x;
//
// wersja z operatorem trój argementowym:
// ? - operator trojargumentowy
// warunek ? wartosc_jesli_prawda : warunek_jesli_falszreturn x < 0 ? -x : x; (jeśli x // <0 to zwróć minus x, jeśli x > 0 to zwróć x)

int maks (int a, int b) {
    if (a > b) {
        return a;
    }
    else
    {
        return b;
    }
}

// prościej: if (a>b) return a;
//              return b;
//
// return a > b ? a : b;


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
