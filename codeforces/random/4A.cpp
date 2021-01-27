#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

#include <iostream>

int32_t main(void){ DESYNC
    int w;
    std::cin>>w;
    std::cout<<((w%2==0&&w>2)?"YES":"NO")<<'\n';
}
