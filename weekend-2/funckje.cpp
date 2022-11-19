// TYP_ZWRACANY NAZWA FUNKCJI (argumenty){tresc funkcji
// }
// void - typ oznaczający brak zwracanej wartości

#include <iostream>

// funkcja hello nie robi nic (nie zweraca wartości, nie przyjmuje argumentów)


void hello () {    
    std::cout << "Hello\n";
}

    
void argument (int a) {
    std::cout << "Argument = " << a << "\n";
}

void dwa_argumenty (int a, int b) {
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}

int nastepnik (int x) {
        return x +1;  // return zwraca wartość wyrażenia jako wynik funkcji i kończy jej działanie
        // WAŻNE jeżeli typ zwracany nie jest void to funkcja MUSI zawsze się skończyć returnem
}


int main () {
    hello ();
    std::cout << "hej\n";
    hello ();
    argument (10);
    argument (20);
    int x = 13;
    argument (x);
    dwa_argumenty (22, 34);
    int a = nastepnik (0); // wywołujemy funkcje z argumentem 0, czyli wynikiem jest 1
    std::cout << a << "\n";
    std::cout << nastepnik (3) << "\n";
    std::cout << nastepnik (nastepnik (0)) << "\n";
}
