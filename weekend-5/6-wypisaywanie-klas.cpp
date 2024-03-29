#include <iostream>
#include <fstream>

class Ulamek {
public:
    Ulamek (int a, int b) : licznik{a}, mianownik{b} {}
    friend std::ostream& operator<<(std::ostream& os, const Ulamek& u); // oznaczenie "przyjaciela" - funkcja w drodze wyjątku może mieć dostęp do pól prywatnych
private:    // (zakomentowane z powodu linijki 13) - ale jeśli funkcję zrobimy "zaprzyjaźnioną" to możemy odkomentować
    int licznik;
    int mianownik;
};

std::ostream& operator<<(std::ostream& os, const Ulamek& u) {
                // std::ostream nie można kopiować, dlatego przekazujemy przez referencję
    os << u.licznik << '/' << u.mianownik;
                // ponieważ licznik i mianownik są klasą prywatną, a operator nie jest metodą ułamka, to nie ma dostępu do pól prywatnych
    return os;
}


int main () {
    Ulamek a{7,12};
//    std::cout << a;
                            // << to tak naprawdę operator przesunięcia bitowego
                            // bierzemy jedynkę w poniższym przykładzie i przesuwamy o 20 pozycji w lewo
    std::cout << 1 << 20 << '\n'; //=> to wypisze normalnie 120
    std::cout << (1 << 20) << '\n'; // => NAWIASY mają znaczenie, najpierw wykona się działanie w nawiach
    std::cout << a << '\n'; // tu będzie błąd jeśli funkcja zwraca void więc lewa część będzie wyglądała void << '\n' (a to jest char)
                            // ale jeśli funkcja zwraca referencję na ostream, to już będzie ok.
    std::ofstream plik{"wyjscie.txt"}; // output file stream; ten obiket w momencie tworzenia stworzy plik.txt i będzie mógł do niego zapisywać.
    plik << "Ala ma kota\n" << "ulamek a = " << a << '\n';
    
}
