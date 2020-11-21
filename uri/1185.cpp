#include <iostream>

int32_t main(void){
    int c,q=0;
    double t,s=0.0,n;
    char op;

    std::cin>>op;

    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
	    if(i+j<11) { std::cin>>n; s+=n; q++;}
            else std::cin>>t;

    if(op=='M') s/=q;
    
    std::cout.precision(1);
    std::cout<<std::fixed;
    std::cout<<s<<std::endl;
}

