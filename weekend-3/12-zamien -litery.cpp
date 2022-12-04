// napisz funkcję, która zamieni litery na parzystych pozycjach na wielkie a na 
// nieparzystych na małe

#include <iostream>
#include <string>

std::string pokemonizer (std::string& s) {
    for (int i = 0; i < s.length(); i += 2) 
    // przechodzimy po po parzystych pozycjach napisu
        {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] - ('a' - 'A');
            }
        }
    for (int i = 1; i < s.length(); i += 2) {
    // przechodzimy po nieparzystych pozycjach napisu
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + ('a' - 'A');
            }
    }
    return s;
}


int main () {
    std::string s;
    std::cout << "Podaj ciąg znaków (spacja albo enter kończy):  \n";
    std::cin >> s;
    std::cout << "Jestem pokemonem i zmieniłem twój napisa: " << pokemonizer(s) << '\n';
}
