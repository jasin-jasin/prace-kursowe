// ten plik zawiera tylko nagłówek
#ifndef TABLICA_HPP_INCLUDED
#define TABLICA_HPP_INCLUDED

class Tablica {

public: 
    Tablica (int n);
    Tablica (const Tablica& t); // konstruktor kopiujący, przyjmuje przez referencję, a nie przez wskaźnik
    ~Tablica ();
    
    void operator=(const Tablica& t); // kopiujący operator przypisania, - zmienia istniejący obiekt na podstawie
    
    void dodaj (int x);
    void wypisz () const;
    int rozmiar () const;
    void ustaw (int idx, int wartosc);
    int& zwroc  (int idx) const;
    
private: 
    
    void skopiuj(const Tablica& t); //
    void usun(); /// metoda prywatna
    int* tab;
    int rozm;
    int pojemnosc;
};

#endif
