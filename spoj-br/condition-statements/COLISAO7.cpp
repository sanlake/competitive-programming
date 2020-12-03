#include <iostream>

int32_t main(void) {
    int ax0,ax1,ay0,ay1,bx0,bx1,by0,by1;
    std::cin>>ax0>>ay0>>ax1>>ay1>>bx0>>by0>>bx1>>by1;

    if(bx0>ax1||by1<ay0||bx1<ax0||by0>ay1) std::cout<<0<<std::endl;
    else std::cout<<1<<std::endl;
}
