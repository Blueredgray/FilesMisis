#include <cmath>
#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> c;
    int b1 = 0;
    int a1 = a;
    int c1 = c;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    int aa = 0;
    int bb = 0;
    int cc = 0;
    while (a1>0) {
        a2 += 1;
        a1 /= 10;
    }
    while (c1 > 0) {
        c2 += 1;
        c1 /= 10;
    }
    //for (int aa = 0; aa < a2;aa += 1) {
    while(a > 0){
        a1 += (a % 3) * pow(10, aa);
        aa += 1;
        a /= 3;
    }
    while (c > 0) {
        c1 += (c % 3) * pow(10, cc);
        cc += 1;
        c /= 3;
    }
    std::cout << "\n" << a2 << " " << c2;
    std::cout << "\n" << a1 << " " << c1;
    b = 0;
    int m = std::max(aa,cc);
    for (int i = 0; i < m; i += 1) {
        bb = 0;
        while (((a1%10)+bb)%3!=c1%10) {
            bb += 1;
        }
        //b = (((a1%10)-(c1%10)) % 3) * pow(10, i);
        b += (bb) * pow(10, i);
        a1 /= 10;
        c1 /= 10;
    }
    bb = 0;
    std::cout << "\n" << b;
    b1 = 0;
    while (b > 0) {
        b1 += (b%10)*pow(3, bb);
        b /= 10;
        bb += 1;
        std::cout << "\n" << (b % 10) * pow(3, bb);
    }
    std::cout << "\n"  << b1;
}