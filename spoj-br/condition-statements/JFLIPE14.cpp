#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int a,b;
    std::cin>>a>>b;

    if (a==0) std::cout<<"C"<<'\n';
    else if(b==0) std::cout<<"B"<<'\n';
    else std::cout<<"A"<<'\n';
}
