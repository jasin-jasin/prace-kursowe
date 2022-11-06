// przyjmujemy od użytkownika liczbę i chcemy policzyć sumę cyfr

#include <iostream>

int main () {
    int x = 0;
    int y = 0;
    int a = 0;
    int b = 0;
    std::cout << "Podaj od jakiej liczby chcesz sprawdzać podzielność: ";
    std::cin >> x;
    std::cout << "Podaj do jakiej liczby chcesz sprawdzać podzielność: ";
    std::cin >> y;
    std::cout << "Podaj przez jaką pierwszą liczbę chcesz sprawdzać podzielność: ";
    std::cin >> a;
    std::cout << "Podaj przez jaką drugą liczbę chcesz sprawdzać podzielność: ";
    std::cin >> b;
    
    while (x <= y)
     if (x % a == 0 && x % b == 0)  // tu będą warunki do fizz buzz
    {std::cout << "Liczba " << x << " jest podzielna przez " << a <<  " i przez " << b << "\n";}
 //       else if (x % a == 0 && x % b != 0)
//        {
//            std::cout << "Liczba " << x << " jest podzielna przez " << a <<  " nie jest podzielna przez " << b << "\n";
//        x = x + 1;    
//        }
//        else if (x % a != 0 && x % b == 0)
 //       {
//            std::cout << "Liczba " << x << " nie jest podzielna przez " << a <<  " i jest podzielna przez " << b << "\n";
//            
//        }    
        
 //   }
    else {std::cout << "Liczba " << x << " nie jest podzielna ani przez " << a <<  " ani przez " << b << "\n";
    x = x + 1;} 
}
