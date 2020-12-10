#include <iostream>

int32_t main(void){
	double x,y;
	std::cin>>x>>y;

	std::cout<<std::fixed;
	std::cout.precision(2);
	std::cout<<(double)(x/y)<<std::endl;
}
