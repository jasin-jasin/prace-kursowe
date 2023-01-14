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
    
    void wypisz () const;
    int rozmiar () const;
    void ustaw (int idx, int wartosc);
    int zwroc  (int idx) const;
    
private: 
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
    


int main () {
    int n;
    std::cin >> n;
    Tablica t{n};
    for  (int i =0; i < t.rozmiar(); i += 1) 
        t.ustaw (i, i);
    t.wypisz(); // 0 0 0 0 0 
    t.ustaw (1,123);
    std::cout << t.zwroc (1) << '\n'; // 123
    t.ustaw (3,15);
    t.wypisz(); // 0 123 0 15 0
//    t.zwolnij();
}
