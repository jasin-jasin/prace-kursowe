// napisac strukturę, ktora jest lista wskaznika
// struktura zawiera element i wskaźnik na kolejny element na liście

#include <iostream>

struct element {
    int wartosc;
    element* nastepny; //wskazujemy na adres nastepnego elementu
    
};


// wstawienie nowego elementu na początek listy
// funkcja zwraca adres nowego elementu
element* wstaw (element* lista, int nowa_wartosc) {
    element* tmp = new element; // tworzymy nowy element, tmp jest ADRESEM elementus
    (*tmp).wartosc = nowa_wartosc; // wyłuskanie ze struktury, deferencja powoduje, że wyciągamy CAŁĄ strukturę, a ze struktury chcemy pole wartość
    tmp->nastepny = lista;
    return tmp;
}


void wypisz (element* lista) {
    element* tmp = lista;
    while (tmp != nullptr) {
     std::cout << tmp->wartosc << " ";
     tmp = tmp->nastepny;
    }
    std::cout << '\n';
}


int main () {
    element* lista = nullptr;        // wskaźnik pokazujący na null pointer, lista jest pusta
    lista = wstaw (lista, 5);
    lista = wstaw (lista, 3);
    lista = wstaw (lista, 6);
    for (int i =0; i < 1000000; i +=1){
        lista = wstaw(lista, i);
    }             // zrobiliśmy listę, ktora może przyjąć dowolną duż aliczbę elementów
    
    wypisz(lista);
                                    // za pomocą operatora new tworzymy nowe obiekty
}
