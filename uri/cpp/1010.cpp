#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b,A,B;
    double c,C;
    
    std::cin>>a>>b>>c;
    std::cin>>A>>B>>C;

    std::cout.precision(2);
    std::cout<<"VALOR A PAGAR: R$ "<<std::fixed<<b*c+B*C<<std::endl;
}
