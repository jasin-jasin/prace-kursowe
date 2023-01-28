// przerób klasę Tablica na klasę szablonową parametryzowoną typem przechowywanych wartośći
// Tablica<int> tab {3};
// tab.dodaj (13);
// Tablica<double> tab2 {2};
// tab2.dodaj (2.56);



#include <iostream>
#include <string>

template <typename T>
class Tablica {
public: 
    Tablica (int n);
    Tablica (const Tablica& t); // konstruktor kopiujący, przyjmuje przez referencję, a nie przez wskaźnik
    ~Tablica ();
    
    void operator=(const Tablica& t); // kopiujący operator przypisania, - zmienia istniejący obiekt na podstawie
    
    void dodaj (T x);
    void wypisz () const;
    int rozmiar () const;
    T& operator[] (int idx);
    const T& operator[] (int idx) const;
    
    void ustaw (int idx, int wartosc);  // ???
    int& zwroc  (int idx) const;        // ???
    
private: 
    
    void skopiuj(const Tablica& t); //
    void usun(); /// metoda prywatna
    T* tab;
    int rozm;
    int pojemnosc;
};

template <typename T>
void Tablica<T>::dodaj (T x) {
    if (rozm == pojemnosc) {
    pojemnosc *= 2;
    T* tab_temp = new T [pojemnosc]; 
    for (int i = 0; i < rozm; i +=1) {
             tab_temp[i] = tab[i];
            }
    tab_temp [rozm++] = x;
    usun();
    tab = tab_temp;
    }
}

template <typename T>
Tablica<T>::Tablica (int n) {
         /// TODO new coś tam
//          pojemnosc = n;
//          tab = new T [n];
//          rozm = n;
         pojemnosc = 1;
         tab = new T [n];
         rozm = 0;
         /*for (int i = 0; i < 5; i +=1) {
             tab [i] = 0;
         }*/ 
         std::cout << '\n';
     }
     
template <typename T>
Tablica<T>::Tablica (const Tablica& t) {
        rozm = t.rozm; // ustawiamy rozmiar na taki sami jak w tablicy t
        tab = new int [rozm];
        for (int i = 0; i < rozm; i +=1 ) {
            tab[i] = t.tab[i];
        }
    }
     
template <typename T>
void  Tablica<T>::wypisz () const {                 /// constami oznaczamy metody które nic nie modyfikują
        // TODO 
      for (int i = 0; i < rozm; i +=1) {
            std::cout << tab [i] << ",";
        } 
        std::cout << '\n';
    }
    
template <typename T>
void Tablica<T>::ustaw (int idx, int k) {
            tab [idx] = k;
        
    }
    
template <typename T>
int& Tablica<T>::zwroc (int idx) const {
        return tab [idx];
    }
    
template <typename T>
int Tablica<T>::rozmiar () const {
        return rozm;
    }
    
//     void zwolnij () {  // po wywołaniu zwolnij nie możemy już korzystać z obiektu
//         delete[] tab;
//     }
    
template <typename T>
Tablica<T>::~Tablica () {
        usun();
}
        
template <typename T>
void Tablica<T>::usun () {       
        delete[] tab;
    }
    
template <typename T>
void Tablica<T>::skopiuj(const Tablica& t) {
    rozm = t.rozm; // ustawiamy rozmiar na taki sam jak w tablicy t
    pojemnosc = t.pojemnosc;
    tab = new T[pojemnosc];
    for (int i = 0; i < rozm; i += 1) {
        tab[i] = t.tab[i];
    }
}

template <typename T>
void Tablica<T>::operator=(const Tablica& t) {
    std::cout << "kopiujący operator przypisania\n";
    usun();
    skopiuj(t);    
}
    
int main () {
    Tablica<int> t{5};
    t.wypisz();
    std::cout << '\n';
    Tablica<double> tdouble{5};
    tdouble.wypisz();
    tdouble.dodaj(3.5);
    std::cout << '\n';
    tdouble.wypisz();
    Tablica<char> tchar{'a'};
    tchar.wypisz();
    Tablica<std::string> stringi;
    stringi.dodaj ("Ala");
    stringi.dodaj ("ma");   
    stringi.dodaj ("kota");
    stringi.wypisz ();
}
