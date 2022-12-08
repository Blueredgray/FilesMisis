#include <iostream>
#include <cmath>
#include "R2D-realisation.hpp"
#include "Rdec-pol2D.hpp"




struct Pos {
	Rdec d;
	Rpol p;
	double s;
};

//void ToDec(Rpol p) {
//	Rdec d{0, 0};
//	d.x = sqrt(pow(p.r, 2) / (1 + pow(p.f, 2)));
//	d.y = sqrt(pow(p.r, 2) - pow(d.x, 2));
//	std::cout << d.x << d.y;
//	
//}
void Print(std::ostream& ostr) {
	ostr << "gthhtyjytjy";

}

int main() {
	Rpol p{10, 0.75};
	double sh = 40;
	Pos c{ Rdec{4,0},Rpol{0,0}, 1 };
	Pos m{ Rdec{0,-4},Rpol{0,0}, 1 };
	double fr = sqrt(pow(c.d.x - m.d.x, 2) + pow(c.d.y - m.d.y, 2));
	std::cout << fr << "\n";
	double k = 0;
	std::cout << "\n \n \n"; 
	c.s = sqrt(pow(c.d.x + m.d.x, 2)+pow(c.d.y + m.d.y, 2))/sh;
	m.s = abs(m.d.y / sh);
	std::cout << c.s << "\n";
	std::cout << 4 * sqrt(2) << "\n";
	while (m.d.y < 0) {
		m.d.y += m.s;
		k = (abs(m.d.y / c.d.x));
		c.d.x -= c.s * k;
		if (c.d.y > m.d.y) {
			c.d.y -= c.s * (1 / k);
		}
		else {
			c.d.y += c.s * (1 / k);
		}
		std::cout << m.d.y << "\t" << c.d.x << "\t" << c.d.y << "\t" << k << "\n";
	}
	while (m.d.y < 0 && fr > 0) {
		double fr = sqrt(pow(c.d.x - m.d.x, 2) + pow(c.d.y - m.d.y, 2)) - c.s;
		std::cout << " " << fr;
		m.d.y += m.s;
		//c.p.f = (std::abs(c.d.x - m.d.x) / std::abs(c.d.y - m.d.y));
		double Vmin = c.d.x / (-(m.d.y / m.s));
		/*std::cout << Vmin << "\n";
		std::cout << fr / Vmin << "\n";*/

	}
	/*m.d.y = m.d.y + m.s;
	std::cout << m.d.y;*/
	//std::cout << "\n" << "Vmin = " << c.d.x / c.s - m.d.y / m.s;
	double Vmin = c.d.x / ( - (m.d.y / m.s));
	/*std::cout << Vmin << "\n";
	std::cout << fr/Vmin << "\n";*/
	
}
