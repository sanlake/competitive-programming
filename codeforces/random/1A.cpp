#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);

#include <iostream>

int32_t main(void){ DESYNC
    long long int n,m,a;
    std::cin>>n>>m>>a;
    std::cout<<((n+a-1)/a)*((m+a-1)/a)<<'\n';
}
