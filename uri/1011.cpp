#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double r,pi=3.14159;
    std::cin>>r;

    std::cout.precision(3);
    std::cout<<"VOLUME = "<<std::fixed<<(4/3.0)*pi*r*r*r<<std::endl;
}
