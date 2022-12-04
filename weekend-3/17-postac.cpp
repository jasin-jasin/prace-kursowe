//Zadanie dodatkowe:
// Dodaj do Postaci atrybut `sila` (przekazywany w konstruktorze) i napisz program przeprowadzający walkę na śmierć i życie pomiędzy 2 Postaciami. Postać zadaje tyle obrażeń ile wynosi jej siła

#include <iostream>
#include <string>

class postac {

public:
    postac (const std::string& nazwa, int HP) {
        imie = nazwa;
        zdrowie = HP;
        max_zdrowie = HP;
        
/* żeby nie robić dwóch zmiennych to można zastosować obejście - 
 wewnątrz każdej metody dostępny jest wskaźnik 'this'
 zawierający adres obiektu, na którym została wywołana metoda
 więc można napisać: this->imie = imie oraz this=>zdrowie = zdrowie;
    */  
}
    
    // np. Andrzej, zdrowie: 120/120
    void wypisz() const {
        std::cout <<  "Aktualny stan zdrowia: " << imie << " to: " << zdrowie << "/" << max_zdrowie << '\n';
    }
    
    // zmniejsza zdrowie postaci o zadane n. Zdrowie nie powinno spaść poniżej 0
    void otrzymaj_obrazenia (int n) {
        if ((zdrowie - n)< 0)
            zdrowie = 0;
        else zdrowie = zdrowie -n;

    }
    
    // postać żyje, jeśli ma >0 zdrowia
    bool czy_zyje () const {
        if (zdrowie > 0) 
            return 1;
        else return 0;
        
    }
    
    // przywraca postaci n punktów zdrowia. Zdrowie nie powinno przekraczać wartość maksymalnej. Leczenie martwej postaci nie powinno mieć efektu.
    void wylecz (int n) {
        if (czy_zyje() == 1) 
            { zdrowie = zdrowie + n;
                if (zdrowie > max_zdrowie) 
                    zdrowie = max_zdrowie;
            }
        else std::cout << "" << '\n'; 
    }
 
private:
    std::string imie;
    int zdrowie = 0;
    int max_zdrowie = 0;
 
};

int main () {
    postac ziomek {"Ziomuś", 110};
    ziomek.wypisz(); // wypisuje aktualny stan zdrowia 110/110
    ziomek.otrzymaj_obrazenia(15); // zmniejsza stan zdrowia o 15
    ziomek.wypisz(); // aktualny stan 95/110
    ziomek.wylecz(30);
    ziomek.wypisz();
    ziomek.otrzymaj_obrazenia (100);
    ziomek.wypisz(); // aktualny stan 0/110
}
