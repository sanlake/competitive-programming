#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a;
    std::cin>>a;

    if(a<11) std::cout<<7<<'\n';
    else if(a>10 && a<31) std::cout<<7+((a-10)*1)<<'\n';
    else if(a>30 && a<101) std::cout<<7+20+((a-30)*2)<<'\n';
    else if(a>100) std::cout<<7+20+140+((a-100)*5)<<'\n';
}
