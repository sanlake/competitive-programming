#include <iostream>

int32_t main(void){
    int n,x,vm=0,pm=0;

    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>x;
	if(x<vm || i==0){ vm=x;pm=i; }
    }

    std::cout<<"Menor valor: "<<vm<<std::endl;
    std::cout<<"Posicao: "<<pm<<std::endl;
}
