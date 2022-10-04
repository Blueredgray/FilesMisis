#include <iostream>
#include <string>
int main() {
    //std::string tp;
    int t;
    std::cin >> t;
    for (int i=0;i < t;i += 1) {
        int a, b;
        std::string tp, tp1;
        std::cin >> a>> b;
        std::cin >> tp;
        int s = tp.length();
        tp1 = tp;
        for (int j = 0;j < s;j += 1) {
            if (tp1[j] == '1') {
                if (tp1[s - j - 1] == '0') {
                    //j = s;
                    tp1 = "-1";
                    break;
                }
                else if (b > 0) {
                    b -= 1;
                }
                else {
                    tp1 = "-1";
                    break;
                }
            }
            if (tp1[j] == '0') {
                if (tp1[s - j - 1] == '1') {
                    //j = s;
                    tp1 = "-1";
                    break;
                }
                else if (a > 0) {
                    a -= 1;
                }
                else {
                    tp1 = "-1";
                    break;
                }
            }
            if (tp1[j] == '?') {
                if (tp1[s - j - 1] == '1'){
                    tp1[j] = '1';
                    if (b > 0) {
                        b -= 1;
                    }
                    else {
                        tp1 = "-1";
                        break;
                    }
                }
                if (tp1[s - j - 1] == '0') {
                    tp1[j] = '0';
                    if (a > 0) {
                        a -= 1;
                    }
                    else {
                        tp1 = "-1";
                        break;
                    }
                }
            }
            //std::cout << tp[j];
        }
        if (tp1!="-1"){
            for (int j = 0;j < s;j += 1) {
                if ((tp1[j] == '?') && (tp1[s - j - 1] == '?')) {
                    if (j == s - j - 1) {
                        if (a > 0) {
                            tp1[j] = '0';
                            a -= 1;
                        }
                        else if (b > 0) {
                            tp1[j] = '1';
                            b -= 1;
                        }
                        else {
                            tp1 = "-1";
                            break;
                        }
                    }
                    else {
                        if (a > 1) {
                            tp1[j] = '0';
                            tp1[s - j - 1] = '0';
                            a -= 2;
                        }
                        else if (b > 1) {
                            tp1[j] = '1';
                            tp1[s - j - 1] = '1';
                            b -= 2;
                        }
                        else {
                            tp1 = "-1";
                            break;
                        }
                    }

                }
            }
        }
        //std::cout << s;//tp[5];
        std::cout << tp1<<"\n";
    }

}