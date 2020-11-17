#include <iostream>

int32_t main(void){
    int n,x,s;
    
    std::cin>>n;

    for(int i=0; i<n; i++){
    	s=0;
	std::cin>>x;

	for(int j=1; j<x; j++)
		if(x%j==0) s+=j;

        std::cout<<x;
	if(s!=x) std::cout<<" nao";
	std::cout<<" eh perfeito"<<std::endl;
    }
}
