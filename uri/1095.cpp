#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    for(int j=60; j>=0; j-=5)
        std::cout<<"I="<<((12-(j/5))*3)+1<<" J="<<j<<std::endl;
}
