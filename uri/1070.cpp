#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x;
    std::cin>>x;
    
    if(x%2==0) x++;

    for(int i=x; i<=x+11; i+=2) std::cout<<i<<std::endl;
}
