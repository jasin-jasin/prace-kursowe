#include <iostream>

struct kot {
    std::string imie;
    // konstruktor - pierwsza metoda, która zostanie wywołana na obiekcie zaraz po jego stworzeniu
    // nie zapisujemy zwracanego typu
    // nazywa się tak samo jak struktura !!!
    kot () {                // to jest konstruktor bezargumentowy
        std::cout << "Tworzę kota \n";
    }
    
    // obecność jakiegokolwiek konstruktora powoduje, że kompilator nie wygeneruje domyślnego konstruktora bezargumentowego
    kot (const std::string& a) {
        std::cout << "Tworze Kota o imieniu  " << a << "\n";
        imie = a;
    }
    
    void miaucz () const {
        if (!imie.empty())
            std::cout << imie << " : " ;
        std::cout << "Miaauu !! \n";
    }    
};

int main () {
    kot mruczek;       
    /// najpierw wywołany jest konstruktor dlatego będzie najpierw napis "Tworzę kota" a potem "Miaauu"
    // domyślnie jak tworzymy zmienną jest wywoływana za pomocą konstruktora bezargumentowego
    // jeśli wykasujemy konstruktor bezargumentowy to mruczek nie zostanie stworzony (bo nie podaliśmy imienia
    mruczek.miaucz ();
    kot puszek {"Puszek"};   // a to jest konstruktor argumentowy
    puszek.miaucz();
    kot{"Okruszek"}.miaucz();
    
}
