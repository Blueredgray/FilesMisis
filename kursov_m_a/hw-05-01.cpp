#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
int F(int i1) {
    return  (i1 > 1) ? i1 * F(i1 - 1) : i1;
}
void s(double x) {
    
}
int main()
{
    int a = -1; //начало диапозона
    int b = 1; //конец диапозона
    double x = 0.0;
    int i = 0;
    double y = 0.0;
    double ci = 0.1; //сигма
    double E = 0.001; //эпсилон
    double s = 0.0; 
    double s1 = 0.0;
    double x1 = 0.0;
    //std::cout.precision(4);
    //for (int j = 0; j < 5;j += 1)
    //    std::cout << j << " " << F(j) << "\n"; //проверка факториала
    //-1.388e-16
    for (x = a;x < b;x += ci) {
        y = cos(x);
        std::cout << x << " " << y; //<< "\n";
        i = 0;
        
        s = 1;
        s1 = 1;
        while (std::abs(s)>E) {
        //while (std::abs(y-s) < E) {
            s1 = s;
            //s = (pow((-1),i))*(pow(x,2*i))/F(2*i);
            s = (pow((-1), i)) * (pow(x, 2 * i)) / F(2 * i);
            i += 1;
        }
        std::cout << " " << i << " " << s1 << "\n"; //<< "\n";
    }
    /*
    while () {

    }
    */
}
