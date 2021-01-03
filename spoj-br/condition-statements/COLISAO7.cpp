#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int ax0,ax1,ay0,ay1,bx0,bx1,by0,by1;
    std::cin>>ax0>>ay0>>ax1>>ay1>>bx0>>by0>>bx1>>by1;
    std::cout((bx0>ax1||by1<ay0||bx1<ax0||by0>ay1)?0:1)<<'\n';
}
