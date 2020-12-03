#include <iostream>

int32_t main(void){
    int m=0,M=0;
    double aux,s=0,v[5];

    for(int i=0; i<5; i++){
	std::cin>>aux;
        v[i]=aux;
    }

    for(int i=0; i<5; i++){
    	if(v[i]>v[M]) M=i;
	else if(v[i]<v[m]) m=i;
    }

    v[m]=0;
    v[M]=0;
    
    for(int i=0; i<5; i++) s+=v[i];

    std::cout<<std::fixed;
    std::cout.precision(1);
    std::cout<<s<<std::endl;
}
