#include <iostream>

class A {
public:
    A(int x) {
        std::cout << "konstruktor A " << x << "\n";
    }

    ~A() {
        std::cout << "destruktor A\n";
    }
};

class B : public A {
public:
    
// lista inicjalizacyjna - pozwala na wywołanie konsktruktorów klasy nadrzędnej i atrybutów z zadanymi argumentami    
// konstruktory atrybutów są zawsze wywoływanej w kolejności ich definiowania a nie w kolejności ich wsytępowania na liście inicjalizacyjnej
    
    B() : A{10}, atrybut{34}, atrybut2{12} {     // konstrukt klasy nadrzędnej a potem konstruktor atrybutów
        std::cout << "konstruktor B\n";
    }

    ~B() {
        std::cout << "destruktor B\n";
    }
    
    A atrybut;
    A atrybut2;
};

class C : public B {
public:
    C() {
        std::cout << "konstruktor C\n";
    }

    ~C() {
        std::cout << "destruktor C\n";
    }
private:
    int x;
    A a;
};

// I. Przed wywołaniem konstruktora zostanie wywołany konstruktor klasy nadrzędnej, a następnie konstruktory wszystkich atrybutów (w kolejności zdefiniownia.

// II. Destruktory są wywoływane w odwrotnej kolejności

int main() {
    B b;
}
