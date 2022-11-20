// przekazywanie argumentów
// w C/C++ argumenty domyślnie przekazywane są przez kopie
// to oznacza że każy argument do funkcji jest kopiowany na jej potrzeby

#include <iostream>

void f (int a)  // ta funkcja nic nie zwraca (void)
    {  
    a = 20;
    }

// do funckji gd przekazywana jest kopia adresu jakiegoś inta (w tym wypadku b)
// adres pozwala nam na modyfikacje wartośći przechowywanej pod wskazanym adresem

void g (int* b) // argumentem tej funkcji jest adres, pod ktorym przechowywane b
    {
    *b = 30;
    }
    
void daj_wpspolrzedne (double* x,  double* y) // funckja przyjmuje 2 wskaźniki
    { 
    *x = 44.475; // do wartości znajddującej się pod adresem x wpisujemy 44 coś tam
    *y = 13.175;
    }
    
int main () {
    int x = 10;  // do x podstawiamy 10
    f (x); // x jest kopiowane do arumentu funkcji
    std::cout << x << "\n";
    
    g (&x); // wykonaj funkcje z argumentem adres gdzie przechowane x
    std::cout << x << "\n";    
    
    double a = 0.0;
    double b = 0.0;
    daj_wpspolrzedne (&a, &b);
    std::cout << a << " " << b << "\n";
    
}
