#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,c=0,s=0;

    while(std::cin>>n && n>=0) { c++; s+=n; }

    std::cout.precision(2);
    std::cout<<std::fixed;
    std::cout<<(double)s/c<<std::endl;
}
