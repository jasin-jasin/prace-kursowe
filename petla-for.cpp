
// for (inicjalizacja, warunek, inkrementacja)
// {zawartość pętli}
// dwa średniki muszą się pojawiać, bo pętla przyjmuje 3 argumenty
// 1. sprawdzana jest prawdziwość warunku
// 2. jeśli warunek jest fałszywyu to koniec pętli
// 3. wykonywana jest zawartość
// 4. wykonywana jest inkrementacja
// 5. powrót do pkt. 1

//  for (int n = 1; n < x; n = n+1) { // alternatywny zapis (;; i +=1) oznacza że
// zwiększaj licznik i o 1; i+=2 - zwiększaj o 2; i +=-1 zmniejszaj o 1)

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
