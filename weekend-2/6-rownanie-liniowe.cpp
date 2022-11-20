// funkcja ma zwrócić ile jest rozwiązań równania liniowa
// jeśli jest rozwiązanie ,to wpisujemy je pod zadany adres
// 0 = ax + b (dla nieskończenie wielu albo braku zwróć -1 
// W przypadku braku rozwiązań zwróć 0
// W pozostałych przypadkach zwróć 1
// jeśli istnieje dokładnie 1 rozwiązanie to wpisz je pod adres rozwiazanie

#include <iostream>
    
int rownanie_liniowe (double a,  double b, double* rozwiazanie)
    { 
    if (a == 0.0 && b == 0.0)
        return -1;
    if (a == 0.0 && b != 0.0)
        return 0;
    else {
        *rozwiazanie = -b/a; // dereferencja, pod adres rozwiazanie wpisujemy -b/a
        return 1;
    }
}

// alternatywny zapis warunku: 
// if (a != 0.0) {return 1} (bo wtedy 1 rozwiązanie)
// else if  (b !=0.0) {return 0} (bo wtedy wiemy  że a jest 0)
// else  return -1)

    
int main () {
    double a = 0.0;
    double b = 0.0;
    double rozwiazanie = 0.0;
    int ile = 0;
    std::cout << "Podaj liczbę a: ";
    std::cin >> a;
    std::cout << "Podaj liczbę b: ";
    std::cin >> b;   
    ile = rownanie_liniowe (a, b, &rozwiazanie); // przekazujemy adres rozwiazanie
    if (ile == -1)
    {
     std::cout << "Równanie liniowe ma nieskończenie wiele rozwiązań" ;
    }
    if (ile == 0)
    {
    std::cout << "Równanie liniowe nie ma rozwiązań" ;
    }
    if (ile == 1)
    std::cout << "Liczba równania liniowego 0 = ax +b wynosi: " << ile << " i wynosi ono " << rozwiazanie << "\n"; // wyciaganie rozwiazanie, ktore funkcja wpisała pod wskzany adres
}
