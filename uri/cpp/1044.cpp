#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b;
    std::cin>>a>>b;

    if(a==0 || b==0 || b%a==0 || a%b==0) std::cout<<"Sao Multiplos"<<std::endl;
    else std::cout<<"Nao sao Multiplos"<<std::endl;
}
