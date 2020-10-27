#include <iostream>

int32_t main(void){
	int A,B,C,D;
	std::cin>>A>>B>>C>>D;

	if(B>C && D>A && C+D>A+B && C*D>=0 && A%2==0) std::cout<<"Valores aceitos"<<std::endl;
	else std::cout<<"Valores nao aceitos"<<std::endl;
}
