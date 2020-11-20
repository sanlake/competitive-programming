#include <iostream>

int32_t main(void){
    int l;
    double t,s,n;
    char op;

    std::cin>>l>>op;

    for(int i=0; i<(l*12); i++) std::cin>>t;

    for(int i=(l*12); i<(l*12)+12; i++){
        std::cin>>n;
	s+=n;
    }

    for(int i=(l*12)+12; i<144; i++) std::cin>>t;

    if(op=='M') s/=12.0;
    
    std::cout.precision(1);
    std::cout<<std::fixed;
    std::cout<<s<<std::endl;
}

