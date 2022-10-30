#include <iostream>
#include <array>
int main() {
    std::array<int, 101> b = {};
    int n = 0;
    std::cin >> n;
    int p = 0;
    for (int i = 1; i <= n; i += 1) {
        std::cin >> p;
        b[p] = i;
    }
    for (int i = 1; i <= n; i += 1) {
        std::cout << b[i] << " ";
    }
}
