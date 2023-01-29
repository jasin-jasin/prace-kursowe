/*
set nie przechowuwaje wartosci
set czyli zbior
możemy wrzucać dowolnie wiele elementów
*/

#include <iostream>
#include <set>

int main () {
    std::set<int> zbior
    zbior.insert (10);  // zbiór zawiera tylko unikalne elementy
    zbior.insert (10);  // nic się nie dzieje, bo już mamy 10 w zbiorze
    zbior.insert (20);  // dodaje 20 do zbioru
    std::cout << "Rozmiar zbioru; " << zbior.size() << '\n' ; 
    for (int x : zbior) {
        std::cout << x << '\n';
        
    }
    int k;
    std::cin >> k;
    auto it = zbior.find(k);
    if (it != zbior.end() {
        std::cout << "Znaleziono element" << *it << "\n";  // jak iterujemy to dostajemy elemety w rosnącej kolejności
    }
    else {
        std::cout << "Brak elementu \n";
    }
    
}
