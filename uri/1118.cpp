#include <iostream>

int32_t main(void){
	int q=0,x;
	double n,m=0.0;

	std::cout.precision(2);
	std::cout<<std::fixed;
	
	while(true){
		std::cin>>n;
		if(n>=0 && n<=10){ m+=n; q++; }
		else std::cout<<"nota invalida"<<std::endl;

		if(q==2){
			std::cout<<"media = "<<m/2.0<<std::endl;
			do{
				std::cout<<"novo calculo (1-sim 2-nao)"<<std::endl;
			}while(std::cin>>x && x!=1 && x!=2);

			if(x==2) break;
			else{ q=0;m=0; }
		}
	}

}
