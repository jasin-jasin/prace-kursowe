// napisz funkcje, która sprawdzi, czy podany napis się składa tylko z małych liter

#include <iostream>

bool czy_mala_litera (const char* napis) {
    for (int i = 0; napis[i] != 0; i += 1) // przechodzimy po tablicy która ma n elementów
        {
            if (napis [i] < 'a' || napis [i] >'z') // sprawdzamy tablicę czy znak nie lezy poza zakresie
                {
                return false;
                }
        }
    return true;
}

int main () { 
    std::cout << czy_mala_litera ("sfksdfjsdksdhk") << "\n";  
    std::cout << czy_mala_litera ("fjskflsjk9tiejkl") << "\n";   
    }
