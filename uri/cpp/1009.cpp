#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    std::string a;
    double b,c;
    
    std::cin>>a>>b>>c;

    std::cout.precision(2);
    std::cout<<"TOTAL = R$ "<<std::fixed<<b+(0.15*c)<<std::endl;    
}
