#include <iostream>
#include <cmath>

struct Rdec2D {
	double x = 0.0;
	double y = 0.0;
};

struct Rpol2D {
	double r = 0.0;
	double phi = 0.0;
};

int main() {
	Rdec2D d;
	Rpol2D p;
	double r = 0.0;
	double phi = 0.0;
	double x = 0.0;
	double y = 0.0;
	p.r = 10;
	//p.phi = 33.75;
	p.phi = 0.75;
	d.x = 8;
	d.y = 6;
	std::cin >> d.x >> d.y >> p.r >> p.phi;
	r = sqrt(pow(d.x, 2) + pow(d.y, 2));
	//phi = 45 * (d.y / d.x); //через тангенс
	phi = (d.y / d.x);

	x = sqrt(pow(p.r, 2) / (1 + pow(p.phi, 2)));
	y = sqrt(pow(p.r, 2) - pow(x, 2));
	std::cout << d.x << " " << d.y << " "  << p.r << " " << p.phi << " " << "\n";
	std::cout << r << " " << phi << " " << x << " " << y;
}
