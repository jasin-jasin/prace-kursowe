#include<iostream>

int fibonacci(int n)
{    
     int a = 0; 
     int b = 1;
  
     for(int i=0; i<n; i++)
     {
            b += a; //pod zmienną b przypisujemy wyraz następny czyli a+b
            a = b-a; //pod zmienną a przypisujemy wartość zmiennej b
     }
     return a;
}

int main()
{
    int n = 0;
    
    std::cout << "Podaj liczbę: ";
    std::cin >> n;
    std::cout << n << "-ty wyraz ciągu Fibonacciego wynosi: " << fibonacci (n) << "\n";
}
