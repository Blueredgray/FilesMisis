#include <iostream>
#include <string>
#include <cmath>
int main() {
    int t = 0;
    int k = 0;
    int n = 0;
    int b = 0; //кол-во всех черных клеток в строке
    int bb = 0; //начало черной полоски
    int bbm = 0; //начало самой длинной черной полоски
    int be = 0; //конец самой длинной черной полоски
    int bm = 0; //кол-во клеток в самой длинной черной полоске
    int bt = 0; //кол-во черных клеток в текущей черной полоске
    int pr = 0; //кол-во перекрашенных белых клеток в черные
    int prbf = 0; //кол-во перекрашенных белых клеток в черные до самой длинной черной полоски
    int prth = 0; //кол-во перекрашенных белых клеток в черные после самой длинной черной полоски
    int bmbf = 0; //кол-во перекрашенных черных + перекрашенных белых клеток в черные до самой длинной черной полоски
    int bmth = 0; //кол-во перекрашенных черных + перекрашенных белых клеток в черные после самой длинной черной полоски
    std::string str = "";

    std::cin >> t;

    for (int i = 0; i < t; i += 1) {

        std::cin >> n >> k;
        std::cin >> str;

        b = 0;
        bb = 0;
        be = 0;
        bm = 0;
        bt = 0;
        pr = 0;
        bbm = 0;
        pr = 0;
        prbf = 0;
        prth = 0;
        bmbf = 0;
        bmth = 0;

        for (int j = 0; j < n; j += 1) {
            if (str[j] == 'B') {
                b += 1;
                if (bt == 0) {
                    bb = j;
                }
                bt += 1;
                if (bt > bm) {
                    bm = bt;
                    be = j;
                    bbm = bb;
                }
            }
            else {
                bt = 0;
            }
        }

        bmbf = bm;
        bmth = bm;
        b = bm;
        for (int j = bbm - 1; j > 0; j -= 1) {
            if (bmbf >= k) {
                break;
            }
            bmbf += 1;
            bm += 1;
            if (str[j] == 'W') {
                //pr += 1;
                prbf += 1;
            }
        }

        for (int j = be+1; j < n; j += 1) {
            if (bmbf >= k) {
                break;
            }
            bm += 1;
            bmbf += 1;
            if (str[j] == 'W') {
                //pr += 1;
                prbf += 1;
            }
        }

        for (int j = bbm - 1; j > 0; j -= 1) {
            if (bmth >= k) {
                break;
            }
            //bm += 1;
            bmth += 1;
            if (str[j] == 'W') {
                //pr += 1;
                prth += 1;
            }
        }

        for (int j = be + 1; j < n; j += 1) {
            if (bmth >= k) {
                break;
            }
            //bm += 1;
            bmth += 1;
            if (str[j] == 'W') {
                //pr += 1;
                prth += 1;
            }
        }

        pr = std::min(prbf,prth);
        /*
        if (bm < k) {
            pr += k - bm;
        }
        
        if (bmbf != bmth) {
            if (bmbf < k) {

            }
        }

        if (prbf <= prth) {
            if (bmbf < k) {
                pr += k - bmbf;
            }
        }
        else {
            if (bmth < k) {
                pr += k - bmth;
            }
        }
        */
        pr = std::min(prbf, prth);
        if (std::max(bmbf,bmth) < k) {
            pr += k - std::max(bmbf, bmth);
            //pr += k - b;
        }
        //pr = std::min(prbf, prth);
        std::cout << pr << "\n";
    }
}#include <iostream>
#include <string>
int main() {
	int t = 0;
	int k = 0;
	int n = 0;
	int b = 0;
	int b1 = 0;
	int end = 0;
	std::string str="";
	std::cin >> t;
	while (t >= 0) {
		std::cin >> n >> k;
		std::cin >> str;
		b = 0;
		b1 = 0;
		while (b < k) {
			int mb = 0;
			int mi = 0;
			//int tb = 0;
			for (int i = 0; i < n; i += 1) {
				if (str[i] == 'B') {
					//tb += 1;
					b += 1;
				}
				if (str[mi+1] == 'W') {
					str[i] = 'B';
					//tb = 0;
					b += 1;
					b1 += 1;
				}
				//if (tb > mb) {
				if (b > mb) {
					//mb = tb;
					mb = b;
					mi = i;
				}
				if (b == k) {
					break;
				}

			}
			if (b != k) {
				for (int i = 0; i < n; i += 1) {
					if (str[i] == 'W') {
						str[i] = 'B';
						//tb = 0;
						b += 1;
						b1 += 1;
					}
				}
			}
			//b = tb;

			/*
			for (int i = 0; i < n; i += 1) {
				//for (int j = i;j < n; j += 1)

				if (str[i] == 'B') {
					b += 1;
				}
				//else if ((i!=0) && ((str[i + 1] == 'B') && (str[i - 1] == 'B'))) {
				else if (((i == 0) && (str[i + 1] == 'B')) || ((i == n) && (str[i - 1] == 'B')) ||
					((str[i + 1] == 'B') && (str[i - 1] == 'B'))){
					str[i] = 'B';
					b += 1;
					b1 += 1;
				}
				if (b == k) {
					break;
				}
			}

			if (b != k) {
				for (int i = 0; i < n; i += 1) {
					if (str[i] == 'B') {
						b += 1;
					}
					else {
						b += 1;
						b1 += 1;
					}

					if (b == k) {
						break;
					}
				}
			}
		}
		*/
		}
		std::cout << "\n" << b1 << "\n";
		t -= 1;
	}
	std::cout << end;
}
