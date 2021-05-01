#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int v,t;
    std::cin>>t>>v;
    
    std::cout.precision(3);
    std::cout<<std::fixed<<v*t/12.0<<std::endl;
}
