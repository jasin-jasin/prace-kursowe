# include <iostream>
# include "tablica.hpp"  // szuka pliku w bieżącym katalogu

void Tablica::dodaj (int x) {
    if (rozm == pojemnosc) {
    pojemnosc *= 2;
    int* tab_temp = new int [pojemnosc]; 
    for (int i = 0; i < rozm; i +=1) {
             tab_temp[i] = tab[i];
            }
    tab_temp [rozm] = x;
    usun();
    tab = tab_temp;
    }
}


Tablica::Tablica (int n) {
         /// TODO new coś tam
         pojemnosc = n;
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
    
int& Tablica::zwroc (int idx) const {
        return tab [idx];
    }
    
int Tablica::rozmiar () const {
        return rozm;
    }
    
//     void zwolnij () {  // po wywołaniu zwolnij nie możemy już korzystać z obiektu
//         delete[] tab;
//     }
    
Tablica::~Tablica () {
        usun();
}
        
void Tablica::usun () {       
        delete[] tab;
    }
    

void Tablica::skopiuj(const Tablica& t) {
    rozm = t.rozm; // ustawiamy rozmiar na taki sam jak w tablicy t
    pojemnosc = t.pojemnosc;
    tab = new int[pojemnosc];
    for (int i = 0; i < rozm; i += 1) {
        tab[i] = t.tab[i];
    }
}
    
void Tablica::operator=(const Tablica& t) {
    std::cout << "kopiujący operator przypisania\n";
    usun();
    skopiuj(t);    
}
