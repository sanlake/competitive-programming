#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <iomanip>

int32_t main(void){ DESYNC
    int a,b;
    while(std::cin>>a>>b){
        std::cout<<std::setw(2)<<std::setfill('0')<<a/30<<":";
        std::cout<<std::setw(2)<<std::setfill('0')<<b/6<<std::endl;
    }
}