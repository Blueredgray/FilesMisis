#include <iostream>
#include <vector>
int main() {
	int h = 0;
	int w = 0;
	std::vector <int> a;
	std::vector <int> a1;
	std::cin >> h >> w;
	int b = 0;
	for (int i = 0; i < h; i += 1) {
		for (int j = 0; j < w; j += 1) {
			std::cin >> b;
			a.push_back(b);
		}
	}
	for (int i = 0; i < h; i += 1) {
		for (int j = 0; j < w; j += 1) {
			int c = (i * w) + j;
			std::cout << a[c] << " ";
		}
		std::cout << "\n";
	}
	a1 = a;
	for (int i = 0; i < h; i += 1) {
		for (int j = 0; j < w; j += 1) {
			int c = 0;
			c = (i * w) + j;
			int d = (i * (w - 1)) + j;
			int e = (i * w) + j - 1;
			if (i > 0 && j > 0) {
				c = (i * w) + j;
				a1[c] = a1[d] + a1[e] + a1[c];
			}
			else if (i == 0 && j > 0) {
				c = j - 1;
				a1[i] = a[c] + a1[j];
			} 
			else if (i > 0 && j == 0) {
				c = i * w + 1;
				d = (c - i);
				a1[i] = a[d] + a1[c];
			}
			else {
				a1[c] = a[c];
			}
			std::cout << a1[c] << " ";
		}
		std::cout << "\n";
	}
}
