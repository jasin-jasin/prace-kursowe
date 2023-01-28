//Napisz program "bankowy", który bedzie przechowywal stan konta roznych uzytkownikow i w pętli nieskończonej pytał po kolei o nazwe uzytkownika i rodzaj operacji do wykonania. Dostepne rodzaje operacji:
// - stan_konta - wyswietla stan konta dla podanego użytkownika
// - wplac - przyjmuje od uzytkownika kwote i zwieksza jego stan konta o tyle samo.
// - wyplac - przyjmuje od uzytkownika kwote i, jeśli stan konta jest wystarczający, zmniejsza stan konta o tyle samo. Jeśli nie ma wystarczająco środków wypisz komunikat i nic nie wypłacaj.
// Do przechowywania informacji o stanie konta użyj obiektu typu std::map<std::string, int>


#include <iostream>
#include <map>
#include <string>

/*
class Konto {
public:
    Konto (int x, std::string uzytkownik) : nazwa{uzytkownik}, stan_konta{x} {}      // konstruktor klasy
    
    
private:
    
};
*/


int main() {
    std::string user;
    std::map<std::string, int> konto;
    konto["Ania"] = 100000;
    konto["Basia"] = 200;
    konto["Cesia"] = -100;
    for (const auto& k : konto) {
        std::cout << k.first << " ma na koncie " << k.second << '\n';
    }
    std::cout << "Podaj nazwę użytkownika: " << '\n';
    std::cin >> user;
    for (auto i = konto.begin(); i = konto.end(); i++) {
        if (user == k.[i])
            std::cout << "Nie ma takiego użytkownika." << '\n';
        std::cout << "Nie ma takiego użytkownika, czy chcesz założyć mu konto?" << '\n';
    
    }
    
}
