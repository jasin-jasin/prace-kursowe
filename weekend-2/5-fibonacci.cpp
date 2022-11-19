// // ciąg fibonacciego
// // fib (1) = 1
// // fib (2) = 1
// // finb (n) = fib (n-1) + fib (n-2)
// 
//  1 1 2 3 5 8 13
//  
//  Napisz funckję która policzny n-ty wyraz ciągu fibonacciego

#include <iostream>
    
int fibonacci (int n) {
    int wynik = 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    for (int i = 3; i <= n; n += 1)
    {
    wynik = fibonacci (n-1) + fibonacci (n-2);
    return wynik;
    }
}


int main () {
    int n = 0;
    std::cout << "Podaj liczbę: ";
    std::cin >> n;
    std::cout << n << "-ty wyraz ciągu Fibonacciego wynosi: " << fibonacci (n) << "\n";
}
