#include <iostream>

int f (int x) {
    return x;
}

template <int N>
int g () {
    return N;
}

int fib (int n){
    if (n == 0) 
        return 0;
    if (n == 1)
        return 1;
    return fib (n-1) + fib (n-2);
}

template <int N>
int templ_fib () {
    return templ_fib<N-1>() + templ_fib<N-2>();
}

template <>             // specyfikacja do szablonu
int templ_fib<0>() {
    return 0;
}

template <>
int templ_fib<1>() {
    return 1;
}


int main () {
    std::cout << f(14) << '\n';
    std::cout << g<12>() << '\n';
    std::cout << fib(42) << '\n';           // to się liczy długo....
    std::cout << templ_fib<42>() <<  '\n';  // to się wykrzaczy, bo limit na szblony wykorzystany 
                                            // trzeba napisać specjalizację 
}
