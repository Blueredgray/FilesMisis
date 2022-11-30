#include <iostream>
#include <cmath>

struct Rdec {
	double x = 0.0;
	double y = 0.0;
};

struct Rpol {
	double r = 0.0;
	double f = 0.0;
};

struct Pos {
	Rdec d;
	Rpol p;
	double s;
};

void ToDec(Rpol p) {
	Rdec d{0, 0};
	d.x = sqrt(pow(p.r, 2) / (1 + pow(p.f, 2)));
	d.y = sqrt(pow(p.r, 2) - pow(d.x, 2));
	std::cout << d.x << d.y;
	
}



int main() {
	//Rdec2D d;
	//Rpol2D p;
	//double r = 0.0;
	//double phi = 0.0;
	//double x = 0.0;
	//double y = 0.0;
	//std::cin >> d.x >> d.y >> p.r >> p.phi;
	//r = sqrt(pow(d.x, 2) + pow(d.y, 2));
	//phi = (d.y / d.x);
	//x = sqrt(pow(p.r, 2) / (1 + pow(p.phi, 2)));
	//y = sqrt(pow(p.r, 2) - pow(x, 2));
	//std::cout << r << " " << phi << " " << x << " " << y;
	Rpol p{10, 0.75};
	Pos c{ Rdec{3,0},Rpol{0,0},1 };
	Pos m{ Rdec{0,-4},Rpol{0,0},1 };
	//ToDec(p);
	double fr = sqrt(pow(c.d.x - m.d.x, 2) + pow(c.d.y - m.d.y, 2));
	std::cout << fr << "\n";
	while (m.d.y < 0 && fr > 0) {
		double fr = sqrt(pow(c.d.x - m.d.x, 2) + pow(c.d.y - m.d.y, 2)) - c.s;
		std::cout << " " << fr ;
		m.d.y += m.s;
		//c.p.f = (std::abs(c.d.x - m.d.x) / std::abs(c.d.y - m.d.y));
		double Vmin = c.d.x / (-(m.d.y / m.s));
		std::cout << Vmin << "\n";
		std::cout << fr / Vmin << "\n";
	}
	/*m.d.y = m.d.y + m.s;
	std::cout << m.d.y;*/
	//std::cout << "\n" << "Vmin = " << c.d.x / c.s - m.d.y / m.s;
	double Vmin = c.d.x / ( - (m.d.y / m.s));
	std::cout << Vmin << "\n";
	std::cout << fr/Vmin << "\n";
	
}
