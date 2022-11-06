#include <iostream>

int main () {
    int a = 0;
    std::cout << "Podaj zmienną a: ";
    std::cin >> a;
    std::cout << "Reszta dzielenia przez 3: " << a << " Reszta /3 " << " = " << a % 3 << "\n";
    std::cout << "Podniesienie zmiennej a do 2: " << a << " do potęgi 2 " << " = " << a * a << "\n";
    std::cout << "Cyfra jedności liczby a: " << a << " ma cyfrę jedności " << " = " << a % 10 << "\n";
    std::cout << "Cyfra dziesiątek liczby a: " << a << " ma cyfrę dziesiątek " << " = " << a / 10 % 10 << "\n";
    std::cout << "Test działania a: " << a << " dzielenie przez 10 " << " = " << a / 10 << "\n";
    a = a /10;
    std::cout << "Test drgiego działania a: " << a << " modulo 10 " << " = " << a % 10 << "\n";
}
