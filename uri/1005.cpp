#include <iostream>

int32_t main(void){
	double a,b,c;
	std::cin>>a>>b;

	c=((a*0.35)+(b*0.75))/1.1; 

	std::cout.precision(5);
	std::cout<<"MEDIA = "<<std::fixed<<c<<std::endl;
}
