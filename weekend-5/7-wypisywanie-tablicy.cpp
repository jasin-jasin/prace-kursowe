// program do wypisywanie tablic nie za pomocą funkcji wypisz

#include <iostream>
#include <string>
#include <fstream>

template <typename T>
class Tablica {
public: 
    Tablica ();
    Tablica (const Tablica& t); // konstruktor kopiujący, przyjmuje przez referencję, a nie przez wskaźnik
    ~Tablica ();
    
    void operator=(const Tablica& t); // kopiujący operator przypisania, - zmienia istniejący obiekt na podstawie
    
    void dodaj (T x);
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
        usun();
        tab = tab_temp;
    }
    tab[rozm++] = x;
}

template <typename T>
Tablica<T>::Tablica () {
         /// TODO new coś tam
//          pojemnosc = n;
//          tab = new T [n];
//          rozm = n;
         pojemnosc = 1;
         tab = new T [1];
         rozm = 0;
         /*for (int i = 0; i < 5; i +=1) {
             tab [i] = 0;
         }*/ 
         std::cout << '\n';
     }
     
template <typename T>
Tablica<T>::Tablica (const Tablica& t) {
        rozm = t.rozm; // ustawiamy rozmiar na taki sami jak w tablicy t
        tab = new T [rozm];
        for (int i = 0; i < rozm; i +=1 ) {
            tab[i] = t.tab[i];
        }
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

template <typename T>
std::ostream& operator<<(std::ostream& os, const Tablica<T> tab) {
    os << '[';
    for (int i = 0; i < tab.rozmiar(); i +=1) {
        if (i > 0 )
            std::cout << ",";
        os << tab [i];
    }
    os << ']';
    return os;    
}

template <typename T>
T& Tablica<T>::operator[](int idx) {
    return tab[idx];
}


template <typename T>
const T& Tablica<T>::operator[](int idx) const {
    return tab[idx];
}



    
int main () {
    Tablica<int> t{};
    std::cout << '\n';
    Tablica<double> tdouble{};
    tdouble.dodaj(3.5);
    std::cout << tdouble << '\n';
    Tablica<std::string> stringi;
    stringi.dodaj ("Ala");
    stringi.dodaj ("ma");   
    stringi.dodaj ("kota");
    std::cout << stringi << '\n';
    
    Tablica<Tablica<double>> tab{};  // Tablica tablic z doubli
    tab.dodaj (tdouble);
    tab.dodaj (tdouble);
    tab.dodaj (tdouble);
    tab.dodaj (tdouble);
    std::cout << tab << '\n';
}
