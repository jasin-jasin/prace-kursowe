#include <iostream>

class A {
public:
    A () {
        std::cout << "konstruktor\n";
    }
    
    //destruktor  - ostatnia metoda wywołana tuż przed zniszczeniem obiektu
    //destruktor jest tylko jeden (nigdy nie przyjmuje argumentów)
    // w trakcie działania destruktora obiekt wciąż istnieje 
    
    ~A() {
        std::cout << "destruktor\n";
        
    }
};

int main () {
    A a;
    
}
