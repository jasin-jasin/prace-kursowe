#include <iostream>

int main () {
    const int stala = 10;
    int zmienna  = 14;
    int* wsk = &zmienna;  // wskzanik na adres
    const int* c_wsk = &zmienna; // wskaznik na const - nie pozwala na modyfikację wartości pod tym adresem
    int* const wsk_c = &zmienna; // wskaźnik jest stały, zawsze wskazuje na to samo miejsce, ale przechowywaną wartość możemy zmienić
    const int * const cwc = &zmienna; // stały wskaźnika na stałą wartość, której nie można zmodyfikować;
//    *c_wsk = 99; BŁĄÐ
    
    int x = 1234;
    
    std::cout  << *c_wsk << "\n";
    c_wsk = &x;
    std::cout << *c_wsk << "\n";
    
    std::cout << *wsk_c << "\n";
    *wsk_c = 99;
    std::cout << *wsk_c << "\n";
//    wsk_c = &x;  BŁĄÐ;
}
