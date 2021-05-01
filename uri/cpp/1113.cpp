#define DESYNC std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0);
#include <iostream>

int32_t main(void){ DESYNC
    int x,y;
    while(std::cin>>x>>y && x!=y)
        if(x>y) std::cout<<"Decrescente"<<std::endl;
        else std::cout<<"Crescente"<<std::endl;
}
