// przyjmujemy od użytkownika liczbę i chcemy policzyć sumę cyfr

#include <iostream>

int main () {
    int licznik = 1;
    int x = 0;
    int suma = 0;
    std::cout << "Podaj zmienną x: ";
    std::cin >> x;
    if (x < 0) x = -x;
    while (x != 0)
    {suma += x % 10;  // do sumy wpsiujemy ostatnią cyfrę
    x /= 10; // usuwamy ostatnią cyfrę z liczby (dzielimy przez 10 i podstawiamy do x)    
    }
    std::cout << "Suma cyfr wynosi " << suma << "\n";
}
    // while (licznik)
    // {
    // std::cout << "lol " << licznik << "\n";
    // licznik = licznik +1; // licznik +=1 (alternatywny zapis skrócony)
    // }    
        
