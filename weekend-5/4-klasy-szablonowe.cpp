#include <iostream>

template <typename T>                   // template jest zdefioniowany tylko w obrębie klasy
class Pudelko {
public:
    Pudelko (const T& x) : val {x}  {}      // konstruktor klasy
    const T& daj () const;
    
private:
    T val;
};

template <typename T>
const T& Pudelko<T>::daj() const {
        return val;
}

void wypisz_int(const Pudelko<int>& p) {
        std::cout << p.daj() << '\n';
}

template <typename T>
void wypisz(const Pudelko<int>& p) {
        std::cout << p.daj() << '\n';
}

int main () {
    Pudelko<int> p{15};  // ja tworzymy zmienną typu szablonowego to musimy uzupełnić parametry             szablonu
    Pudelko<char> c{'a'};
    
    std::cout << p.daj() << '\n';
    std::cout << c.daj() << '\n';
    
    wypisz_int(p);
    // wypisz_int(c); Pudelko<char> to inny typ niż Pudelko<int>
}
