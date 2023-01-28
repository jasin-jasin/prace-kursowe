// szablony - teoria

#include <iostream>
#include <cstring>          // nagłówek inkludujący porównania strongów z C

                            // tutaj mówimy, że nie piszemy funkcji, tylko szablony
                            // ale nie możemy napisać po prostu T bo dla kompilatora to będzie zmienna
                            // typename T informuje kompilator, żeby T było traktowane jako nazwa typu
                            
template <typename T>
T wieksza (T a, T b) {
    if (a > b) {
        return a;
    }
    else
    {
        return b;
    }
}

                            // możemy też napisać sepcjalizację szablonu
                            // czy wyjątek do szablonu
                            // specjalizacja szablonu ma pierwszeństwo przed wersją ogólną
                            
template <>
const char* wieksza(const char* a, const char* b) {
    std::cout << "zachodzi specjalizacja!!" << '\n';
    if (std::strcmp(a,b) > 0)           // żeby użyć strcmp musimy zainkludować cstring
        return a;
    return b;
}

                            // ZWYKŁE FUNKCJE MAJĄ PIERWSZEŃSTWO NAD SZABLONAMI
                            // dopiero jak nie znajdziemy funkcji to sięgamy po szablon
                            
const char* wieksza(const char* a, const char* b) {
    std::cout << "Wywołanie funkcji przed szablonem!!" << '\n';
    if (std::strcmp(a,b) > 0)          
        return a;
    return b;
}
                            

int main () {
    std::cout << wieksza (3,6) << '\n';  // tutaj zachodzi tzw. DEDUKCJA typów
                                     // jeśli oba argumentyu są tego samego typu,
                                     // to dzięki temu kompilator sam wybierze odpowiedni szablon
                                     
    std::cout << wieksza (3.5, 6.12) << '\n';
    std::cout << wieksza ('c', 'D') << '\n';
    
                                    // możemy przekazać argumenty do szablonu - wtedy dedukcja typów nie zachodzi
    std::cout << wieksza<double>(3.5, 2) << '\n';
    std::cout << wieksza ("abcd", "QWER") << '\n';
                                    // to jest tablica znaków
                                    // zatem przekazujemy wskaźnik na początkowy adres komórki pamięci, gdzie ona się zaczyna
                                    // to jest typ const char*
                                    // więc de facto porównujemy adresy

    std::cout << wieksza<const char*>("abcd", "QWER") << '\n';
                                    // zmuszenie kompilatora do sięgniecia po szablon
                                    // zostawienie samych pustych <> mówi kompilatorowi że chcemy szablon - a z typem "masz sobie sam poradzić"
}
