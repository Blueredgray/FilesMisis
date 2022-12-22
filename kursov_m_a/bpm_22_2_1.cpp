#include <iostream>
#include <cmath>

int main() {
	double deltax = 0.05;
	double eps = 0.0001;

	int i = 0;
	double fx = 0;
	for (double x = 0.1; x < 1; x += deltax) {
		fx = x;
		i = 0;
		std::cout << x << "\t";
		while ( int(fx* ((1 / eps) / 10)) % 10 == 0) {
			fx += pow(-1, i) * ((pow(fx, (2 * i) + 1) )/ ((2 * i) + 1));
			i += 1;
		}
		std::cout << (int(fx* ((1 / eps) )))*eps << "\n";
	}
}