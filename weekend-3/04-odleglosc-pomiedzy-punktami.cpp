// funkcja przyjmująca 2 punkty i zwracająca odległość pomiędzy nimi

#include <iostream>
#include <cmath>

struct punkt {
    int x;
    int y; 
}; 

double wypisz_odleglosc (punkt a, punkt b){
    
     double odleglosc = sqrt(((a.x - b.x)*(a.x - b.x)) + ((a.y - b.y)*(a.y - b.y))) ;
    return odleglosc;
}


int main () {
    
    punkt a;
    punkt b;
    
    std::cout << "Podaj współrzędną x punktu a: " << "\n";
    std::cin >> a.x;
    
    std::cout << "Podaj współrzędną y punktu a: " << "\n";
    std::cin >> a.y;
    
    std::cout << "Podaj współrzędną x punktu b: " << "\n";
    std::cin >> b.x;

    std::cout << "Podaj współrzędną y punktu b: " << "\n";
    std::cin >> b.y;
    
    std::cout << "Odległość pomiędzy punktami a i b wynosi: " << wypisz_odleglosc (a,b) << '\n'; 
}
