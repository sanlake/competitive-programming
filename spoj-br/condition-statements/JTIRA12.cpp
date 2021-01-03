#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b;
    std::cin>>a>>b;

    if(b<=468 && b>=0)
        if(a<=432 && a>=0) std::cout<<"dentro"<<'\n';
        else std::cout<<"fora"<<'\n';
    else std::cout<<"fora"<<'\n';
}
