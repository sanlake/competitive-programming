#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x;
    std::cin>>x;

    for(int i=1; i<=x; i+=2) std::cout<<i<<std::endl;
}
