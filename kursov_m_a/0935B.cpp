#include <iostream>
#include <string>
int main() {
	int n = 0;
	int end;
	int x = 0;
	int y = 0;
	int x1 = 0;
	int y1 = 0;
	int k = 0;
	std::string s = " ";
	std::cin >> n >> s;
	int side=-1;
	int sidep = -1;
	
	for (int i = 0;i < n;i += 1) {
		if (s[i] == 'R') {
			x += 1;
			//s = 1;
			//if (x1 != y1) {
				if ((x < y)) {
					side = 1;
				}
				if ((x > y)) {
					side = 0;
				}
			//}
			/*
			if ((x1 == y1) && (side==0)) {
				k += 1;
			}
			*/
		}
		if (s[i] == 'U') {
			y += 1;
			//if (x1 != y1) {
				if ((x < y)) {
					side = 1;
				}
				if ((x > y)) {
					side = 0;
				}
			//}
			/*
			if ((x1 == y1)&&(side==1)) {
				k += 1;
			}
			*/
		}
		if ((x1 == y1) && (side != sidep)) {
			k += 1;
		}
		
		std::cout << i<<" "<< x << " "<<y << " "<< side<<"\n";
		x1 = x;
		y1 = y;
		sidep = side;

	}
	std::cout <<k-1;
	std::cin >> end;
}
