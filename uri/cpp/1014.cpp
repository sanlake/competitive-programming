#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x;
    double y;

    std::cin>>x>>y;

    std::cout.precision(3);
    std::cout<<std::fixed<<x/y<<" km/l"<<std::endl;
}
