#include <iostream>
#include <cmath>

int main() {
	int x = 0;
	int y = 0;
	int p = 0;
	int np = 0;
	double dl = 0;
	std::cin >> x >> y;
	//std::cout << p << "\t" << np << "\t" << dl << "\n";
	for (int i = -5; i < 5; i += 1) {
		for (int j = -5; j < 5; j += 1) {
			x = j;
			y = i;
		if ((y <= 2 - int(pow(x, 2))) && (y == x)) {
			p += 1;
		}
		else {
			np += 1;
		}
		dl = double(p / (np + p));
		std::cout << x <<"\t" << y << "\t" << p << "\t" << np << "\t" << dl << "\n";
		}
	}
}