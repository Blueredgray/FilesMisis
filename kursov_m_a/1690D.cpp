#include <iostream>
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