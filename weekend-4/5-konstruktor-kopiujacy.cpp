// napisz klasę Tablica, ktora będzie przechowywać N intów
// Stworzenie obiektu tej klasy powinno ustawiać wszystkie przechowywane elementy na 0
// Klasa powinna posiadać metody pozwalające na:
// - pobranie n-tego elementu
// - ustawienie n-tego elementu
// - wypisanie całej tablicy

# include <iostream>

class Tablica {

public: 
    Tablica (int n);
    Tablica (const Tablica& t); // konstruktor kopiujący, przyjmuje przez referencję, a nie przez wskaźnik
    ~Tablica ();
    
    void operator=(const Tablica& t); // kopiujący operator przypisania, - zmienia istniejący obiekt na podstawie
    
    void wypisz () const;
    int rozmiar () const;
    void ustaw (int idx, int wartosc);
    int zwroc  (int idx) const;
    
private: 
    
    void skopiuj(const Tablica& t); //
    void usun(); /// metoda prywatna
    int* tab;
    int rozm;
};

Tablica::Tablica (int n) {
         /// TODO new coś tam
         tab = new int [n];
         rozm = n;
         for (int i = 0; i < 5; i +=1) {
             tab [i] = 0;
         } 
         std::cout << '\n';
     }

Tablica::Tablica (const Tablica& t) {
        rozm = t.rozm; // ustawiamy rozmiar na taki sami jak w tablicy t
        tab = new int [rozm];
        for (int i = 0; i < rozm; i +=1 ) {
            tab[i] = t.tab[i];
        }
    }
     
     
void  Tablica::wypisz () const {                 /// constami oznaczamy metody które nic nie modyfikują
        // TODO 
      for (int i = 0; i < rozm; i +=1) {
            std::cout << tab [i] << ",";
        } 
        std::cout << '\n';
    }
    
void Tablica::ustaw (int idx, int k) {
            tab [idx] = k;
        
    }
    
int Tablica::zwroc (int idx) const {
        return tab [idx];
    }
    
int Tablica::rozmiar () const {
        return rozm;
    }
    
//     void zwolnij () {  // po wywołaniu zwolnij nie możemy już korzystać z obiektu
//         delete[] tab;
//     }
    
Tablica::~Tablica () {
        delete[] tab;
}
        
void Tablica::usun () {       
        delete[] tab;
    }
    
void Tablica::operator=(const Tablica& t) {
    std::cout << "kopiujący operator przypisania\n";
    delete [] tab;
    rozm = t.rozm; // ustawiamy rozmiar na taki sami jak w tablicy t
    tab = new int [rozm];
        for (int i = 0; i < rozm; i +=1 ) {
            tab[i] = t.tab[i];
        }
    
}
    


int main () {
    Tablica t{5};
    t.ustaw (0,10);
    Tablica q{t};
    q.ustaw (2,20);
    t.wypisz ();
    q.wypisz ();
    Tablica w = q; /// to jest to samo co Tablica w{q}
    w.ustaw (3,30);
    w.wypisz ();
    t = w; // tu odbywa się przypisanie a nie jest wywołany konsktruktor kopiiujący
    t.wypisz ();
}
