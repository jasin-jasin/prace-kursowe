#include <iostream>
#include <vector>
#include <array>

int main () {
    std::vector<int> tab;
    tab.push_back(10);
    tab.push_back(20);
    tab.push_back(30);
    for (int i = 0; i<tab.size(); i +=1) {
        std::cout << tab [i] << ' ';
    }
    std::cout << '\n';
    
    std::array<double, 7> arr;
    arr.fill(3.141516);
    arr[3] = 2.71;
    
    // range based for wykonuje się po razie dla każdego elementu z zadanego kontenera (tablic, wektorów etc.)
    for (double x : arr) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    
    for (auto it = tab.begin(); it != tab.end(); it++) {
        std::cout << *it << ",";
    }
    
    
}


/*
1. zmodyfikuj własną klasę Tablica<T> tak, aby dało się ją wykorzystać w range-based for
Tablica<int> tab;
tab.dodaj (1);
tab.dodaj (2);
for (int x : tab) {
    std::cout << x;
}
Zacząć od metof:
begin() - zwraca iterator (wskaźnik) na pierwszy element tablicy
end()- zwraca iterator (wskaźnik) na element za ostatnim elementem tablicy


2. Napisz klasę szablonową SprytnyWskaznik<T>, która będzie przechowywać wskaźnik na wartość typu T,
będzie posiadać operatort pozwalające na korzystanie z niej jak ze wskaźnika (*, ->) i będzie zwalniąć zarezerwowaną pamięć w swoim destruktorze

ALE tylko jeśli jest ostatnim wskaźnikiem pokazującym na ten obiekt.

oprócz wskaźnika na obiekt klasa powinna również przechowywać wskaźnik do licznika odniesień do tego obiektu 

*/
