#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>
#include <string>

int32_t main(void){ DESYNC
    int q;
    std::string p = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    std::cin>>q;
    std::cout<<p.substr(0,q)<<std::endl;
}
