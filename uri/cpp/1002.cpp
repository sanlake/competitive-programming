#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double n=3.14159,r;
    std::cin>>r;

    std::cout.precision(4);
    std::cout<<std::fixed<<"A="<<(n*r*r)<<std::endl;
}
