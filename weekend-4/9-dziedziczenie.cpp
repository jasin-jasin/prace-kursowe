# include <iostream>
# include <string>

class Zwierz {

public:
    void setImie (const std::string& s) {
        imie = s;
    }
    
    std::string getImie () const {
        return imie;
    }
    
    void dajGlos() const {
        std::cout << "???\n";
    }
    
private: 
    std::string imie;
}; 

class Pies : public Zwierz {
    
    
}; 
  
int main () {
    Pies z;
    z.setImie ("Burek");  /// jeśli nie ma takiej metody w klasie Pies, to szukamy takiej metody w klasie nadrzędnej 
    z.dajGlos ();
}
