#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    for(int i=1; i<=9; i+=2)
        for(int j=7+i-1; j>=5+i-1; j--)
            std::cout<<"I="<<i<<" J="<<j<<std::endl;
}
