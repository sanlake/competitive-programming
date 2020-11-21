#include <iostream>

int32_t main(void){
    int c;
    double t,s=0.0,n;
    char op;

    std::cin>>c>>op;

    for(int i=0; i<12; i++)
        for(int j=0; j<12; j++)
	    if(j==c) { std::cin>>n; s+=n; }
            else std::cin>>t;

    if(op=='M') s/=12.0;
    
    std::cout.precision(1);
    std::cout<<std::fixed;
    std::cout<<s<<std::endl;
}
