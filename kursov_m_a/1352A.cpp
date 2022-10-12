#include <iostream>
#include <cmath>

int main(){
	int t, n, n1, r, p;
	//int b[5]{0};
	int k=1;
	std::cin>>t;
	int a[t];
	
	for (int i=1; i<=t; i+=1){
		std::cin>>n;
		a[i]=n;
	}
	for (int i=1; i<=t; i+=1){
		//b=[0];
		int b[6]{0};
		n=a[i];
		n1=a[i];
		r=0;
		k=1;
		while(n1>0){
			n1/=10;
			r+=1;
		}
		p=(pow(10,r));
		if (n%p==p){
			b[1]=n;
		} else{
		
		for (int j=0; j<r; j+=1){
			if ((n%10)!=0){
				b[j+1]=(n%10)*(pow(10,j));
				n/=10;
				k+=1;
			}
		}
	}
		std::cout<<"\n"<<k<<" "<<r<<"\n";
		for (int j=1; j<r; j+=1){
			if (b[j]>0){
				std::cout<<b[j]<<" ";
			}
		}
		
	}
}
