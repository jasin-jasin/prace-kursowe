// Napisz funkcję która przyjmie położenie skoczka na szachownicy i wzróci informację na // ile różnych pól może się on ruszyć (w 1 ruchu)

#include <iostream>

bool pole_ok (int x, int y) {
    return x >=1 && x <=8 && y >=1 && y <=8;
}

int ile_ruchow (int x, int y) {
    int suma = 0;
//  const int wsp [8][2] = {{},{},{},{},{},{}, {},{},{},{}};                           
// tu definiujemy tablicę dwuwymiarową, aka 8 tablic 2 znakowych

    const int wspx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    const int wspy[8] = {1, -1, 1, -1, 2, -2, 2, -2};
    for (int i = 1; i <=8; i +=1) {
        if (pole_ok (x + wspx[i], y + wspy[i])) // x+ wsp[i][0], y + wsp[i][1]
        suma += 1;
    }
    return suma;
}   

int main () {
    const int rozmiar = 8;
    int x = 1;
    int y = 1;
    int licznik = 0; 
    std::cout << "Podaj koordynaty x skoczka (od 1 do 8): " << "\n";
    std::cin >> x;
    std::cout << "Podaj koordynaty y skoczka (od 1 do 8): " << "\n";
    std::cin >> y;
    std::cout << "Skoczek może się ruszyć na: " << ile_ruchow (x, y) << " sposobów \n"; 
}  
