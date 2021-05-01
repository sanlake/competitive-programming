#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int d;
    std::cin>>d;

    std::cout<<(int)(d/365)<<" ano(s)"<<std::endl;
    std::cout<<(int)(d%365)/30<<" mes(es)"<<std::endl;
    std::cout<<(int)(d%365)%30<<" dia(s)"<<std::endl;

}
