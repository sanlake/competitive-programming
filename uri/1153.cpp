#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int n,s=1;
    std::cin>>n;

    for(int i=n; i>=1; i--) s*=i;

    std::cout<<s<<std::endl;
}
