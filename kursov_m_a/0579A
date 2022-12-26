#include <iostream>
#include <cmath>

int main() {
    int x = 0;
    int k = 0;
    
    td::cin >> x;
    x = 0;
    for (int i = 0; i < 8; i += 1) {
        x = pow(2,i);
        k = 0;
        //while (x > 0) {
        for (int i = 0; i < 13; i += 1) {
            k += x % 2;
            x = x >> 1;
            std::cout << x%2;
        }
        std::cout << " " << k << "\n";
    }
    std::cout << k;
}
