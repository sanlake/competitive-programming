#include <iostream>

int32_t main(void){
	int a,b;
	std::cin>>a>>b;

	if(a==0 || b==0 || b%a==0 || a%b==0) std::cout<<"Sao Multiplos"<<std::endl;
	else std::cout<<"Nao sao Multiplos"<<std::endl;
}
