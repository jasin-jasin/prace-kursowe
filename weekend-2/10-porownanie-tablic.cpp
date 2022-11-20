// napisz funkcję, która przyjmie 2 tablice i zwróci informację 
// czy zawierają te same elementy w tej samej kolejności


# include <iostream>

bool czy_rowne (int* tab1, int x, int* tab2, int y) 
    {
    if (x != y) {
        return false;
    }
    for (int i = 0; i < x; i += 1) // przechodzimy po tablicy która ma n elementów
        {
            if (tab1[i] != tab2[i]) 
                {
                return false;
                }
        }
    return true;
}        


int main () {
    const int rozmiar = 100;
    int tab1 [rozmiar]; 
    int tab2 [rozmiar];
    int x = 0;
    int y = 0;
    std::cout << "Podaj wielkość pierwszej tabilicy: " << "\n";
    std::cin >> x;
    std::cout << "Podaj wielkość drugiej tabilicy: " << "\n";
    std::cin >> y;
    for  (int i = 0; i < x; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę pierwszej tabilicy: " << "\n";
        std::cin >> tab1[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab1[0]
    }
    for  (int i = 0; i < y; i += 1) 
    {
        std::cout << "Podaj " << i+ 1 << " liczbę drugiej tabilicy: " << "\n";
        std::cin >> tab2[i];   // robimy pętle, i wpisujemy kolejne liczby do tablicy począwszy od tab2[0]
    }    
    if (czy_rowne (tab1, x, tab2, y) == true)
    {std::cout << "Tablice są równe. \n";}
    else {
     std::cout << "Tablice nie są równie" << "\n";   
    }
    
}
