#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double a,b,c,d;
    std::cin>>a>>b>>c>>d;
    std::cout<<"DIFERENCA = "<<a*b-c*d<<std::endl;
}
