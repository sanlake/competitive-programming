#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    for(double i=0; i<=2; i+=0.2)
        for(int j=1; j<=3; j++)
            std::cout<<"I="<<i<<" J="<<j+i<<std::endl;
}
