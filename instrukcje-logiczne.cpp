#include <iostream>

int main () {

    // AND && koniunkcja logiczna
    
    std::cout << "true && true = " << (true && true) << "\n";
    std::cout << "true && false = " << (true && false) << "\n";
    std::cout << "false && true = " << (false && true) << "\n";
    std::cout << "false && false = " << (false && false) << "\n";
    std::cout << "-----------\n";
    
    // OR || alternatywa logiczna
    
    std::cout << "true || true = " << (true || true) << "\n";
    std::cout << "true || false = " << (true || false) << "\n";
    std::cout << "false || true = " << (false || true) << "\n";
    std::cout << "false || false = " << (false || false) << "\n";
    std::cout << "-----------\n";
    
    // NOT - ! zaprzeczenie
    
    std::cout << "(!true) = " << (!true) << "\n";
    std::cout << "(!false) = " << (!false) << "\n";
    
}
