#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    double s=0;
    
    for(int i=1; i<=100; i++) s+=(1.0/i);

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<s<<std::endl;
}
