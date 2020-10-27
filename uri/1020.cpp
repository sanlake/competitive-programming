#include <iostream>

int32_t main(void){
	int d;
	std::cin>>d;

	std::cout<<(int)(d/365)<<" ano(s)"<<std::endl;
	std::cout<<(int)(d%365)/30<<" mes(es)"<<std::endl;
	std::cout<<(int)(d%365)%30<<" dia(s)"<<std::endl;

}
