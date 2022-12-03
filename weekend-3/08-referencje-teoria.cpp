// referencje są czysto w CPP, nie mam referencji w C



#include <iostream>

struct punkt {
    int x;
    int y; 
};


void f(int& x) {
    x = -1;
}

// przekazywanie argumentów przez referencję omija potrzebę ich kopiowania
// z kolei cont refeneracja zabrania modyfikacji!

void wypisz_punkt (const punkt& p){        
    std::cout << "(" << p.x << "," << p.y << ")" << '\n';
    // p.x = 123; // to nie zadziała ponieważ mamy const refenercję, więc nie będziemy mogli zmodyfikować
    
}


int main () {

    int x = 5;
    int* const wsk = &x;   // & adres pod którym przechowujemy x;
    *wsk = 10; 
    std::cout << x << '\n';
    
    int& y = x;  // y jest refenercją, (czasami się mówi aliasem) na x;
    
//     referencję możemy przypisać tylko w momencie tworzenia i nie możemuy potem tego przestawić i od razu trzeba coś przypisać do refrencji (nie można stworzyć referencji bez przypisania
    
//    int& z; // => ten zapis będzie błędny, nie ma przypisania
  
    y = 20;
    std::cout << x << '\n';
    x = 30;
    std::cout << y << '\n';
    
    const int& k = x;  // referencja zawsze wskazuje na jakiś obiekt nie może wskazywać na nullptr ; oczytujemy od prawej - k jest stałą referencją, ale x możemy podmienić!
    std::cout << k << '\n';
    f(y);
    std::cout << y << '\n';
    
    punkt p;
    p.x = 1;
    p.y = 2;
    wypisz_punkt (p);

}
