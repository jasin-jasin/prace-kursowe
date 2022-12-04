#include <iostream>
#include <cstdlib>   // standardowa biblioteka języka C, std::rand (), std:srand ()
#include <ctime>    // std::time()


int main () {
    std::srand (20);          // ziarno genertara liczb pseudolosowych
    std::srand (std::time(nullptr)); // ustawiamy ziarno jako caas od 1.1.1970
    std::cout << std::time(nullptr) << '\n';  // std time zwraca liczbę sekund od od 1 stycznia 1970 od pólnocy 
    int x = std::rand() % 10;  // to powinnno przypisać do x jakąś losową liczbę
    std::cout << x << '\n';
    std::cout << std::rand() << '\n';
    std::cout << std::rand() << '\n';
    x = std::rand () % 6 + 1;
    std::cout << x << '\n';
}
