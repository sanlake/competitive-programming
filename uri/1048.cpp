#include <iostream>

int32_t main(void){
	double sa,pe;
	std::cin>>sa;

	if(sa<=400.00) pe=1.15;
	else if(sa<=800.00) pe=1.12;
	else if(sa<=1200.00) pe=1.10;
	else if(sa<=2000.00) pe=1.07;
	else pe=1.04;

	std::cout.precision(2);
	std::cout<<std::fixed;

	std::cout<<"Novo salario: "<<sa*pe<<std::endl;
	std::cout<<"Reajuste ganho: "<<sa*(pe-1.00)<<std::endl;
	std::cout<<"Em percentual: "<<(int)(((pe-1.00)*100)+0.5)<<" %"<<std::endl;
}
