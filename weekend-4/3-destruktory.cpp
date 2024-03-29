#include <iostream>

class A {
public:
    A (int n) {
        x = n;
        std::cout << "konstruktor " << x << "\n";
    }
    
    //destruktor  - ostatnia metoda wywołana tuż przed zniszczeniem obiektu
    //destruktor jest tylko jeden (nigdy nie przyjmuje argumentów)
    // w trakcie działania destruktora obiekt wciąż istnieje 
    
    ~A() {
        std::cout << "destruktor " << x << "\n";
        
    }
    
    int x;
};

int main () {
    A a{1};
    A* b = new A {2};
    delete b; // delete wywoła desktruktor obiektu
    
    {
            A c{3};
    }
    
}
