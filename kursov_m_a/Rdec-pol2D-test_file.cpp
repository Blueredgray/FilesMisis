//#include "Rdec-pol2D.hpp"
#include "R2D-realisation.hpp"

int main() {
    Rdec d{ 8, 6 };
    Rpol p{ 10, 0.75 };
    std::cout << ToDec(p);
    bool eq = d == p;
    
    std::cout << d << p << p * 5 << 5 * p << ((d + Rdec{ kEps , 0 }) == d) ;

}