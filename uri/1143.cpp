#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <cmath>

int32_t main(void){ DESYNC
    int n;
    std::cin>>n;

    for(int i=1; i<=n; i++)
        std::cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<std::endl;
}
