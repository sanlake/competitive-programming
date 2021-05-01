#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x,z,s=0,c=0;
    std::cin>>x;

    while(std::cin>>z && z<=x) continue;
    while(s<=z) s+=x+(c++);

    std::cout<<c<<std::endl;
}
