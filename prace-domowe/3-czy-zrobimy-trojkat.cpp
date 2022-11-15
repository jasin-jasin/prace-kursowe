// Przyjmij 3 liczby A, B i C, a następnie wypisz, czy da się z odcinków o takich długościach zbudować trójkąt.

#include <iostream>

int main () {
    int A = 0;
    int B = 0;
    int C = 0;
    int max = 0; // zmienna do przechowywania najdłuższego odcinka
    std::cout << "Podaj długość pierwszego odcinka: ";
    std::cin >> A;
    std::cout << "Podaj długość drugiego odcinka: ";
    std::cin >> B;
    std::cout << "Podaj długość trzeciego odcinka: ";
    std::cin >> C;
//
// warunek budowy trójkąta: suma dwóch dowolnych musi być większa od trzeciej
// Jeżeli dana jest długość jednego z boków, to suma długości dwóch pozostałych musi być od niej większa.
// Suma długości dwóch boków trójkąta jest zawsze większa od długości trzeciego boku. Jest to tak zwany warunek trójkąta.
// czyli szukamy maksa i sprawdzamy czy 2 pozostałe są większe od maksa czy nie.
//
//
    if (A  >= B && A >= C)
        {
        if (B+C>A)
            { std::cout << "Z takich boków da się zbudować trójkąt. \n";
            }
        else {
            std::cout << "Z takich boków nie da się zbudować trójkąta. \n";
        }
        }
    else if (B >= C) {
        if (C+A>B)
            { std::cout << "Z takich boków da się zbudować trójkąt. \n";
            }
        else
            {std::cout << "Z takich boków nie da się zbudować trójkąta. \n";
            }
    }
    else if (A+B>C)
            { std::cout << "Z takich boków da się zbudować trójkąt. \n";
            }
        else
            {std::cout << "Z takich boków nie da się zbudować trójkąta. \n";
            }
    }
