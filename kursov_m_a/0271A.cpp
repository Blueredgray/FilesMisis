#include <iostream>

int main(){
	int y, t, y1, y2, y3, y4;
	std::cin>>y;
	int x;
	for (y+=1; y<=9999; y+=1){
		t=y;
		y1=y%10;
		y2=(y/10)%10;
		y3=(y/100)%10;
		y4=(y/1000)%10;
		//x=(y1==y2)+(y2==y3)+(y3==y4);
		x=(y1==y2)+(y1==y3)+(y1==y4)+(y2==y3)+(y3==y4)+(y2==y4);
		if (x==0){
			break;
		}
	}
	std::cout<<t;
}
	
	//std::cout<<t<<" "<<x<<" "<<y1<<" "<<y2<<" "<<y3<<" "<<y4<<" ";
//}
