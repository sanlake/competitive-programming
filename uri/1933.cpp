#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a=0,b=0;
    std::cin>>a>>b;

    if(a>b) std::cout<<a<<std::endl;
    else std::cout<<b<<std::endl;
}
