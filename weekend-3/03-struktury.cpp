// słówko do deklarowania nowych typów


#include <iostream>

// definiujemy nowy typ o nazwie punkt, który składa się z 2 pól będących intami

struct punkt {
    int x;
    int y; // musimy zdeklarować z czego ten nowy typ ma się składać
}; // UWAGA!! po structowych klamerkach musi być średnik !!!


struct ulamek {
    int licznik;
    int mianownik;
};


void wypisz_punkt (punkt p){
        
    std::cout << "(" << p.x << "," << p.y << ")" << '\n';
}

// w CPP możemy stworzyć kilka funkcji o tej samej nazwie pod warunkiem, że róznią się liczbą lub typem argumentów. W C nie jest to możliwe - funkcja MUSI mieć unikalną nazwę
// fachowo to się nazywa przeciążania funkcji - przeciążanie funkcji


int main () {
    punkt p; // definiujemy zmienną typu punkt
    p.x  = 5; // . to operator wyłuskania, sięgamy do pola x w zmiennej p i ustawiamy jest na 5
    p.y = 3; 
    
    punkt q;
    q.x = 100;
    q.y = 200;

///    std::cout << p << '\n'; => to się wysypie bo kompilator nie zna takiego typu jak punkt
    std::cout << p.x << "," << p.y << '\n'; // to jest słabe rozwiązanei, bo ręcznie wypiosujemy
    
// dlatego obchodzimy to za pomocą funkcji
    '\n';
    wypisz_punkt (p);
    wypisz_punkt (q);
    '\n';
    
    ulamek u;
    u.licznik = 1;
    u.mianownik = 2;
    wypisz_ulamek (u);
}
