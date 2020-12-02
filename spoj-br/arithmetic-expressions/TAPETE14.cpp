#include <iostream>
#include <cmath>

int32_t main(void){
	int l,n;
	std::cin>>l>>n;
	
	std::cout.precision(0);
	std::cout<<std::fixed;
	std::cout<<pow(l-n+1,2)+n-1<<std::endl;
}
