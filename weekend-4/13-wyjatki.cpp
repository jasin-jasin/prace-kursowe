#include <iostream>

int dzielenie (int a, int b) {
    if (b == 0) {
        throw []{};                  ////    "Podzielono przez 0!"
    }
    return a / b;
}

bool dzielenie_wyjatki (int a, int b, int* result) {
    if (b == 0)  {
        std::cerr << "nie dzielimy przez 0\n";
        return false;
    }
    *result = a / b;
    return true;
}


int main () {
    int wynik;
    if (!dzielenie_wyjatki(5, 2, &wynik)) {
            std::cerr << "Blad!\n";
            
    }
    std::cout << wynik << '\n';
    
     if (!dzielenie_wyjatki(3, 0, &wynik)) {
            std::cerr << "Blad!\n";
    }
    std::cout << wynik << '\n';
    
    try {                       // piszemy try jak spodziewamy się, że jakaś funkcja może się nie wykonać
    
    std::cout << dzielenie (5,2) << '\n';
    std::cout << dzielenie (3,0) << '\n';
    }
    
    catch (const char* str) {
                                // tu robimy obsługę wyjątku
            std::cout << "Blad: " << str << '\n';
    }
    
    catch (...) {               // złapanie dowolnego wyjątku;
                                // nie stosujemy, bo jeśli nie byliśmy gotowi na taki wyjatek to nie wiemy jak go obsłużyć.
        std::cout << "Złapałem Fraglesa!!!\n";
    }
    
    
    
    std::cout << "program działą dalej...\n";
}
