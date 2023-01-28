#include <iostream>

class Ulamek {
public:
    Ulamek (int a, int b) : licznik{a}, mianownik{b} {}
// private:  (zakomentowane z powodu linijki 13)
    int licznik;
    int mianownik;
};

void operator<<(std::ostream& os, const Ulamek& u) {
                // std::ostream nie można kopiować, dlatego przekazujemy przez referencję
    os << u.licznik << '/' << u.mianownik;
                // ponieważ licznik i mianownik są klasą prywatną, a operator nie jest metodą ułamka, to nie ma dostępu do pól prywatnych
    
}


int main () {
    Ulamek a{7,12};
//    std::cout << a;
                            // << to tak naprawdę operator przesunięcia bitowego
                            // bierzemy jedynkę w poniższym przykładzie i przesuwamy o 20 pozycji w lewo
    std::cout << 1 << 20 << '\n'; //=> to wypisze normalnie 120
    std::cout << (1 << 20) << '\n'; // => NAWIASY mają znaczenie, najpierw wykona się działanie w nawiach
    
}
