#include <iostream>
#include <string>  // std:string - inkludujemy klasę string

int main () {
    std::string s;
    std::cin >> s;   // przyjmujemy napis z klawiatury do pierwszego białego znaku
    std::cout << s;
    s[0] = 'A';
    std::cout << s << '\n';
    for (int i = 0; i < s.length(); i +=1) {
        std::cout << s[i] << '\n';
    }
    std::cout << '\n';
    s += " i psa " ;
    s.push_back('!');
    std::cout << '\n';
}
