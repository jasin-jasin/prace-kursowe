// wskaźniki
// zmienna lądyuje w pamięci
// możemy zadać pytanie: w którym miejscu
// do przechowywania adresów służy typ zmiennej zwanej wskaźnikiem

#include <iostream>

int main () {
    int kot = 6;
    std::cout << "kot = " << kot << "\n";
    std::cout << "adres zmiennej kot w pamięci = " << &kot << "\n";
    int* adres_kota = &kot; // * wskzuje że w zmienna adres przechowuje adres gdzie zmienna kot typu int jest przechowywana; innymi słowy: int wskazuje na to, że wskazuje to na zmienna kot na adres której wskazujemy jest typu int
    // gwiazdka musi się znajdować o lewej strony zmiennej jeśli tak chcemy, zatem int * a to jest to samo co int *a
    // ale lepiej gwiazdkę stawiać przy typie zmienniej, a nie przy zmiennej.
    
    std::cout << "adres: " << adres_kota << "\n";
    
// dereferencja wskaźnka => dobranie się do wartość po zadanym adresem.
// dereferencja adresu, do którego nie mamy adresu jest błędem    
    
    std::cout << "*adres kota = " << *adres_kota << "\n";
    *adres_kota = 17;
    std::cout << "kot " << kot << "\n";
// czyli w tej chwili wskazując na adres_kota, gdzie jest przechowywana zmienna kot, podtsawiamy 17, czyli innymi słowy podstawiamy o kota 17.
    
// nullptr - wskaźnik w "nic" (w C mamy NULL) 
// deferenecja nullptr jest błędem
    int* nic = nullptr;
    *nic = 13;  // deferenecja null pointera, próba dostępu do adresu pamięci który do nas nie należy, w szczególności nullptr nie należy do nikogo
    
/*    int x = 135000;
    adres_kota +=x; // => tutaj przuesuwamy wskaźnik wskazujący na komórkę pamięci o wartość x
    std::cout << "*adres kota = " << *adres_kota << "\n"; // to wywali błąd - bo nie mamy dostępu do tak dalekiego bloku pamięci
 */   

    std::cout << &adres_kota << "/n"; // wskaźnik na adres_kota; ale adres_kota już jest wskaźnikiem
    int** x = &adres_kota;  // tutaj wskazujemy na adres pamięci, gdzie jest przechowywany adres pamięci, gdzie jest przechowywana zmienna adres_kota
    
    return 0;
}
