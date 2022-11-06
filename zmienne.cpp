#include <iostream>

int main () {
    // komentarz
    // int - (integer - liczby całkowite)
    std::cout << "Liczba całkowita: " << 5 << "\n";
    // double - liczby rzeczywiste (kropka dziesiętna)
    std::cout << "Liczba rzeczywiste: " << 3.14 << "\n";
    
    // działania
    std::cout << "dodawanie 2+2 : " << 2 + 2 << "\n";
    std::cout << "odejmowanie 7 - 3: " << 7 - 3 << "\n";
    std::cout << "mnożenie 2 * 2: " << 2 + 2 << "\n";
    std::cout << "dzielenie 7 / 3 (wynikiem część całkowita): " << 7 / 3 << "\n";
    std::cout << "reszta z dzielenia 7 % 3: " << 7 % 3 << "\n";
    std::cout << "dzielenie 7 / 3.0 (wynikiem będzie double => konwersja typów): " << 7 / 3.0 << "\n";
    // tworzenie zmiennych
    int calkowita = 5; // deklaracja zmiennej o nazwie 'calkowita'
    int a = 1.1;
    int b = 2.2;
    std::cout << calkowita << "\n";
    std::cout << "Dodawanie za pomocą zmiennych " << a << " + " << b << " = " << a + b << "\n";
    std::cout << "dzielenie za pomocą zmiennych " << a << " / " << b << " = " << a / b << "\n";
    calkowita = 10;
    std::cout << "calkowita = " << calkowita << "\n";
    calkowita = calkowita + 3;
    std::cout << "calkowita = " << calkowita << "\n";
    calkowita = calkowita + 4.7;
    std::cout << "calkowita = " << calkowita << "\n";
    
    double rzeczywista = calkowita + 6.6;
    std::cout << "rzeczywista = " << rzeczywista << "\n";
    
}
