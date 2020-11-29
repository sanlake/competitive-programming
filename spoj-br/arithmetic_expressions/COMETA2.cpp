#include <iostream>

int32_t main(void){
	int a;
	std::cin>>a;
	std::cout<<a+(76-(((a-10)%76)))<<std::endl;
}
