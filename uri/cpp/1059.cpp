#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    for(int i=2; i<=100; i+=2) std::cout<<i<<std::endl;
}
