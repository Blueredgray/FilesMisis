#include <iostream>
#include <string>

int main() {
    int s = 0;
    std::string s1 = ""; //изначальная строка
    std::string s2 = ""; //финальная строка
    //std::cin >> s >> s1;
    s = 5;
    s1 = "volga";
    int s0 = (s - (s % 2)) / 2 + s % 2 ; //центр (первый новый символ)
    s2 = s1;
    int s3 = 0; //вычисляемый индекс вставляющегося символа
    for (int i = 0; i < s; i += 1) {
        if (i % 2 == 0) {
            s3 = s0 + int(i / 2) - 1;
        }
        else {
            s3 = s0 - int((i + 1) / 2) - 1;
        }
        s2[i] = s1[s3];
        std::cout << i << " " << s2[i] << "\n";
    }
    std::cout << s2;
}
