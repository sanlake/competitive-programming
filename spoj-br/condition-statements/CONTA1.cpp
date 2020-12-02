#include <iostream>

int32_t main(void) {
    int a;
    std::cin>>a;

    if(a<11) std::cout<<7<<std::endl;
    else if(a>10 && a<31) std::cout<<7+((a-10)*1)<<std::endl;
    else if(a>30 && a<101) std::cout<<7+20+((a-30)*2)<<std::endl;
    else if(a>100) std::cout<<7+20+140+((a-100)*5)<<std::endl;
}
