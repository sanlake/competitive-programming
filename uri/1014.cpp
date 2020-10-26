#include <iostream>

int32_t main(void){
	int x;
	double y;

	std::cin>>x>>y;

	std::cout.precision(3);
	std::cout<<std::fixed<<x/y<<" km/l"<<std::endl;
}
