// Napisz funkcję, która przyjmie 2 inty i zwróci większego z nich

#include <iostream>


int wieksza (int a, int b) {
    if (a > b) {
        return a;
    }
    else
    {
        return b;
    }
}

double wieksza (double a, double b) {
    if (a > b) {
        return a;
    }
    else
    {
        return b;
    }
}

// 1. jeśli w funkcji mamy dokładnie takie same argumenty jak zostały przekazane, to zostanie ta wersja funcji uruchomiona
// 2. jeśli taki wariant nie istnieje, to dopuszczamy max. 1 konwersję typu per argument i patrzymy czy jakiś wariant nie zacznie pasować. Jeżeli pasuje DOKŁADNIE jeden to zostanie on uruchomiony, a w przeciwnym przypadku dostaniemy błąd.


int main () {
    int a = 0, b= 0;
    std::cout << "Podaj wartość a: ";
    std::cin >> a;    
    std::cout << "Podaj wartość b: ";
    std::cin >> b;    
    std::cout << "Większa z liczb: " << wieksza (a, b) << "\n";
}
