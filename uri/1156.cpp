#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){ DESYNC
    double s=0;
    
    for(int i=1; i<=39; i+=2) s+=(i/(pow(2,(i/2))));

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<s<<std::endl;
}
