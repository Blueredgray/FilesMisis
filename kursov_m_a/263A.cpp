#include <iostream>

int main(){
	//int a[4][4];
	int x=0;
	int y=1;
	int t=1;
	int s,s1,sj,si;
	/*
	for ( int i=1;i<=5;i+=1){
		for ( int j=1;j<=5;j+=1){
			std::cin>>x;
			//a[i][j]=x;
			if (x==1){
				//std::cout<<i;
				std::cout<<"i="<<i<<"j="<<j;
			}
			//std::cout<<a[i][j]<<" - ";
			
		}
	}
	*/
	for ( int i=1;i<=5;i+=1){
		for ( int j=1;j<=5;j+=1){
			std::cin>>x;
			if (x==1){
				
				//std::cout<<"i="<<i<<"j="<<j;
				if (j>3){
					sj=j-3;
				}else{
					sj=3-j;
				}
				if (i>3){
					si=i-3;
				}else{
					si=3-i;
				}
				s1=si+sj;
			}
	}
			
	}
		
	//std::cout<<s1<<" "<<si<<" "<<sj;
	std::cout<<s1;
	
	
	//*/
	/*
	for (int i=1;i<=25;i+=1){
		//std::cout<<i<<" ";
		//std::cout<<y<<"-"<<t<<" ";
		std::cin>>x;
		y+=1;
		if (i%5==0){
			t+=1;
			y=1;
			//std::cout<<"\n";
		}
		if (x==1){
			t=(i%6)+1;
			t-=2;
			//t=5-t;
			y=i/5;
			y-=2;
			//y=5-y;
			if (t<0){
				t*=-1;
			}
			if (y<0){
				y*=-1;
			}
			s=t+y;
			s1=i;
		}
	}
	//std::cout<<s<<" "<<s1;
	std::cout<<s;
	*/
}
