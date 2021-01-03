#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double a,g,Ra,Rg,al,ga;
    std::cin>>a>>g>>Ra>>Rg;

    al=a/Ra;
    ga=g/Rg;

    if(al<ga) std::cout<<"A"<<'\n';
    else std::cout<<"G"<<'\n';
}
