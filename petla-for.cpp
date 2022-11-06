
// for (inicjalizacja, warunek, inkrementacja)
// {zawartość pętli}
// dwa średniki muszą się pojawiać, bo pętla przyjmuje 3 argumenty
// 1. sprawdzana jest prawdziwość warunku
// 2. jeśli warunek jest fałszywyu to koniec pętli
// 3. wykonywana jest zawartość
// 4. wykonywana jest inkrementacja
// 5. powrót do pkt. 1


#include <iostream>

int main () {
    int i = 0;
//    int licznik = 1;
//    std::cout << "Podaj ile wydrukować #: ";
//    std::cin >> n;
    
    for (; i < 5; i += 1 )
    {std::cout << i << "\n";
    }
}
